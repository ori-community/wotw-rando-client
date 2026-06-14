#pragma once

#include <Core/enums/actions.h>

namespace randomizer {
    namespace input {
        bool is_controller_pressed(Action action);
        std::optional<std::string> controller_action_to_string(Action action);
    } // namespace input
} // namespace randomizer
