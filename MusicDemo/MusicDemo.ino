#include <Gamebuino-Meta.h>

#include "Tune.h"
#include "Song.h"

constexpr int HISTORY_LEN = 160;
int8_t cpuLoadHistory[HISTORY_LEN];
int cpuLoadHistoryIndex;

void displayCpuLoad() {
  int cpuLoad = gb.getCpuLoad();
  if (cpuLoad >= 70) {
    gb.display.setColor(INDEX_GREEN);
    gb.display.drawLine(0, 127, min(9, cpuLoad - 70), 127);
  }
  if (cpuLoad >= 80) {
    gb.display.setColor(INDEX_YELLOW);
    gb.display.drawLine(10, 127, 10 + min(20, cpuLoad - 80), 127);
  }
  if (cpuLoad >= 100) {
    gb.display.setColor(INDEX_RED);
    gb.display.drawLine(30, 127, 30 + min(20, cpuLoad - 100), 127);
  }
  if (cpuLoad < 120) {
    gb.display.setColor(INDEX_BLACK);
    gb.display.drawLine(max(0, cpuLoad - 69), 127, 50, 127);
  }
  gb.display.setCursor(0,0);
  gb.display.setColor(INDEX_WHITE);
  gb.display.print(cpuLoad);
}

void drawCpuHistory() {
  gb.display.setColor(INDEX_WHITE);
  for (int x = HISTORY_LEN; --x >= 0; ) {
    int val = max(40, cpuLoadHistory[(cpuLoadHistoryIndex + x) % HISTORY_LEN]);
    gb.display.drawPixel(x, 128 - val + 40);
  }
}

void update() {
  if (gb.buttons.held(BUTTON_A, 0)) {
    gb.sound.fx(testTune);
  }
  if (gb.buttons.held(BUTTON_B, 0)) {
    gb.sound.play(bumbleBotsSong, true);
  }

  cpuLoadHistory[cpuLoadHistoryIndex++] = gb.getCpuLoad();
  if (cpuLoadHistoryIndex == HISTORY_LEN) {
    cpuLoadHistoryIndex = 0;
  }
}

void draw() {
  gb.display.clear();
  displayCpuLoad();
  drawCpuHistory();
}

void setup() {
  gb.begin();
}

void loop() {
  while(!gb.update());

  update();
  draw();
}
