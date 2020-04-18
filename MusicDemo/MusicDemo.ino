#include <Gamebuino-Meta.h>

#include "Tune.h"
#include "Song.h"

constexpr int HISTORY_LEN = 80;
int8_t cpuLoadHistory[HISTORY_LEN];
int cpuLoadHistoryIndex;

int tuneIndex;

const char* text =
  "                     "
  "Sound & Music demo     "
  "Version 0.2     "
  "Press A and B     "
  "Coding by Erwin Bonsma     "
  "Composition by Paul Bonsma";
int textLen;
int textIndex;

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

void update() {
  if (gb.buttons.held(BUTTON_A, 0)) {
    gb.sound.fx(exampleTunes[tuneIndex++]);
    if (tuneIndex == numExampleTunes) {
      tuneIndex = 0;
    }
  }
  if (gb.buttons.held(BUTTON_B, 0)) {
    if (gb.sound.isSongPlaying()) {
      gb.sound.stopSong();
    } else {
      gb.sound.playSong(bumbleBotsSong, true);
    }
  }

  cpuLoadHistory[cpuLoadHistoryIndex++] = gb.getCpuLoad();
  if (cpuLoadHistoryIndex == HISTORY_LEN) {
    cpuLoadHistoryIndex = 0;
  }

  textIndex++;
  if ((textIndex >> 2) == textLen) {
    textIndex = 0;
  }
}

void draw() {
  gb.display.clear();

  gb.display.setColor(INDEX_WHITE);
  gb.display.setCursor(4 - (textIndex % 4), 20);
  gb.display.setTextWrap(false);
  gb.display.print(text + (textIndex >> 2));

  drawCpuHistory();
}

void setup() {
  gb.begin();
  textLen = strlen(text);
}

void loop() {
  while(!gb.update());

  update();
  draw();
}
