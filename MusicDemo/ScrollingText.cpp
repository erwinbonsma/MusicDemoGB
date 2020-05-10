#include <Gamebuino-Meta.h>

#include "ScrollingText.h"

ScrollingText::ScrollingText(int width, int x0, int y0)
: _width(width), _x0(x0), _y0(y0) {
}

void ScrollingText::setText(const char* text) {
  _text = text;
  _delta = 0;

  int textLen = strlen(text);
  _maxDelta = (_width - textLen) * 4;
  _movingRight = (_maxDelta < 0);
}

void ScrollingText::update() {
  if (_maxDelta == 0) {
    // Text fits exactly and does not scroll
    return;
  }

  if (_delta == 0 || _delta == _maxDelta) {
    _movingRight = !_movingRight;
  }

  _delta += _movingRight ? 1 : -1;
}

void ScrollingText::draw() {
  int dx = (_delta >= 0) ? _delta : _delta % 4;
  int firstChar = (_delta >= 0) ? 0 : (-_delta / 4);
  int maxWidth = _width + (dx < 0);

  gb.display.setCursor(_x0 + dx, _y0);
  gb.display.printf("%.*s", maxWidth, (_text + firstChar));
}
