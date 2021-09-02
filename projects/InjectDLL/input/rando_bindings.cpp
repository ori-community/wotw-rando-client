#include <input/rando_bindings.h>
#include <input/controller_bindings.h>
#include <macros.h>

#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

#include <unordered_map>
#include <unordered_set>

namespace input
{
    struct KeyboardMouseInput
    {
        std::vector<app::KeyCode__Enum> codes;
        std::vector<int> mouse_buttons;
    };

    struct ControlInfo
    {
        std::vector<rando_input_callback> on_pressed_actions;
        std::vector<rando_input_callback> on_release_actions;
        std::vector<KeyboardMouseInput> kbm_bindings;
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

    void add_keyboard_binding(Action action, KeyboardMouseInput input)
    {
        if (action < Action::OpenRandoWheel)
            return;

        bindings[action].kbm_bindings.push_back(input);
    }

    IL2CPP_INTERCEPT(, PlayerInput, void, ClearControls, (app::PlayerInput* this_ptr)) {
        PlayerInput::ClearControls(this_ptr);
        for (auto& binding : bindings)
            binding.second.kbm_bindings.clear();
    }

    IL2CPP_INTERCEPT(, PlayerInput, void, AddKeyboardControls, (app::PlayerInput* this_ptr)) {
        PlayerInput::AddKeyboardControls(this_ptr);

        // TODO: Read a keyboard bindings file and add bindings instead of the hardcoded ones.
        add_keyboard_binding(Action::OpenRandoWheel, KeyboardMouseInput{ { app::KeyCode__Enum_V }, {} });
    }

    bool is_pressed(Action action)
    {
        if (action < Action::OpenRandoWheel)
            return false;

        return bindings[action].is_pressed;
    }

    STATIC_IL2CPP_BINDING(UnityEngine, Input, bool, GetKeyInt, (app::KeyCode__Enum key));
    STATIC_IL2CPP_BINDING(UnityEngine, Input, bool, GetMouseButton, (int button));
    bool is_pressed(KeyboardMouseInput const& input)
    {
        for (auto code : input.codes)
            if (!Input::GetKeyInt(code))
                return false;

        for (auto button : input.mouse_buttons)
            if (!Input::GetMouseButton(button))
                return false;
        
        return true;
    }

    IL2CPP_INTERCEPT(, PlayerInput, void, RefreshControls, (app::PlayerInput* this_ptr)) {
        PlayerInput::RefreshControls(this_ptr);
        refresh_controller_controls();

        for (auto& binding : bindings)
        {
            auto pressed = is_controller_pressed(binding.first);
            if (!pressed)
            {
                for (auto const& input : binding.second.kbm_bindings)
                {
                    if (is_pressed(input))
                    {
                        pressed = true;
                        break;
                    }
                }
            }

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
