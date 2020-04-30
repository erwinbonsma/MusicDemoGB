#include <Gamebuino-Meta.h>

class ButtonControl {
  uint8_t _x, _y;
  uint8_t _frameIndex;
  uint8_t _animCount;

public:
  void init(int x, int y, int frameIndex);

  void click();

  void update();
  void draw();
};

constexpr int numButtons = 4;

class Buttons {
  ButtonControl _buttons[numButtons];

public:
  Buttons();

  ButtonControl& playButton() { return _buttons[0]; }
  ButtonControl& stopButton() { return _buttons[1]; }
  ButtonControl& prevButton() { return _buttons[2]; }
  ButtonControl& nextButton() { return _buttons[3]; }

  void update();
  void draw();
};

