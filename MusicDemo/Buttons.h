#include <Gamebuino-Meta.h>

class ButtonControl {
protected:
  uint8_t _x, _y;
  uint8_t _frameIndex;
  uint8_t _animCount;

  int borderColorIndex() const;

public:
  void init(int x, int y, int frameIndex);

  virtual void click();

  void update();
  virtual void draw();
};

class ToggleButtonControl : public ButtonControl {
  bool _enabled;

public:
  bool isEnabled() { return _enabled; }

  void click() override;
  void draw() override;
};

constexpr int numButtons = 4;

class Buttons {
  ButtonControl _buttons[numButtons];
  ToggleButtonControl _toggleButton;

public:
  Buttons();

  ButtonControl& playButton() { return _buttons[0]; }
  ButtonControl& stopButton() { return _buttons[1]; }
  ButtonControl& prevButton() { return _buttons[2]; }
  ButtonControl& nextButton() { return _buttons[3]; }
  ToggleButtonControl& repeatButton() { return _toggleButton; }

  void update();
  void draw();
};

