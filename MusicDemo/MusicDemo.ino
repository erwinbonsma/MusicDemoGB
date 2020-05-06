#include <Gamebuino-Meta.h>

#include "Buttons.h"
#include "Images.h"

#include "Song_AlexKidd.h"
#include "Song_BumbleBots.h"
#include "Song_Neon.h"
#include "Song_Porklike.h"
#include "Song_RockForMetal.h"
#include "Song_TheLair.h"
#include "Song_Wintergolf.h"

constexpr int NUM_SONGS = 12;
const Gamebuino_Meta::SongSpec* songs[NUM_SONGS] = {
  bumbleBotsSong1,
  bumbleBotsSong2,
  rockForMetalSong,
  alexKiddSong1,
  alexKiddSong2,
  alexKiddSong3,
  neonSong,
  theLairSong1,
  theLairSong2,
  theLairSong3,
  wintergolfSong,
  porklikeSong
};

const char *const creditsPaul = "Paul Bonsma";
const char *const creditsDomarius = "Domarius";
const char *const creditsGruberMusic = "Gruber Music";

struct MetaSpec {
  const char *const title;
  const char *const credits;
};

const MetaSpec songInfo[NUM_SONGS] = {
  MetaSpec { .title = "Bumble Bots #1", .credits = creditsPaul },
  MetaSpec { .title = "Bumble Bots #2", .credits = creditsPaul },
  MetaSpec { .title = "Rock for Metal", .credits = "Jumalauta" },
  MetaSpec { .title = "Alex Kidd #1", .credits = creditsDomarius },
  MetaSpec { .title = "Alex Kidd #2", .credits = creditsDomarius },
  MetaSpec { .title = "Alex Kidd #3", .credits = creditsDomarius },
  MetaSpec { .title = "Neon", .credits = "Luca Harris" },
  MetaSpec { .title = "The Lair #1", .credits = creditsGruberMusic },
  MetaSpec { .title = "The Lair #2", .credits = creditsGruberMusic },
  MetaSpec { .title = "The Lair 3", .credits = creditsGruberMusic },
  MetaSpec { .title = "Wintergolf", .credits = creditsGruberMusic },
  MetaSpec { .title = "Porklike", .credits = "Krystian Majewski" },
};

constexpr int HISTORY_LEN = 25;
int8_t cpuLoadHistory[HISTORY_LEN];
int cpuLoadHistoryIndex;
int8_t levelHistory[HISTORY_LEN];
int levelHistoryIndex;

Buttons buttons;
int songIndex;
bool playing;

void prevSong() {
  if (songIndex == 0) {
    songIndex = NUM_SONGS - 1;
  } else {
    --songIndex;
  }
}

void nextSong() {
  ++songIndex;
  if (songIndex == NUM_SONGS) {
    songIndex = 0;
  }
}

void playSong() {
  gb.sound.playSong(songs[songIndex], buttons.repeatButton().isEnabled());
}

void update() {
  buttons.update();

  if (playing && !gb.sound.isSongPlaying()) {
    // Song just finished. Go to next
    nextSong();
    playSong();
  }

  if (gb.buttons.held(BUTTON_A, 0)) {
    buttons.playButton().click();
    playing = !playing;
    if (!playing) {
      gb.sound.pauseSong(true);
    } else {
      if (gb.sound.isSongPaused()) {
        gb.sound.pauseSong(false);
      } else {
        playSong();
      }
    }
  }
  if (gb.buttons.held(BUTTON_B, 0)) {
    buttons.stopButton().click();
    playing = false;
    gb.sound.stopSong();
  }

  if (gb.buttons.held(BUTTON_LEFT, 0)) {
    buttons.prevButton().click();
    prevSong();
    if (playing) {
      playSong();
    }
  }
  if (gb.buttons.held(BUTTON_RIGHT, 0)) {
    buttons.nextButton().click();
    nextSong();
    if (playing) {
      playSong();
    }
  }
  if (gb.buttons.held(BUTTON_UP, 0)) {
    buttons.repeatButton().click();
    gb.sound.loopSong(buttons.repeatButton().isEnabled());
  }

  cpuLoadHistory[cpuLoadHistoryIndex++] = gb.getCpuLoad();
  if (cpuLoadHistoryIndex == HISTORY_LEN) {
    cpuLoadHistoryIndex = 0;
  }
  levelHistory[levelHistoryIndex++] = gb.sound.getLevel();
  if (levelHistoryIndex == HISTORY_LEN) {
    levelHistoryIndex = 0;
  }
}

void drawDisplay(int x, int y, int w, int h) {
  gb.display.setColor(INDEX_BLACK);
  gb.display.fillRect(x + 1, y + 1, w - 2, h - 2);

  gb.display.setColor(INDEX_DARKGRAY);
  gb.display.drawFastHLine(x, y, w - 1);
  gb.display.drawFastVLine(x, y + 1, h - 2);

  gb.display.setColor(INDEX_WHITE);
  gb.display.drawFastHLine(x + 1, y + h - 1, w - 1);
  gb.display.drawFastVLine(x + w - 1, y + 1, h - 2);
}

void drawSongTime() {
  int len;
  if (gb.sound.isSongPlaying() || gb.sound.isSongPaused()) {
    len = gb.sound.songProgressInSeconds();
  } else {
    len = songs[songIndex]->lengthInSeconds();
  }

  drawDisplay(51, 23, 23, 9);

  gb.display.setColor(INDEX_BROWN);
  gb.display.setCursor(53, 25);

  gb.display.printf("%02d:%02d", len / 60, len % 60);
}

void drawTrackNumber() {
  drawDisplay(6, 23, 23, 9);

  gb.display.setColor(INDEX_BROWN);
  gb.display.setCursor(8, 25);

  gb.display.printf("%02d/%02d", (songIndex + 1), NUM_SONGS);
}

void drawSongInfo() {
  drawDisplay(2, 2, 76, 16);
  gb.display.setColor(INDEX_BROWN);
  gb.display.setCursor(4, 4);
  gb.display.print(songInfo[songIndex].title);
  gb.display.setCursor(4, 10);
  gb.display.printf("by %s\n", songInfo[songIndex].credits);
}

void drawOutputLevel() {
  drawDisplay(6, 37, 68, 9);

  int minLevel = 64;
  int maxLevel = 0;
  for (int i = HISTORY_LEN; --i >= 0;  ) {
    int level = levelHistory[i];
    minLevel = min(minLevel, level);
    maxLevel = max(maxLevel, level);
  }

  gb.display.setColor(INDEX_BROWN);
  gb.display.fillRect(8, 39, levelHistory[(levelHistoryIndex + HISTORY_LEN - 1) % HISTORY_LEN], 5);

  gb.display.setColor(INDEX_ORANGE);
  gb.display.drawFastVLine(8 + minLevel, 39, 5);

  gb.display.setColor(INDEX_YELLOW);
  gb.display.drawFastVLine(8 + maxLevel, 39, 5);
}

void drawLogo() {
  gb.display.drawImage(34, 20, logoImage);
}

void draw() {
  gb.display.clear(INDEX_GRAY);

  drawSongTime();
  drawSongInfo();
  drawTrackNumber();
  drawOutputLevel();
  drawLogo();

  buttons.draw();
}

void setup() {
  gb.begin();
}

void loop() {
  while(!gb.update());

  update();
  draw();
}
