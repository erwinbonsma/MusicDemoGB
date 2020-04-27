#include <Gamebuino-Meta.h>

#include "Song_AlexKidd.h"
#include "Song_BumbleBots.h"
#include "Song_RockForMetal.h"
#include "Song_Zepton.h"

constexpr int NUM_SONGS = 7;
int songIndex;
const Gamebuino_Meta::SongSpec* songs[NUM_SONGS] = {
  bumbleBotsSong,
  rockForMetalSong,
  zeptonSong1,
  zeptonSong2,
  alexKiddSong1,
  alexKiddSong2,
  alexKiddSong3,
};

const char *const titleBumbleBots = "Bumble Bots";
const char *const titleRockForMetal = "Rock For Metal";
const char *const titleZepton1 = "Zepton #1";
const char *const titleZepton2 = "Zepton #2";
const char *const titleAlexKidd1 = "Alex Kidd #1";
const char *const titleAlexKidd2 = "Alex Kidd #2";
const char *const titleAlexKidd3 = "Alex Kidd #3";
const char *const creditsBumbleBots = "Paul Bonsma";
const char *const creditsRockForMetal = "Jumalauta";
const char *const creditsZepton = "rez";
const char *const creditsAlexKidd = "Domarius";

struct MetaSpec {
  const char *const title;
  const char *const credits;
};

const MetaSpec songInfo[NUM_SONGS] = {
  MetaSpec { .title =  titleBumbleBots, .credits = creditsBumbleBots },
  MetaSpec { .title =  titleRockForMetal, .credits = creditsRockForMetal },
  MetaSpec { .title =  titleZepton1, .credits = creditsZepton },
  MetaSpec { .title =  titleZepton2, .credits = creditsZepton },
  MetaSpec { .title =  titleAlexKidd1, .credits = creditsAlexKidd },
  MetaSpec { .title =  titleAlexKidd2, .credits = creditsAlexKidd },
  MetaSpec { .title =  titleAlexKidd3, .credits = creditsAlexKidd },
};

constexpr int HISTORY_LEN = 80;
int8_t cpuLoadHistory[HISTORY_LEN];
int cpuLoadHistoryIndex;
int8_t levelHistory[HISTORY_LEN];
int levelHistoryIndex;

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

char songLenBuf[8];
void updateSongInfo() {
  int len = songs[songIndex]->lengthInSeconds();
  snprintf(songLenBuf, 8, "%d:%02d", len / 60, len % 60);
}

void nextSong() {
  ++songIndex;
  if (songIndex == NUM_SONGS) {
    songIndex = 0;
  }

  updateSongInfo();
}

void update() {
  if (gb.buttons.held(BUTTON_A, 0)) {
    if (gb.sound.isSongPlaying()) {
      gb.sound.stopSong();
    } else {
      gb.sound.playSong(songs[songIndex], true);
    }
  }
  if (gb.buttons.held(BUTTON_B, 0)) {
    nextSong();
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

void draw() {
  gb.display.clear();

  gb.display.setColor(INDEX_WHITE);
  gb.display.setCursor(64, 0);
  gb.display.print(songLenBuf);
  gb.display.setCursor(0, 0);
  gb.display.println(songInfo[songIndex].title);
  gb.display.printf("by %s\n", songInfo[songIndex].credits);

  drawCpuHistory();
  drawLevelHistory();
  gb.display.println(gb.getFreeRam());
}

void setup() {
  gb.begin();
  updateSongInfo();
}

void loop() {
  while(!gb.update());

  update();
  draw();
}
