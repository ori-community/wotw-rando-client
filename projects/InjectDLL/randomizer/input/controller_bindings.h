#pragma once

#include <enums/actions.h>

namespace randomizer {
    namespace input {
        void refresh_controller_controls();
        bool is_controller_pressed(Action action);
    } // namespace input
} // namespace randomizer
