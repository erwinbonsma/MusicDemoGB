#include "Buttons.h"

#include "Images.h"

constexpr int animCountMax = 7;
constexpr int animCountPressedLo = 3;
constexpr int animCountPressedHi = 5;

ColorIndex borderColors[3][2] = {
  { INDEX_WHITE, INDEX_DARKGRAY },
  { INDEX_GRAY, INDEX_GRAY },
  { INDEX_DARKGRAY, INDEX_WHITE }
};

void ButtonControl::init(int x, int y, int frameIndex) {
  _x = x;
  _y = y;
  _frameIndex = frameIndex;
}

int ButtonControl::borderColorIndex() const {
  return (_animCount > 0) ? ((_animCount >= animCountPressedLo && _animCount <= animCountPressedHi) ? 2 : 1) : 0;
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
  int bci = borderColorIndex();

  gb.display.setColor(borderColors[bci][0]);
  gb.display.drawFastHLine(_x + 1, _y, 11);
  gb.display.drawFastVLine(_x, _y + 1, 11);

  gb.display.setColor(borderColors[bci][1]);
  gb.display.drawFastHLine(_x + 1, _y + 12, 11);
  gb.display.drawFastVLine(_x + 12, _y + 1, 11);

  buttonsImage.setFrame(_frameIndex);
  gb.display.drawImage(_x + 2, _y + 2, buttonsImage);
}

void ToggleButtonControl::click() {
  _enabled = !_enabled;
  ButtonControl::click();
}

void ToggleButtonControl::draw() {
  bool showEnabled = _enabled;
  if (_animCount >= animCountPressedHi) {
    // Only visibly show toggled state once button has been fully pressed
    showEnabled = !showEnabled;
  }

  int bci = borderColorIndex();

//  gb.display.setColor(INDEX_BLUE);
//  gb.display.drawRect(_x + 1, _y + 1, 12, 11);

  gb.display.setColor(borderColors[bci][0]);
  gb.display.drawFastHLine(_x + 3, _y + 1, 8);
  gb.display.drawFastVLine(_x + 1, _y + 3, 7);
  gb.display.drawPixel(_x + 2, _y + 2);

  gb.display.setColor(borderColors[bci][1]);
  gb.display.drawFastHLine(_x + 3, _y + 11, 8);
  gb.display.drawFastVLine(_x + 12, _y + 3, 7);
  gb.display.drawPixel(_x + 11, _y + 10);

  toggleButtonImage.setFrame(_frameIndex + showEnabled);
  gb.display.drawImage(_x + 3, _y + 3, toggleButtonImage);
}

Buttons::Buttons() {
  _buttons[0].init( 3, 48, 0);
  _buttons[1].init(18, 48, 2);
  _buttons[2].init(49, 48, 3);
  _buttons[3].init(64, 48, 4);
  _toggleButton.init(33, 48, 0);
}

void Buttons::update() {
  for (int i = numButtons; --i >= 0; ) {
    _buttons[i].update();
  }
  _toggleButton.update();
}

void Buttons::draw() {
  for (int i = numButtons; --i >= 0; ) {
    _buttons[i].draw();
  }
  _toggleButton.draw();
}
