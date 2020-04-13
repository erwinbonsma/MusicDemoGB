#include <Gamebuino-Meta.h>

constexpr Gamebuino_Meta::WaveForm  WAV_TR = Gamebuino_Meta::WaveForm::TRIANGLE;
constexpr Gamebuino_Meta::Effect FX_NONE = Gamebuino_Meta::Effect::NONE;
constexpr Gamebuino_Meta::Effect FX_ARP = Gamebuino_Meta::Effect::ARPEGGIO;
constexpr Gamebuino_Meta::Effect FX_ARPF = Gamebuino_Meta::Effect::ARPEGGIO_FAST;

const Gamebuino_Meta::TuneSpec testTune = Gamebuino_Meta::TuneSpec {
    .noteDuration = 32,
    .loopStart = 16,
    .numNotes = 16,
    .notes = new Gamebuino_Meta::NoteSpec[16] {
        Gamebuino_Meta::NoteSpec { .note=Gamebuino_Meta::Note::A, .oct=4, .vol=8, .wav=WAV_TR, .fx=FX_NONE },
        Gamebuino_Meta::NoteSpec { .note=Gamebuino_Meta::Note::B, .oct=4, .vol=7, .wav=WAV_TR, .fx=FX_NONE },
        Gamebuino_Meta::NoteSpec { .note=Gamebuino_Meta::Note::C, .oct=4, .vol=6, .wav=WAV_TR, .fx=FX_ARP },
        Gamebuino_Meta::NoteSpec { .note=Gamebuino_Meta::Note::D, .oct=4, .vol=5, .wav=WAV_TR, .fx=FX_NONE },

        Gamebuino_Meta::NoteSpec { .note=Gamebuino_Meta::Note::C, .oct=4, .vol=8, .wav=WAV_TR, .fx=FX_ARP },
        Gamebuino_Meta::NoteSpec { .note=Gamebuino_Meta::Note::D, .oct=4, .vol=7, .wav=WAV_TR, .fx=FX_ARP },
        Gamebuino_Meta::NoteSpec { .note=Gamebuino_Meta::Note::E, .oct=4, .vol=6, .wav=WAV_TR, .fx=FX_ARP },
        Gamebuino_Meta::NoteSpec { .note=Gamebuino_Meta::Note::F, .oct=4, .vol=5, .wav=WAV_TR, .fx=FX_NONE },

        Gamebuino_Meta::NoteSpec { .note=Gamebuino_Meta::Note::A, .oct=4, .vol=8, .wav=WAV_TR, .fx=FX_NONE },
        Gamebuino_Meta::NoteSpec { .note=Gamebuino_Meta::Note::B, .oct=4, .vol=8, .wav=WAV_TR, .fx=FX_NONE },
        Gamebuino_Meta::NoteSpec { .note=Gamebuino_Meta::Note::C, .oct=4, .vol=8, .wav=WAV_TR, .fx=FX_NONE },
        Gamebuino_Meta::NoteSpec { .note=Gamebuino_Meta::Note::D, .oct=4, .vol=8, .wav=WAV_TR, .fx=FX_ARPF },
        Gamebuino_Meta::NoteSpec { .note=Gamebuino_Meta::Note::E, .oct=4, .vol=8, .wav=WAV_TR, .fx=FX_ARPF },
        Gamebuino_Meta::NoteSpec { .note=Gamebuino_Meta::Note::F, .oct=4, .vol=8, .wav=WAV_TR, .fx=FX_ARPF },
        Gamebuino_Meta::NoteSpec { .note=Gamebuino_Meta::Note::G, .oct=4, .vol=8, .wav=WAV_TR, .fx=FX_ARPF },
        Gamebuino_Meta::NoteSpec { .note=Gamebuino_Meta::Note::A, .oct=5, .vol=6, .wav=WAV_TR, .fx=FX_NONE }
    }
};

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

void update() {
  if (gb.buttons.held(BUTTON_A, 0)) {
    gb.sound.fx(&testTune);
  }
}

void draw() {
  gb.display.clear();
  displayCpuLoad();
}

void setup() {
  gb.begin();
}

void loop() {
  while(!gb.update());

  update();
  draw();
}
