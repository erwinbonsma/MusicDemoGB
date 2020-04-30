#include <Gamebuino-Meta.h>

#include "Buttons.h"

#include "Song_AlexKidd.h"
#include "Song_BumbleBots.h"
#include "Song_Neon.h"
#include "Song_RockForMetal.h"
#include "Song_TheLair.h"

constexpr int NUM_SONGS = 9;
int songIndex;
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
const char *const creditsBumbleBots = "Paul Bonsma";
const char *const creditsRockForMetal = "Jumalauta";
const char *const creditsAlexKidd = "Domarius";
const char *const creditsNeon = "Luca Harris";
const char *const creditsTheLair = "Gruber Music";

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
};

constexpr int HISTORY_LEN = 80;
int8_t cpuLoadHistory[HISTORY_LEN];
int cpuLoadHistoryIndex;
int8_t levelHistory[HISTORY_LEN];
int levelHistoryIndex;

Buttons buttons;

void drawCpuHistory() {
  for (int x = HISTORY_LEN; --x >= 0; ) {
    int val = max(45, cpuLoadHistory[(cpuLoadHistoryIndex + x) % HISTORY_LEN]);
    if (val < 55) {
      gb.display.setColor(INDEX_GREEN);
    } else if (val < 65) {
      gb.display.setColor(INDEX_YELLOW);
    } else {
      gb.display.setColor(INDEX_RED);
    }

    gb.display.drawPixel(x, 63 - val + 45);
  }
}

void drawLevelHistory() {
  gb.display.setColor(INDEX_WHITE);
  for (int x = HISTORY_LEN; --x >= 0; ) {
    int val = levelHistory[(levelHistoryIndex + x) % HISTORY_LEN];
    gb.display.drawPixel(x, 63 - val);
  }
}

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

void update() {
  buttons.update();

  if (gb.buttons.held(BUTTON_A, 0)) {
    if (gb.sound.isSongPlaying()) {
      buttons.click(PlayerButton::Stop);
      gb.sound.stopSong();
    } else {
      buttons.click(PlayerButton::Play);
      gb.sound.playSong(songs[songIndex], true);
    }
  }
  if (gb.buttons.held(BUTTON_B, 0)) {
    buttons.click(PlayerButton::Pause);
    if (gb.sound.isSongPlaying() || gb.sound.isSongPaused()) {
      gb.sound.pauseSong( !gb.sound.isSongPaused() );
    } else {
      // Ignore. If song is stopped, pausing has no effect
    }
  }

  if (gb.buttons.held(BUTTON_LEFT, 0)) {
    prevSong();
    buttons.click(PlayerButton::Prev);
    if (gb.sound.isSongPlaying()) {
      gb.sound.playSong(songs[songIndex], true);
    }
  }
  if (gb.buttons.held(BUTTON_RIGHT, 0)) {
    nextSong();
    buttons.click(PlayerButton::Next);
    if (gb.sound.isSongPlaying()) {
      gb.sound.playSong(songs[songIndex], true);
    }
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
  drawDisplay(55, 20, 23, 9);

  gb.display.setColor(INDEX_BROWN);
  gb.display.setCursor(57, 22);

  int len;
  if (gb.sound.isSongPlaying() || gb.sound.isSongPaused()) {
    len = gb.sound.songProgressInSeconds();
  } else {
    len = songs[songIndex]->lengthInSeconds();
  }
  gb.display.printf("%02d:%02d", len / 60, len % 60);
}

void drawTrackNumber() {
  drawDisplay(2, 20, 23, 9);

  gb.display.setColor(INDEX_BROWN);
  gb.display.setCursor(4, 22);

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

void draw() {
  gb.display.clear(INDEX_GRAY);

  drawSongTime();
  drawSongInfo();
  drawTrackNumber();

//  drawCpuHistory();
//  drawLevelHistory();
//  gb.display.println(gb.getFreeRam());

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
