#pragma once

#include <Core/enums/actions.h>

#include <string>
#include <vector>

namespace randomizer {
    namespace input {
        using handle_keyboard_or_controller_binding_callback = void (*)(Action action, std::vector<int> const& buttons, bool respects_modifiers);
        using handle_midi_binding_callback = void (*)(Action action, std::vector<int> const& notes);

        bool read_keyboard_or_controller_bindings(std::filesystem::path const& path, handle_keyboard_or_controller_binding_callback callback);
        bool read_midi_bindings(std::filesystem::path const& path, handle_midi_binding_callback callback);
    } // namespace input
} // namespace randomizer
