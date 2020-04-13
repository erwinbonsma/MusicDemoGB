#include "Tune.h"

namespace Gamebuino_Meta {

const NoteSpec testTuneNotes[16] = {
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
};

const TuneSpec testTune = TuneSpec {
    .noteDuration = 32,
    .loopStart = 16,
    .numNotes = 16,
    .notes = testTuneNotes
};

} // Namespace

const Gamebuino_Meta::TuneSpec* testTune = &Gamebuino_Meta::testTune;

