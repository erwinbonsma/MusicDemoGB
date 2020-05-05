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

constexpr int NUM_SONGS = 11;
const Gamebuino_Meta::SongSpec* songs[NUM_SONGS] = {
  bumbleBotsSong,
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

const char *const titleBumbleBots = "Bumble Bots";
const char *const titleRockForMetal = "Rock For Metal";
const char *const titleAlexKidd1 = "Alex Kidd #1";
const char *const titleAlexKidd2 = "Alex Kidd #2";
const char *const titleAlexKidd3 = "Alex Kidd #3";
const char *const titleNeon = "Neon";
const char *const titleTheLair1 = "The Lair #1";
const char *const titleTheLair2 = "The Lair #2";
const char *const titleTheLair3 = "The Lair #3";
const char *const titleWintergolf = "Wintergolf";
const char *const creditsBumbleBots = "Paul Bonsma";
const char *const creditsRockForMetal = "Jumalauta";
const char *const creditsAlexKidd = "Domarius";
const char *const creditsNeon = "Luca Harris";
const char *const creditsTheLair = "Gruber Music";
const char *const creditsWintergolf = creditsTheLair;

struct MetaSpec {
  const char *const title;
  const char *const credits;
};

const MetaSpec songInfo[NUM_SONGS] = {
  MetaSpec { .title =  titleBumbleBots, .credits = creditsBumbleBots },
  MetaSpec { .title =  titleRockForMetal, .credits = creditsRockForMetal },
  MetaSpec { .title =  titleAlexKidd1, .credits = creditsAlexKidd },
  MetaSpec { .title =  titleAlexKidd2, .credits = creditsAlexKidd },
  MetaSpec { .title =  titleAlexKidd3, .credits = creditsAlexKidd },
  MetaSpec { .title =  titleNeon, .credits = creditsNeon },
  MetaSpec { .title =  titleTheLair1, .credits = creditsTheLair },
  MetaSpec { .title =  titleTheLair2, .credits = creditsTheLair },
  MetaSpec { .title =  titleTheLair3, .credits = creditsTheLair },
  MetaSpec { .title =  titleWintergolf, .credits = creditsWintergolf },
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

  drawDisplay(51, 22, 23, 9);

  gb.display.setColor(INDEX_BROWN);
  gb.display.setCursor(53, 24);

  gb.display.printf("%02d:%02d", len / 60, len % 60);
}

void drawTrackNumber() {
  drawDisplay(6, 22, 23, 9);

  gb.display.setColor(INDEX_BROWN);
  gb.display.setCursor(8, 24);

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
  drawDisplay(6, 36, 68, 10);

  int minLevel = 64;
  int maxLevel = 0;
  for (int i = HISTORY_LEN; --i >= 0;  ) {
    int level = levelHistory[i];
    minLevel = min(minLevel, level);
    maxLevel = max(maxLevel, level);
  }

  gb.display.setColor(INDEX_BROWN);
  gb.display.fillRect(7, 37, levelHistory[(levelHistoryIndex + HISTORY_LEN - 1) % HISTORY_LEN], 6);

  gb.display.setColor(INDEX_ORANGE);
  gb.display.drawFastVLine(7 + minLevel, 37, 6);

  gb.display.setColor(INDEX_YELLOW);
  gb.display.drawFastVLine(7 + maxLevel, 37, 6);
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
