#include "Buttons.h"

#include "Images.h"

constexpr int numButtons = 5;

constexpr int animCountMax = 7;
constexpr int animCountPressedLo = 3;
constexpr int animCountPressedHi = 5;

constexpr int buttons_x0 = 3;
constexpr int buttons_y0 = 48;

void Buttons::click(PlayerButton button) {
  _activeButton = button;
  _animCount = animCountMax;
}

void Buttons::update() {
  if (_animCount > 0) {
    --_animCount;
  }
}

void Buttons::draw() {
  int x = buttons_x0, y = buttons_y0;

  for (int i = 0; i < numButtons; i++) {
    ColorIndex c1, c2;

    if (i == (int)_activeButton && _animCount > 0) {
      if (_animCount >= animCountPressedLo && _animCount <= animCountPressedHi) {
        c1 = INDEX_DARKGRAY;
        c2 = INDEX_WHITE;
      } else {
        c1 = INDEX_GRAY;
        c2 = INDEX_GRAY;
      }
    } else {
        c1 = INDEX_WHITE;
        c2 = INDEX_DARKGRAY;
    }

    gb.display.setColor(c1);
    gb.display.drawFastHLine(x + 1, y, 11);
    gb.display.drawFastVLine(x, y + 1, 11);

    gb.display.setColor(c2);
    gb.display.drawFastHLine(x + 1, y + 12, 11);
    gb.display.drawFastVLine(x + 12, y + 1, 11);

    buttonsImage.setFrame(i);
    gb.display.drawImage(x + 2, y + 2, buttonsImage);
    x += 15;
    if (i == 2) {
      ++x;
    }
  }
}

