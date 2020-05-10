#include <Gamebuino-Meta.h>

#include "ScrollingText.h"

ScrollingText::ScrollingText(int width, int x0, int y0)
: _width(width), _x0(x0), _y0(y0) {
}

void ScrollingText::setText(const char* text) {
  _text = text;
  _delta = 0;
  _waitCount = 0;

  int textLen = strlen(text) * 4 - 1;
  _maxDelta = _width - textLen;
  _movingRight = (_maxDelta < 0);
}

void ScrollingText::update() {
  if (_maxDelta == 0) {
    // Text fits exactly and does not scroll
    return;
  }

  if (_waitCount > 0) {
    --_waitCount;
  } else if (_delta == 0 || _delta == _maxDelta) {
    _movingRight = !_movingRight;
    // Wait longer for text that does not fully fit, so that there is sufficient time to see
    // the terminal characters.
    _waitCount = (_maxDelta < 0) ? 40 : 20;
  }

  if (_waitCount > 0) {
    return;
  }

  _delta += _movingRight ? 1 : -1;

  if (_delta != 0 && _delta != _maxDelta) {
    // Do not scroll a full pixel every frame
    _waitCount = 5;
  }
}

void ScrollingText::draw() {
  int dx = (_delta >= 0) ? _delta : _delta % 4;
  int firstChar = (_delta >= 0) ? 0 : (-_delta / 4);
  int maxWidth = (_width / 4) + (dx < 0);

  if (dx == -3) {
    // First character is entirely outside of target area. Only space would be drawn. Therefore skip it.
    dx += 4;
    ++firstChar;
    --maxWidth;
  } else if (dx == -1) {
    // Last character is entirely outside of target area. Only space would be drawn. Therefore skip it.
    --maxWidth;
  }

  gb.display.setCursor(_x0 + dx, _y0);
  gb.display.printf("%.*s", maxWidth, (_text + firstChar));
}
