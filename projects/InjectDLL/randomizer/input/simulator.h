#pragma once

#include <enums/actions.h>

namespace randomizer {
    namespace input {
        void register_simulators(app::PlayerInput* input);
        void simulate(Action action, bool pressed);
        void clear_simulators();
    } // namespace input
} // namespace randomizer
