#pragma once

namespace core::input::sdl {
    enum class GamepadType {
        Unknown,
        Xbox,
        Switch,
        PlayStation,
    };

    GamepadType get_sdl_gamepad_type();
}
