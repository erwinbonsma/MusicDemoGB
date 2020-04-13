#include <Gamebuino-Meta.h>

#include "Tune.h"
#include "Song.h"

constexpr int HISTORY_LEN = 160;
int8_t cpuLoadHistory[HISTORY_LEN];
int cpuLoadHistoryIndex;

int tuneIndex;

const char* text =
  "                     "
  "Sound & Music demo     "
  "Version 0.1     "
  "Press A and B     "
  "Coding by Erwin Bonsma     "
  "Composition by Paul Bonsma";
int textLen;
int textIndex;

void drawCpuHistory() {
  gb.display.setColor(INDEX_WHITE);
  for (int x = HISTORY_LEN; --x >= 0; ) {
    int val = max(40, cpuLoadHistory[(cpuLoadHistoryIndex + x) % HISTORY_LEN]);
    gb.display.drawPixel(x, 128 - val + 40);
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
  if ((textIndex >> 3) == textLen) {
    textIndex = 0;
  }
}

void draw() {
  gb.display.clear();

  gb.display.setColor(INDEX_WHITE);
  gb.display.setCursor(8 - (textIndex % 8), 20);
  gb.display.setTextWrap(false);
  gb.display.print(text + (textIndex >> 3));

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
