#include "Song_Neon.h"

namespace Gamebuino_Meta {

const NoteSpec sfx8NotesNeon[32] = {
    NoteSpec { .note=Note::F4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As4, .vol=4, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::As4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::As4, .vol=2, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As4, .vol=2, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::F4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As4, .vol=4, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::As4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::As4, .vol=2, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Gs4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx8Neon = TuneSpec {
    .noteDuration = 16, .loopStart = 32, .numNotes = 32, .notes = sfx8NotesNeon
};
const NoteSpec sfx9NotesNeon[32] = {
    NoteSpec { .note=Note::Ds4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=4, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::D5, .vol=5, .wav=WaveForm::SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::D5, .vol=2, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=5, .wav=WaveForm::SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::D5, .vol=5, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=4, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::D5, .vol=5, .wav=WaveForm::SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::D5, .vol=2, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=5, .wav=WaveForm::SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::D5, .vol=5, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
};
const TuneSpec sfx9Neon = TuneSpec {
    .noteDuration = 16, .loopStart = 32, .numNotes = 32, .notes = sfx9NotesNeon
};
const NoteSpec sfx10NotesNeon[32] = {
    NoteSpec { .note=Note::As4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds5, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As5, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds5, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As5, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
};
const TuneSpec sfx10Neon = TuneSpec {
    .noteDuration = 16, .loopStart = 0, .numNotes = 8, .notes = sfx10NotesNeon
};
const NoteSpec sfx12NotesNeon[32] = {
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    NoteSpec { .note=Note::C2, .vol=3, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D2, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D2, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::E2, .vol=3, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Fs2, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=3, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G3, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C4, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G4, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C5, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::DROP },
    NoteSpec { .note=Note::G5, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::DROP },
    NoteSpec { .note=Note::G6, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::DROP },
    NoteSpec { .note=Note::G6, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::DROP },
};
const TuneSpec sfx12Neon = TuneSpec {
    .noteDuration = 16, .loopStart = 32, .numNotes = 32, .notes = sfx12NotesNeon
};
const NoteSpec sfx13NotesNeon[32] = {
    NoteSpec { .note=Note::C4, .vol=7, .wav=WaveForm::TRIANGLE, .fx=Effect::DROP },
    NoteSpec { .note=Note::G2, .vol=3, .wav=WaveForm::TRIANGLE, .fx=Effect::DROP },
    NoteSpec { .note=Note::C5, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    SILENCE,
    NoteSpec { .note=Note::C5, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    SILENCE,
    NoteSpec { .note=Note::C5, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    SILENCE,
    NoteSpec { .note=Note::C4, .vol=7, .wav=WaveForm::TRIANGLE, .fx=Effect::DROP },
    NoteSpec { .note=Note::C3, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C5, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    SILENCE,
    NoteSpec { .note=Note::C5, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    SILENCE,
    NoteSpec { .note=Note::C5, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
};
const TuneSpec sfx13Neon = TuneSpec {
    .noteDuration = 8, .loopStart = 0, .numNotes = 16, .notes = sfx13NotesNeon
};
const NoteSpec sfx14NotesNeon[32] = {
    NoteSpec { .note=Note::Ds4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=4, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::D5, .vol=5, .wav=WaveForm::SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::D5, .vol=2, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=5, .wav=WaveForm::SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::D5, .vol=5, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=4, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::D5, .vol=5, .wav=WaveForm::SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::D5, .vol=2, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds5, .vol=5, .wav=WaveForm::SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds5, .vol=5, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=5, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx14Neon = TuneSpec {
    .noteDuration = 16, .loopStart = 32, .numNotes = 32, .notes = sfx14NotesNeon
};
const NoteSpec sfx15NotesNeon[32] = {
    NoteSpec { .note=Note::C4, .vol=3, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::A5, .vol=4, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C4, .vol=3, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::A5, .vol=4, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx15Neon = TuneSpec {
    .noteDuration = 8, .loopStart = 0, .numNotes = 32, .notes = sfx15NotesNeon
};
const NoteSpec sfx16NotesNeon[32] = {
    NoteSpec { .note=Note::C4, .vol=3, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::C2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::C2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::C3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::A5, .vol=4, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::C2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::C3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::C3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C4, .vol=3, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::C2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::C2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::C3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::A5, .vol=4, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::C3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::C2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::C3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx16Neon = TuneSpec {
    .noteDuration = 8, .loopStart = 0, .numNotes = 32, .notes = sfx16NotesNeon
};
const NoteSpec sfx17NotesNeon[32] = {
    NoteSpec { .note=Note::C4, .vol=3, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Gs2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Gs2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Gs3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::A5, .vol=4, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Gs2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Gs3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Gs3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C4, .vol=3, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Gs2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Gs2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Gs3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::A5, .vol=4, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Gs3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Gs2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Gs3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx17Neon = TuneSpec {
    .noteDuration = 8, .loopStart = 0, .numNotes = 32, .notes = sfx17NotesNeon
};
const NoteSpec sfx18NotesNeon[32] = {
    NoteSpec { .note=Note::C4, .vol=3, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::A5, .vol=4, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C4, .vol=3, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::A5, .vol=4, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As2, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As3, .vol=5, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx18Neon = TuneSpec {
    .noteDuration = 8, .loopStart = 0, .numNotes = 32, .notes = sfx18NotesNeon
};
const NoteSpec sfx21NotesNeon[32] = {
    NoteSpec { .note=Note::C3, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds5, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As5, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::G4, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds5, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As5, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::C5, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds5, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::C6, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::C6, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds5, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::G6, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::C7, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::C7, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::NONE },
};
const TuneSpec sfx21Neon = TuneSpec {
    .noteDuration = 16, .loopStart = 0, .numNotes = 32, .notes = sfx21NotesNeon
};
const NoteSpec sfx22NotesNeon[32] = {
    NoteSpec { .note=Note::As5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::As5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::As5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::VIBRATO },
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    NoteSpec { .note=Note::Ds5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::F5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::F5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    SILENCE,
    SILENCE,
    NoteSpec { .note=Note::As5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    SILENCE,
    SILENCE,
    NoteSpec { .note=Note::As5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::C6, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::C6, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::C6, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::C6, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::VIBRATO },
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
};
const TuneSpec sfx22Neon = TuneSpec {
    .noteDuration = 16, .loopStart = 32, .numNotes = 32, .notes = sfx22NotesNeon
};
const NoteSpec sfx23NotesNeon[32] = {
    NoteSpec { .note=Note::D6, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::D6, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::D6, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::D6, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::VIBRATO },
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    NoteSpec { .note=Note::C6, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::C6, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::C6, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds6, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds6, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::VIBRATO },
    SILENCE,
    SILENCE,
    SILENCE,
    NoteSpec { .note=Note::D6, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    SILENCE,
    SILENCE,
    NoteSpec { .note=Note::D6, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::D6, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    SILENCE,
    SILENCE,
    SILENCE,
    NoteSpec { .note=Note::D6, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    SILENCE,
    NoteSpec { .note=Note::D6, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D6, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    SILENCE,
};
const TuneSpec sfx23Neon = TuneSpec {
    .noteDuration = 16, .loopStart = 32, .numNotes = 32, .notes = sfx23NotesNeon
};
const NoteSpec sfx24NotesNeon[32] = {
    NoteSpec { .note=Note::As5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::As5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::As5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::VIBRATO },
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    NoteSpec { .note=Note::F5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::F5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
    SILENCE,
    NoteSpec { .note=Note::G5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    SILENCE,
    NoteSpec { .note=Note::Gs5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::G5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::G5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::Ds5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::VIBRATO },
    SILENCE,
    SILENCE,
    NoteSpec { .note=Note::Gs5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::G5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::G5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::F5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::G5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::G5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx24Neon = TuneSpec {
    .noteDuration = 16, .loopStart = 32, .numNotes = 32, .notes = sfx24NotesNeon
};
const NoteSpec sfx25NotesNeon[32] = {
    NoteSpec { .note=Note::Gs5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::G5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::G5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    SILENCE,
    NoteSpec { .note=Note::C5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    SILENCE,
    NoteSpec { .note=Note::Ds5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    SILENCE,
    SILENCE,
    SILENCE,
    NoteSpec { .note=Note::F5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::F5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Gs5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::SLIDE },
    SILENCE,
    NoteSpec { .note=Note::Gs5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    SILENCE,
    SILENCE,
    NoteSpec { .note=Note::Gs5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    SILENCE,
    SILENCE,
    NoteSpec { .note=Note::As5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    SILENCE,
    NoteSpec { .note=Note::As5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::As5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::As5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::As5, .vol=3, .wav=WaveForm::TILTED_SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::As5, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::As5, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::As5, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::As5, .vol=2, .wav=WaveForm::TILTED_SAW, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx25Neon = TuneSpec {
    .noteDuration = 16, .loopStart = 32, .numNotes = 32, .notes = sfx25NotesNeon
};
const NoteSpec sfx26NotesNeon[32] = {
    NoteSpec { .note=Note::C4, .vol=3, .wav=WaveForm::TRIANGLE, .fx=Effect::DROP },
    SILENCE,
    NoteSpec { .note=Note::C5, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    SILENCE,
    NoteSpec { .note=Note::C5, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    SILENCE,
    NoteSpec { .note=Note::C5, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    SILENCE,
    NoteSpec { .note=Note::C4, .vol=3, .wav=WaveForm::TRIANGLE, .fx=Effect::DROP },
    SILENCE,
    NoteSpec { .note=Note::C5, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    SILENCE,
    NoteSpec { .note=Note::C5, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    SILENCE,
    NoteSpec { .note=Note::C5, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
};
const TuneSpec sfx26Neon = TuneSpec {
    .noteDuration = 8, .loopStart = 0, .numNotes = 16, .notes = sfx26NotesNeon
};
const NoteSpec sfx28NotesNeon[32] = {
    NoteSpec { .note=Note::Ds4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=4, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::D5, .vol=5, .wav=WaveForm::SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::D5, .vol=2, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=5, .wav=WaveForm::SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::D5, .vol=5, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds4, .vol=5, .wav=WaveForm::SAW, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=4, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::D5, .vol=5, .wav=WaveForm::SAW, .fx=Effect::VIBRATO },
    SILENCE,
    SILENCE,
    NoteSpec { .note=Note::D5, .vol=4, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::D5, .vol=4, .wav=WaveForm::SAW, .fx=Effect::VIBRATO },
};
const TuneSpec sfx28Neon = TuneSpec {
    .noteDuration = 16, .loopStart = 32, .numNotes = 32, .notes = sfx28NotesNeon
};
const NoteSpec sfx29NotesNeon[32] = {
    SILENCE,
    SILENCE,
    NoteSpec { .note=Note::D5, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::D5, .vol=3, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    SILENCE,
    SILENCE,
    NoteSpec { .note=Note::D5, .vol=3, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::D5, .vol=3, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    SILENCE,
    SILENCE,
    NoteSpec { .note=Note::D5, .vol=2, .wav=WaveForm::SAW, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::D5, .vol=2, .wav=WaveForm::SAW, .fx=Effect::FADE_OUT },
    SILENCE,
    SILENCE,
    NoteSpec { .note=Note::D5, .vol=2, .wav=WaveForm::SAW, .fx=Effect::FADE_IN },
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
};
const TuneSpec sfx29Neon = TuneSpec {
    .noteDuration = 16, .loopStart = 32, .numNotes = 32, .notes = sfx29NotesNeon
};
const NoteSpec sfx32NotesNeon[32] = {
    NoteSpec { .note=Note::Ds2, .vol=4, .wav=WaveForm::ORGAN, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds2, .vol=4, .wav=WaveForm::ORGAN, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds2, .vol=4, .wav=WaveForm::ORGAN, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds2, .vol=4, .wav=WaveForm::ORGAN, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds2, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds2, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds2, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds2, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds2, .vol=2, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds2, .vol=2, .wav=WaveForm::ORGAN, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds2, .vol=2, .wav=WaveForm::ORGAN, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds2, .vol=2, .wav=WaveForm::ORGAN, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds2, .vol=2, .wav=WaveForm::ORGAN, .fx=Effect::FADE_OUT },
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
};
const TuneSpec sfx32Neon = TuneSpec {
    .noteDuration = 16, .loopStart = 32, .numNotes = 32, .notes = sfx32NotesNeon
};
const NoteSpec sfx35NotesNeon[32] = {
    NoteSpec { .note=Note::F4, .vol=5, .wav=WaveForm::ORGAN, .fx=Effect::NONE },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F4, .vol=5, .wav=WaveForm::ORGAN, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F4, .vol=5, .wav=WaveForm::ORGAN, .fx=Effect::NONE },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As4, .vol=4, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::As4, .vol=4, .wav=WaveForm::ORGAN, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::As4, .vol=2, .wav=WaveForm::ORGAN, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As4, .vol=5, .wav=WaveForm::ORGAN, .fx=Effect::NONE },
    NoteSpec { .note=Note::As4, .vol=5, .wav=WaveForm::ORGAN, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As4, .vol=2, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::F4, .vol=5, .wav=WaveForm::ORGAN, .fx=Effect::NONE },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F4, .vol=5, .wav=WaveForm::ORGAN, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::F4, .vol=5, .wav=WaveForm::ORGAN, .fx=Effect::NONE },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::F4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::As4, .vol=4, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::As4, .vol=4, .wav=WaveForm::ORGAN, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::As4, .vol=2, .wav=WaveForm::ORGAN, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Gs4, .vol=5, .wav=WaveForm::ORGAN, .fx=Effect::NONE },
    NoteSpec { .note=Note::Gs4, .vol=5, .wav=WaveForm::ORGAN, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::G4, .vol=5, .wav=WaveForm::ORGAN, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx35Neon = TuneSpec {
    .noteDuration = 16, .loopStart = 32, .numNotes = 32, .notes = sfx35NotesNeon
};
const NoteSpec sfx36NotesNeon[32] = {
    NoteSpec { .note=Note::Ds4, .vol=5, .wav=WaveForm::ORGAN, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds4, .vol=5, .wav=WaveForm::ORGAN, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds4, .vol=5, .wav=WaveForm::ORGAN, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=4, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::D5, .vol=4, .wav=WaveForm::ORGAN, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::D5, .vol=2, .wav=WaveForm::ORGAN, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=5, .wav=WaveForm::ORGAN, .fx=Effect::NONE },
    NoteSpec { .note=Note::D5, .vol=5, .wav=WaveForm::ORGAN, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=2, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=5, .wav=WaveForm::ORGAN, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds4, .vol=5, .wav=WaveForm::ORGAN, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds4, .vol=5, .wav=WaveForm::ORGAN, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::Ds4, .vol=3, .wav=WaveForm::ORGAN, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=4, .wav=WaveForm::ORGAN, .fx=Effect::SLIDE },
    NoteSpec { .note=Note::D5, .vol=4, .wav=WaveForm::ORGAN, .fx=Effect::VIBRATO },
    NoteSpec { .note=Note::D5, .vol=2, .wav=WaveForm::ORGAN, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=5, .wav=WaveForm::ORGAN, .fx=Effect::NONE },
    NoteSpec { .note=Note::D5, .vol=5, .wav=WaveForm::ORGAN, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::D5, .vol=5, .wav=WaveForm::ORGAN, .fx=Effect::FADE_OUT },
};
const TuneSpec sfx36Neon = TuneSpec {
    .noteDuration = 16, .loopStart = 32, .numNotes = 32, .notes = sfx36NotesNeon
};
const NoteSpec sfx37NotesNeon[32] = {
    NoteSpec { .note=Note::C2, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds2, .vol=2, .wav=WaveForm::TRIANGLE, .fx=Effect::FADE_IN },
    NoteSpec { .note=Note::Ds2, .vol=2, .wav=WaveForm::TRIANGLE, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds2, .vol=2, .wav=WaveForm::TRIANGLE, .fx=Effect::NONE },
    NoteSpec { .note=Note::G2, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds2, .vol=2, .wav=WaveForm::TRIANGLE, .fx=Effect::FADE_IN },
    NoteSpec { .note=Note::Ds2, .vol=2, .wav=WaveForm::TRIANGLE, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds2, .vol=2, .wav=WaveForm::TRIANGLE, .fx=Effect::NONE },
    NoteSpec { .note=Note::C3, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds2, .vol=3, .wav=WaveForm::TRIANGLE, .fx=Effect::FADE_IN },
    NoteSpec { .note=Note::Ds2, .vol=3, .wav=WaveForm::TRIANGLE, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds2, .vol=3, .wav=WaveForm::TRIANGLE, .fx=Effect::NONE },
    NoteSpec { .note=Note::G3, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds2, .vol=3, .wav=WaveForm::TRIANGLE, .fx=Effect::FADE_IN },
    NoteSpec { .note=Note::Ds2, .vol=3, .wav=WaveForm::TRIANGLE, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds2, .vol=3, .wav=WaveForm::TRIANGLE, .fx=Effect::NONE },
    NoteSpec { .note=Note::C4, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds2, .vol=4, .wav=WaveForm::TRIANGLE, .fx=Effect::FADE_IN },
    NoteSpec { .note=Note::Ds2, .vol=4, .wav=WaveForm::TRIANGLE, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds2, .vol=4, .wav=WaveForm::TRIANGLE, .fx=Effect::NONE },
    NoteSpec { .note=Note::G4, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds2, .vol=4, .wav=WaveForm::TRIANGLE, .fx=Effect::FADE_IN },
    NoteSpec { .note=Note::Ds2, .vol=4, .wav=WaveForm::TRIANGLE, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds2, .vol=4, .wav=WaveForm::TRIANGLE, .fx=Effect::NONE },
    NoteSpec { .note=Note::C5, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds2, .vol=5, .wav=WaveForm::TRIANGLE, .fx=Effect::FADE_IN },
    NoteSpec { .note=Note::Ds2, .vol=5, .wav=WaveForm::TRIANGLE, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds2, .vol=5, .wav=WaveForm::TRIANGLE, .fx=Effect::NONE },
    NoteSpec { .note=Note::G5, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    NoteSpec { .note=Note::Ds2, .vol=5, .wav=WaveForm::TRIANGLE, .fx=Effect::FADE_IN },
    NoteSpec { .note=Note::Ds2, .vol=5, .wav=WaveForm::TRIANGLE, .fx=Effect::NONE },
    NoteSpec { .note=Note::Ds2, .vol=5, .wav=WaveForm::TRIANGLE, .fx=Effect::NONE },
};
const TuneSpec sfx37Neon = TuneSpec {
    .noteDuration = 16, .loopStart = 32, .numNotes = 32, .notes = sfx37NotesNeon
};
const NoteSpec sfx40NotesNeon[32] = {
    NoteSpec { .note=Note::G2, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::NONE },
    NoteSpec { .note=Note::G2, .vol=2, .wav=WaveForm::NOISE, .fx=Effect::FADE_OUT },
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
    SILENCE,
};
const TuneSpec sfx40Neon = TuneSpec {
    .noteDuration = 16, .loopStart = 32, .numNotes = 32, .notes = sfx40NotesNeon
};

const TuneSpec *const pattern0TunesNeon[2] = { &sfx12Neon, &sfx10Neon };
const PatternSpec pattern0Neon = PatternSpec {
    .numTunes = 2, .tunes = pattern0TunesNeon
};
const TuneSpec *const pattern1TunesNeon[4] = { &sfx8Neon, &sfx10Neon, &sfx13Neon, &sfx15Neon };
const PatternSpec pattern1Neon = PatternSpec {
    .numTunes = 4, .tunes = pattern1TunesNeon
};
const TuneSpec *const pattern2TunesNeon[4] = { &sfx9Neon, &sfx10Neon, &sfx13Neon, &sfx16Neon };
const PatternSpec pattern2Neon = PatternSpec {
    .numTunes = 4, .tunes = pattern2TunesNeon
};
const TuneSpec *const pattern4TunesNeon[4] = { &sfx14Neon, &sfx21Neon, &sfx13Neon, &sfx16Neon };
const PatternSpec pattern4Neon = PatternSpec {
    .numTunes = 4, .tunes = pattern4TunesNeon
};
const TuneSpec *const pattern5TunesNeon[4] = { &sfx8Neon, &sfx22Neon, &sfx13Neon, &sfx15Neon };
const PatternSpec pattern5Neon = PatternSpec {
    .numTunes = 4, .tunes = pattern5TunesNeon
};
const TuneSpec *const pattern6TunesNeon[4] = { &sfx9Neon, &sfx23Neon, &sfx13Neon, &sfx16Neon };
const PatternSpec pattern6Neon = PatternSpec {
    .numTunes = 4, .tunes = pattern6TunesNeon
};
const TuneSpec *const pattern7TunesNeon[4] = { &sfx8Neon, &sfx24Neon, &sfx13Neon, &sfx15Neon };
const PatternSpec pattern7Neon = PatternSpec {
    .numTunes = 4, .tunes = pattern7TunesNeon
};
const TuneSpec *const pattern8TunesNeon[4] = { &sfx14Neon, &sfx25Neon, &sfx13Neon, &sfx16Neon };
const PatternSpec pattern8Neon = PatternSpec {
    .numTunes = 4, .tunes = pattern8TunesNeon
};
const TuneSpec *const pattern9TunesNeon[4] = { &sfx8Neon, &sfx10Neon, &sfx13Neon, &sfx17Neon };
const PatternSpec pattern9Neon = PatternSpec {
    .numTunes = 4, .tunes = pattern9TunesNeon
};
const TuneSpec *const pattern10TunesNeon[4] = { &sfx9Neon, &sfx10Neon, &sfx13Neon, &sfx18Neon };
const PatternSpec pattern10Neon = PatternSpec {
    .numTunes = 4, .tunes = pattern10TunesNeon
};
const TuneSpec *const pattern12TunesNeon[4] = { &sfx28Neon, &sfx21Neon, &sfx26Neon, &sfx18Neon };
const PatternSpec pattern12Neon = PatternSpec {
    .numTunes = 4, .tunes = pattern12TunesNeon
};
const TuneSpec *const pattern13TunesNeon[4] = { &sfx29Neon, &sfx10Neon, &sfx40Neon, &sfx32Neon };
const PatternSpec pattern13Neon = PatternSpec {
    .numTunes = 4, .tunes = pattern13TunesNeon
};
const TuneSpec *const pattern14TunesNeon[2] = { &sfx35Neon, &sfx10Neon };
const PatternSpec pattern14Neon = PatternSpec {
    .numTunes = 2, .tunes = pattern14TunesNeon
};
const TuneSpec *const pattern15TunesNeon[2] = { &sfx36Neon, &sfx10Neon };
const PatternSpec pattern15Neon = PatternSpec {
    .numTunes = 2, .tunes = pattern15TunesNeon
};
const TuneSpec *const pattern16TunesNeon[4] = { &sfx37Neon, &sfx10Neon, &sfx12Neon, &sfx36Neon };
const PatternSpec pattern16Neon = PatternSpec {
    .numTunes = 4, .tunes = pattern16TunesNeon
};

const PatternSpec *const song0PatternsNeon[17] = {
    &pattern0Neon,
    &pattern1Neon,
    &pattern2Neon,
    &pattern1Neon,
    &pattern4Neon,
    &pattern5Neon,
    &pattern6Neon,
    &pattern7Neon,
    &pattern8Neon,
    &pattern9Neon,
    &pattern10Neon,
    &pattern9Neon,
    &pattern12Neon,
    &pattern13Neon,
    &pattern14Neon,
    &pattern15Neon,
    &pattern16Neon,
};
const SongSpec song0Neon = SongSpec {
    .loopStart = 1, .numPatterns = 17, .patterns = song0PatternsNeon
};

} // Namespace

const Gamebuino_Meta::SongSpec* neonSong = &Gamebuino_Meta::song0Neon;