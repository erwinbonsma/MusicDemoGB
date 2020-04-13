#include "Tune.h"

namespace Gamebuino_Meta {

const NoteSpec sfx0Notes[28] = {
    NoteSpec { .note=Note::Gs, .oct=6, .vol=7, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::G, .oct=6, .vol=7, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::Fs, .oct=6, .vol=7, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::F, .oct=6, .vol=6, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::E, .oct=6, .vol=6, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::D, .oct=6, .vol=5, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::Cs, .oct=6, .vol=5, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::C, .oct=6, .vol=5, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::B, .oct=6, .vol=5, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::G, .oct=5, .vol=5, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::F, .oct=5, .vol=5, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds, .oct=5, .vol=4, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::Cs, .oct=5, .vol=4, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::As, .oct=5, .vol=4, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::As, .oct=5, .vol=4, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::Gs, .oct=4, .vol=3, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::F, .oct=4, .vol=3, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::Cs, .oct=4, .vol=3, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::As, .oct=4, .vol=3, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::Gs, .oct=3, .vol=3, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::F, .oct=3, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::C, .oct=3, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::As, .oct=3, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::G, .oct=2, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds, .oct=2, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds, .oct=2, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::C, .oct=2, .vol=2, .wav=WaveForm::TRIANGLE, .fx=Effect::NONE },
    NoteSpec { .note=Note::C, .oct=2, .vol=2, .wav=WaveForm::TRIANGLE, .fx=Effect::NONE }
};
const TuneSpec sfx0 = TuneSpec {
    .noteDuration = 1, .loopStart = 28, .numNotes = 28, .notes = sfx0Notes
};
const NoteSpec sfx1Notes[8] = {
    NoteSpec { .note=Note::C, .oct=4, .vol=8, .wav=WaveForm::ORGAN, .fx=Effect::ARPEGGIO_FAST },
    NoteSpec { .note=Note::D, .oct=4, .vol=8, .wav=WaveForm::ORGAN, .fx=Effect::ARPEGGIO_FAST },
    NoteSpec { .note=Note::E, .oct=4, .vol=8, .wav=WaveForm::ORGAN, .fx=Effect::ARPEGGIO_FAST },
    NoteSpec { .note=Note::F, .oct=4, .vol=8, .wav=WaveForm::ORGAN, .fx=Effect::ARPEGGIO_FAST },
    NoteSpec { .note=Note::C, .oct=4, .vol=8, .wav=WaveForm::ORGAN, .fx=Effect::ARPEGGIO },
    NoteSpec { .note=Note::D, .oct=4, .vol=8, .wav=WaveForm::ORGAN, .fx=Effect::ARPEGGIO },
    NoteSpec { .note=Note::E, .oct=4, .vol=8, .wav=WaveForm::ORGAN, .fx=Effect::ARPEGGIO },
    NoteSpec { .note=Note::F, .oct=4, .vol=8, .wav=WaveForm::ORGAN, .fx=Effect::ARPEGGIO }
};
const TuneSpec sfx1 = TuneSpec {
    .noteDuration = 16, .loopStart = 8, .numNotes = 8, .notes = sfx1Notes
};
const NoteSpec sfx2Notes[8] = {
    NoteSpec { .note=Note::C, .oct=4, .vol=5, .wav=WaveForm::ORGAN, .fx=Effect::NONE },
    NoteSpec { .note=Note::D, .oct=4, .vol=5, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::E, .oct=4, .vol=6, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::F, .oct=4, .vol=6, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::G, .oct=4, .vol=7, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::A, .oct=5, .vol=7, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::B, .oct=5, .vol=8, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::C, .oct=5, .vol=8, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE }
};
const TuneSpec sfx2 = TuneSpec {
    .noteDuration = 2, .loopStart = 8, .numNotes = 8, .notes = sfx2Notes
};
const NoteSpec sfx3Notes[1] = {
    NoteSpec { .note=Note::D, .oct=5, .vol=6, .wav=WaveForm::ORGAN, .fx=Effect::DROP }
};
const TuneSpec sfx3 = TuneSpec {
    .noteDuration = 24, .loopStart = 1, .numNotes = 1, .notes = sfx3Notes
};
const NoteSpec sfx4Notes[8] = {
    NoteSpec { .note=Note::C, .oct=4, .vol=6, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_IN },
    NoteSpec { .note=Note::C, .oct=4, .vol=6, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::D, .oct=4, .vol=6, .wav=WaveForm::TILTED_SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::D, .oct=4, .vol=6, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::D, .oct=4, .vol=6, .wav=WaveForm::TILTED_SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::D, .oct=4, .vol=6, .wav=WaveForm::TILTED_SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::D, .oct=4, .vol=6, .wav=WaveForm::TILTED_SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::D, .oct=4, .vol=6, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT }
};
const TuneSpec sfx4 = TuneSpec {
    .noteDuration = 16, .loopStart = 8, .numNotes = 8, .notes = sfx4Notes
};
const NoteSpec sfx5Notes[11] = {
    NoteSpec { .note=Note::C, .oct=4, .vol=6, .wav=WaveForm::TRIANGLE, .fx=Effect::NONE },
    SILENCE,
    NoteSpec { .note=Note::C, .oct=4, .vol=6, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    SILENCE,
    NoteSpec { .note=Note::C, .oct=4, .vol=6, .wav=WaveForm::SAW, .fx=Effect::NONE },
    SILENCE,
    NoteSpec { .note=Note::C, .oct=4, .vol=6, .wav=WaveForm::SQUARE, .fx=Effect::NONE },
    SILENCE,
    NoteSpec { .note=Note::C, .oct=4, .vol=6, .wav=WaveForm::PULSE, .fx=Effect::NONE },
    SILENCE,
    NoteSpec { .note=Note::C, .oct=4, .vol=6, .wav=WaveForm::ORGAN, .fx=Effect::NONE },
};
const TuneSpec sfx5 = TuneSpec {
    .noteDuration = 8, .loopStart = 11, .numNotes = 11, .notes = sfx5Notes
};

} // Namespace

const Gamebuino_Meta::TuneSpec* exampleTunes[numExampleTunes] = {
  &Gamebuino_Meta::sfx0,
  &Gamebuino_Meta::sfx1,
  &Gamebuino_Meta::sfx2,
  &Gamebuino_Meta::sfx3,
  &Gamebuino_Meta::sfx4,
  &Gamebuino_Meta::sfx5,
};

