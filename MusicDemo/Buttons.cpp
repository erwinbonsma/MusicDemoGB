#include "Buttons.h"

#include "Images.h"

constexpr int animCountMax = 7;
constexpr int animCountPressedLo = 3;
constexpr int animCountPressedHi = 5;

void ButtonControl::init(int x, int y, int frameIndex) {
  _x = x;
  _y = y;
  _frameIndex = frameIndex;
}

void ButtonControl::click() {
  _animCount = animCountMax;
}

void ButtonControl::update() {
  if (_animCount > 0) {
    --_animCount;
  }
}

void ButtonControl::draw() {
  ColorIndex c1, c2;

  if (_animCount > 0) {
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
  gb.display.drawFastHLine(_x + 1, _y, 11);
  gb.display.drawFastVLine(_x, _y + 1, 11);

  gb.display.setColor(c2);
  gb.display.drawFastHLine(_x + 1, _y + 12, 11);
  gb.display.drawFastVLine(_x + 12, _y + 1, 11);

  buttonsImage.setFrame(_frameIndex);
  gb.display.drawImage(_x + 2, _y + 2, buttonsImage);
}

Buttons::Buttons() {
  _buttons[0].init( 3, 48, 0);
  _buttons[1].init(18, 48, 2);
  _buttons[2].init(49, 48, 3);
  _buttons[3].init(64, 48, 4);
}

void Buttons::update() {
  for (int i = numButtons; --i >= 0; ) {
    _buttons[i].update();
  }
}

void Buttons::draw() {
  for (int i = numButtons; --i >= 0; ) {
    _buttons[i].draw();
  }
}
