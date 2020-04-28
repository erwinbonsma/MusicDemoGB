#include <Gamebuino-Meta.h>

enum class PlayerButton : int8_t {
  Play, Pause, Stop, Prev, Next
};

class Buttons {
  PlayerButton _activeButton;
  uint8_t _animCount;

public:
  void click(PlayerButton button);

  void update();
  void draw();
};

