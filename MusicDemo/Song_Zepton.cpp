#include <Gamebuino-Meta.h>

namespace Gamebuino_Meta {

const NoteSpec sfx8NotesZepton[32] = {
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C4, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C4, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C4, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C4, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx8Zepton = TuneSpec {
    .noteDuration = 12, .loopStart = 32, .numNotes = 32, .notes = sfx8NotesZepton
};
const NoteSpec sfx9NotesZepton[32] = {
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As4, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As4, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As4, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As4, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As3, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx9Zepton = TuneSpec {
    .noteDuration = 12, .loopStart = 32, .numNotes = 32, .notes = sfx9NotesZepton
};
const NoteSpec sfx10NotesZepton[32] = {
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs4, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs4, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs4, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs4, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs3, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx10Zepton = TuneSpec {
    .noteDuration = 12, .loopStart = 32, .numNotes = 32, .notes = sfx10NotesZepton
};
const NoteSpec sfx11NotesZepton[32] = {
    NoteSpec { .note=Note::F2, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F4, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F2, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F4, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G2, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G4, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G2, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G2, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G4, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G3, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G2, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx11Zepton = TuneSpec {
    .noteDuration = 12, .loopStart = 32, .numNotes = 32, .notes = sfx11NotesZepton
};
const NoteSpec sfx12NotesZepton[32] = {
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C4, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C5, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C4, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C4, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C5, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C4, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C4, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C5, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C4, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C4, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C5, .vol=8, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C4, .vol=8, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx12Zepton = TuneSpec {
    .noteDuration = 12, .loopStart = 32, .numNotes = 32, .notes = sfx12NotesZepton
};
const NoteSpec sfx14NotesZepton[32] = {
    NoteSpec { .note=Note::C3, .vol=6, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=6, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G4, .vol=4, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=6, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C7, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C6, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_IN },
    NoteSpec { .note=Note::Ds4, .vol=6, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    SILENCE,
    NoteSpec { .note=Note::C3, .vol=6, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=6, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C4, .vol=6, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=6, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C7, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C5, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_IN },
    NoteSpec { .note=Note::C2, .vol=6, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_IN },
    NoteSpec { .note=Note::C3, .vol=6, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=6, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    SILENCE,
    NoteSpec { .note=Note::C3, .vol=6, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C7, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C5, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_IN },
    NoteSpec { .note=Note::C4, .vol=6, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_IN },
    NoteSpec { .note=Note::C3, .vol=6, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=6, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G4, .vol=4, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=6, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C7, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C5, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_IN },
    NoteSpec { .note=Note::C2, .vol=6, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    SILENCE,
};
const TuneSpec sfx14Zepton = TuneSpec {
    .noteDuration = 12, .loopStart = 0, .numNotes = 32, .notes = sfx14NotesZepton
};
const NoteSpec sfx16NotesZepton[16] = {
    NoteSpec { .note=Note::C4, .vol=6, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds5, .vol=2, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds4, .vol=6, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C4, .vol=2, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G4, .vol=6, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds4, .vol=2, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C5, .vol=6, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds5, .vol=4, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G4, .vol=6, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C5, .vol=2, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=6, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G4, .vol=4, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G4, .vol=6, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=2, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds5, .vol=6, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G4, .vol=2, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx16Zepton = TuneSpec {
    .noteDuration = 12, .loopStart = 0, .numNotes = 16, .notes = sfx16NotesZepton
};
const NoteSpec sfx18NotesZepton[16] = {
    NoteSpec { .note=Note::D4, .vol=6, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F5, .vol=2, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::E4, .vol=6, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D4, .vol=2, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::A4, .vol=6, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::E4, .vol=2, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=6, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::A4, .vol=2, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G4, .vol=6, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=2, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=6, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G4, .vol=2, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::A4, .vol=6, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=2, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F5, .vol=6, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::A4, .vol=2, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx18Zepton = TuneSpec {
    .noteDuration = 12, .loopStart = 16, .numNotes = 16, .notes = sfx18NotesZepton
};
const NoteSpec sfx19NotesZepton[16] = {
    NoteSpec { .note=Note::C4, .vol=6, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::E5, .vol=2, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::E4, .vol=6, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C4, .vol=2, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G4, .vol=6, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::E4, .vol=2, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C5, .vol=6, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G4, .vol=2, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G4, .vol=6, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C5, .vol=2, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=6, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G4, .vol=2, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G4, .vol=6, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=2, .wav=WaveForm::SQUARE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::E5, .vol=6, .wav=WaveForm::PULSE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G4, .vol=2, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx19Zepton = TuneSpec {
    .noteDuration = 12, .loopStart = 16, .numNotes = 16, .notes = sfx19NotesZepton
};
const NoteSpec sfx20NotesZepton[8] = {
    NoteSpec { .note=Note::D2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::D2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::D2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::D2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::D2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx20Zepton = TuneSpec {
    .noteDuration = 12, .loopStart = 0, .numNotes = 8, .notes = sfx20NotesZepton
};
const NoteSpec sfx21NotesZepton[8] = {
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx21Zepton = TuneSpec {
    .noteDuration = 12, .loopStart = 0, .numNotes = 8, .notes = sfx21NotesZepton
};
const NoteSpec sfx22NotesZepton[8] = {
    NoteSpec { .note=Note::D4, .vol=4, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::A3, .vol=4, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::E4, .vol=4, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F4, .vol=4, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::A4, .vol=4, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F4, .vol=4, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D4, .vol=4, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::E4, .vol=4, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx22Zepton = TuneSpec {
    .noteDuration = 12, .loopStart = 0, .numNotes = 8, .notes = sfx22NotesZepton
};
const NoteSpec sfx23NotesZepton[8] = {
    NoteSpec { .note=Note::C4, .vol=4, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G3, .vol=4, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C4, .vol=4, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::E4, .vol=4, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G4, .vol=4, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::E4, .vol=4, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C4, .vol=4, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::E4, .vol=4, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx23Zepton = TuneSpec {
    .noteDuration = 12, .loopStart = 0, .numNotes = 8, .notes = sfx23NotesZepton
};
const NoteSpec sfx24NotesZepton[8] = {
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx24Zepton = TuneSpec {
    .noteDuration = 12, .loopStart = 0, .numNotes = 8, .notes = sfx24NotesZepton
};
const NoteSpec sfx25NotesZepton[8] = {
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx25Zepton = TuneSpec {
    .noteDuration = 12, .loopStart = 0, .numNotes = 8, .notes = sfx25NotesZepton
};
const NoteSpec sfx26NotesZepton[32] = {
    NoteSpec { .note=Note::F2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx26Zepton = TuneSpec {
    .noteDuration = 12, .loopStart = 32, .numNotes = 32, .notes = sfx26NotesZepton
};
const NoteSpec sfx27NotesZepton[8] = {
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx27Zepton = TuneSpec {
    .noteDuration = 12, .loopStart = 0, .numNotes = 8, .notes = sfx27NotesZepton
};
const NoteSpec sfx28NotesZepton[8] = {
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=8, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx28Zepton = TuneSpec {
    .noteDuration = 12, .loopStart = 0, .numNotes = 8, .notes = sfx28NotesZepton
};
const NoteSpec sfx30NotesZepton[8] = {
    NoteSpec { .note=Note::F4, .vol=2, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D4, .vol=2, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::E4, .vol=2, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D4, .vol=2, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::A3, .vol=2, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::E4, .vol=2, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F4, .vol=2, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::A4, .vol=2, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx30Zepton = TuneSpec {
    .noteDuration = 12, .loopStart = 0, .numNotes = 8, .notes = sfx30NotesZepton
};
const NoteSpec sfx31NotesZepton[8] = {
    NoteSpec { .note=Note::E4, .vol=2, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C4, .vol=2, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::E4, .vol=2, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C4, .vol=2, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G3, .vol=2, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C4, .vol=2, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::E4, .vol=2, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G4, .vol=2, .wav=WaveForm::PHASER, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx31Zepton = TuneSpec {
    .noteDuration = 12, .loopStart = 0, .numNotes = 8, .notes = sfx31NotesZepton
};

const TuneSpec *const pattern0TunesZepton[4] = { &sfx8Zepton, &sfx16Zepton, &sfx14Zepton, &sfx28Zepton };
const PatternSpec pattern0Zepton = PatternSpec {
    .numTunes = 4, .tunes = pattern0TunesZepton
};
const TuneSpec *const pattern1TunesZepton[4] = { &sfx9Zepton, &sfx16Zepton, &sfx14Zepton, &sfx24Zepton };
const PatternSpec pattern1Zepton = PatternSpec {
    .numTunes = 4, .tunes = pattern1TunesZepton
};
const TuneSpec *const pattern2TunesZepton[4] = { &sfx10Zepton, &sfx16Zepton, &sfx14Zepton, &sfx25Zepton };
const PatternSpec pattern2Zepton = PatternSpec {
    .numTunes = 4, .tunes = pattern2TunesZepton
};
const TuneSpec *const pattern3TunesZepton[4] = { &sfx11Zepton, &sfx16Zepton, &sfx14Zepton, &sfx26Zepton };
const PatternSpec pattern3Zepton = PatternSpec {
    .numTunes = 4, .tunes = pattern3TunesZepton
};
const TuneSpec *const pattern6TunesZepton[4] = { &sfx12Zepton, &sfx16Zepton, &sfx14Zepton, &sfx27Zepton };
const PatternSpec pattern6Zepton = PatternSpec {
    .numTunes = 4, .tunes = pattern6TunesZepton
};
const TuneSpec *const pattern8TunesZepton[4] = { &sfx18Zepton, &sfx20Zepton, &sfx22Zepton, &sfx30Zepton };
const PatternSpec pattern8Zepton = PatternSpec {
    .numTunes = 4, .tunes = pattern8TunesZepton
};
const TuneSpec *const pattern10TunesZepton[4] = { &sfx19Zepton, &sfx21Zepton, &sfx23Zepton, &sfx31Zepton };
const PatternSpec pattern10Zepton = PatternSpec {
    .numTunes = 4, .tunes = pattern10TunesZepton
};

const PatternSpec *const song0PatternsZepton[8] = {
    &pattern0Zepton,
    &pattern1Zepton,
    &pattern2Zepton,
    &pattern3Zepton,
    &pattern2Zepton,
    &pattern1Zepton,
    &pattern6Zepton,
    &pattern0Zepton,
};
const SongSpec song0Zepton = SongSpec {
    .loopStart = 0, .numPatterns = 1, .patterns = song0PatternsZepton
};
const PatternSpec *const song8PatternsZepton[4] = {
    &pattern8Zepton,
    &pattern8Zepton,
    &pattern10Zepton,
    &pattern10Zepton,
};
const SongSpec song8Zepton = SongSpec {
    .loopStart = 0, .numPatterns = 4, .patterns = song8PatternsZepton
};

} // Namespace

const Gamebuino_Meta::SongSpec * zeptonSong1 = &Gamebuino_Meta::song0Zepton;
const Gamebuino_Meta::SongSpec * zeptonSong2 = &Gamebuino_Meta::song8Zepton;