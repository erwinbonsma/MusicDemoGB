#include <Gamebuino-Meta.h>

namespace Gamebuino_Meta {

const TuneSpec testTune = TuneSpec {
    .noteDuration = 32,
    .loopStart = 16,
    .numNotes = 16,
    .notes = new NoteSpec[16] {
        NoteSpec { .note=Note::A, .oct=4, .vol=8, .wav=WaveForm::TRIANGLE, .fx=Effect::NONE },
        NoteSpec { .note=Note::B, .oct=4, .vol=7, .wav=WaveForm::TRIANGLE, .fx=Effect::NONE },
        NoteSpec { .note=Note::C, .oct=4, .vol=6, .wav=WaveForm::TRIANGLE, .fx=Effect::ARPEGGIO },
        NoteSpec { .note=Note::D, .oct=4, .vol=5, .wav=WaveForm::TRIANGLE, .fx=Effect::NONE },

        NoteSpec { .note=Note::C, .oct=4, .vol=8, .wav=WaveForm::TRIANGLE, .fx=Effect::ARPEGGIO },
        NoteSpec { .note=Note::D, .oct=4, .vol=7, .wav=WaveForm::TRIANGLE, .fx=Effect::ARPEGGIO },
        NoteSpec { .note=Note::E, .oct=4, .vol=6, .wav=WaveForm::TRIANGLE, .fx=Effect::ARPEGGIO },
        NoteSpec { .note=Note::F, .oct=4, .vol=5, .wav=WaveForm::TRIANGLE, .fx=Effect::NONE },

        NoteSpec { .note=Note::A, .oct=4, .vol=8, .wav=WaveForm::TRIANGLE, .fx=Effect::NONE },
        NoteSpec { .note=Note::B, .oct=4, .vol=8, .wav=WaveForm::TRIANGLE, .fx=Effect::NONE },
        NoteSpec { .note=Note::C, .oct=4, .vol=8, .wav=WaveForm::TRIANGLE, .fx=Effect::NONE },
        NoteSpec { .note=Note::D, .oct=4, .vol=8, .wav=WaveForm::TRIANGLE, .fx=Effect::ARPEGGIO_FAST },
        NoteSpec { .note=Note::E, .oct=4, .vol=8, .wav=WaveForm::TRIANGLE, .fx=Effect::ARPEGGIO_FAST },
        NoteSpec { .note=Note::F, .oct=4, .vol=8, .wav=WaveForm::TRIANGLE, .fx=Effect::ARPEGGIO_FAST },
        NoteSpec { .note=Note::G, .oct=4, .vol=8, .wav=WaveForm::TRIANGLE, .fx=Effect::ARPEGGIO_FAST },
        NoteSpec { .note=Note::A, .oct=5, .vol=6, .wav=WaveForm::TRIANGLE, .fx=Effect::NONE }
    }
};

} // Namespace

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
    gb.sound.fx(&Gamebuino_Meta::testTune);
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
