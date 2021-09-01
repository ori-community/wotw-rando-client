#include <input/rando_bindings.h>
#include <input/controller_bindings.h>
#include <macros.h>

#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

#include <unordered_map>
#include <unordered_set>

namespace input
{
    struct ControlInfo
    {
        std::vector<rando_input_callback> on_pressed_actions;
        std::vector<rando_input_callback> on_release_actions;
        std::unordered_set<ControllerButton> controller_bindings;
        std::vector<bool> simulated_actions;

        bool is_pressed = false;
        bool is_just_pressed = false;
    };

    std::unordered_map<Action, ControlInfo> bindings;

    void add_on_pressed_callback(Action action, rando_input_callback callback)
    {
        if (action < Action::OpenRandoWheel)
            return;

        bindings[action].on_pressed_actions.push_back(callback);
    }

    void add_on_released_callback(Action action, rando_input_callback callback)
    {
        if (action < Action::OpenRandoWheel)
            return;

        bindings[action].on_release_actions.push_back(callback);
    }

    void add_controller_binding(Action action, ControllerButton button)
    {
        if (action < Action::OpenRandoWheel)
            return;

        bindings[action].controller_bindings.emplace(button);
    }

    bool is_pressed(Action action)
    {
        if (action < Action::OpenRandoWheel)
            return false;

        return bindings[action].is_pressed;
    }

    IL2CPP_INTERCEPT(, GameController, void, FixedUpdate, (app::GameController* this_ptr)) {
        for (auto& binding : bindings)
        {
            auto pressed = false;
            for (auto button : binding.second.controller_bindings)
            {
                if (is_pressed(button))
                {
                    pressed = true;
                    break;
                }
            }

            // TODO: Add keyboard handling as well.

            auto is_just_released = !pressed && binding.second.is_pressed;
            binding.second.is_just_pressed = pressed && !binding.second.is_pressed;
            binding.second.is_pressed = pressed;
            if (binding.second.is_just_pressed)
                for (auto action : binding.second.on_pressed_actions)
                    action();

            if (is_just_released)
                for (auto action : binding.second.on_release_actions)
                    action();

            for (auto& value : binding.second.simulated_actions)
            {
                auto actions = value ? binding.second.on_pressed_actions : binding.second.on_release_actions;
                for (auto action : binding.second.on_pressed_actions)
                    action();
            }

            binding.second.simulated_actions.clear();
        }

        GameController::FixedUpdate(this_ptr);
    }
}

INJECT_C_DLLEXPORT bool action_pressed(input::Action action)
{
    if (action < input::Action::OpenRandoWheel)
        return false;

    input::bindings[action].simulated_actions.push_back(true);
    return true;
}

INJECT_C_DLLEXPORT bool action_released(input::Action action)
{
    if (action < input::Action::OpenRandoWheel)
        return false;

    input::bindings[action].simulated_actions.push_back(false);
    return true;
}
