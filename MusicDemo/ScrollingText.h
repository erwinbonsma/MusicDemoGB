#include <Gamebuino-Meta.h>

class ScrollingText {
  const char* _text;
  int16_t _delta, _maxDelta;
  uint8_t _x0, _y0;
  uint8_t _width; // in characters
  bool _movingRight;

public:
  ScrollingText(int width, int x0, int y0);

  void setText(const char* text);

  void update();
  void draw();
};
