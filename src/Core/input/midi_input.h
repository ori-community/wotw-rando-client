#pragma once

#ifdef ENABLE_MIDI_IN

#include <Core/macros.h>

namespace core::input::midi_input {
    CORE_DLLEXPORT bool is_note_pressed(uint8_t note);
} // namespace core::input::midi
#endif
