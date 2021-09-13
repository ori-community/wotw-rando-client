#include <input/rando_bindings.h>
#include <input/controller_bindings.h>
#include <macros.h>
#include <csharp_bridge.h>

#include <Common/ext.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

#include <fstream>
#include <unordered_map>
#include <unordered_set>

#include <magic_enum/include/magic_enum.hpp>

using namespace modloader;

namespace input
{
    namespace
    {
        const std::string KEYBOARD_REBIND_FILE = "keyboard_bindings.rkbn";

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
            bool simulated_state = false;

            bool is_pressed = false;
            bool is_just_pressed = false;
        };

        std::unordered_map<Action, ControlInfo> bindings;

        void add_keyboard_binding(Action action, KeyboardMouseInput input)
        {
            if (action < Action::OpenRandoWheel)
                return;

            if (input.codes.empty() && input.mouse_buttons.empty())
                return;

            bindings[action].kbm_bindings.push_back(input);
        }

        KeyboardMouseInput parse_input(std::string const& line)
        {
            KeyboardMouseInput input;
            std::vector<std::string> elements;
            split_str(line, elements, ',');
            for (auto const& element : elements)
            {
                int value = std::stoi(element);
                if (value < 0)
                    input.mouse_buttons.push_back(-value);
                else
                    input.codes.push_back(static_cast<app::KeyCode__Enum>(value));
            }

            return input;
        }

        void read_bindings()
        {
            std::string line;
            std::ifstream file(base_path + KEYBOARD_REBIND_FILE);
            while (std::getline(file, line)) 
            {
                line = trim(line.substr(0, line.find('#')));
                if (!line.empty())
                {
                    auto index = line.find('=');
                    if (index != std::string::npos)
                    {
                        auto action = magic_enum::enum_cast<Action>(trim(line.substr(0, index)));
                        if (!action.has_value())
                        {
                            modloader::warn("bindings", format("Invalid action in binding file (%s), skipping.", line.c_str()));
                            continue;
                        }

                        try
                        {
                            add_keyboard_binding(action.value(), parse_input(trim(line.substr(index + 1))));
                        }
                        catch (std::exception e) { modloader::warn("bindings", format("Invalid keys in binding file (%s), skipping. [%s]", line.c_str(), e.what())); }
                    }
                    else
                        modloader::warn("bindings", format("Invalid line in binding file (%s), skipping.", line.c_str()));
                }
            }
        }

        IL2CPP_INTERCEPT(, PlayerInput, void, ClearControls, (app::PlayerInput* this_ptr)) {
            PlayerInput::ClearControls(this_ptr);
            for (auto& binding : bindings)
                binding.second.kbm_bindings.clear();
        }

        IL2CPP_INTERCEPT(, PlayerInput, void, AddKeyboardControls, (app::PlayerInput* this_ptr)) {
            PlayerInput::AddKeyboardControls(this_ptr);
            read_bindings();
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

                pressed |= binding.second.simulated_state;

                auto is_just_released = !pressed && binding.second.is_pressed;
                binding.second.is_just_pressed = pressed && !binding.second.is_pressed;
                binding.second.is_pressed = pressed;
                if (binding.second.is_just_pressed)
                    for (auto action : binding.second.on_pressed_actions)
                        action(binding.first);

                if (is_just_released)
                    for (auto action : binding.second.on_release_actions)
                        action(binding.first);
            }
        }
    }

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

    void simulate_action(Action action, bool value)
    {
        auto& binding = input::bindings[action];
        binding.simulated_state = value;
        if (binding.is_pressed != value)
        {
            binding.is_pressed = value;
            binding.is_just_pressed = value;
            auto& callbacks = value ? binding.on_pressed_actions : binding.on_release_actions;
            for (auto callback : callbacks)
                callback(action);
        }
    }

    void csharp_callback(Action action)
    {
        csharp_bridge::on_action_triggered(action);
    }

    void initialize()
    {
        add_on_pressed_callback(Action::Binding1, csharp_callback);
        add_on_pressed_callback(Action::Binding2, csharp_callback);
        add_on_pressed_callback(Action::Binding3, csharp_callback);
        add_on_pressed_callback(Action::Binding4, csharp_callback);
        add_on_pressed_callback(Action::Binding5, csharp_callback);
        add_on_pressed_callback(Action::Reload, csharp_callback);
        add_on_pressed_callback(Action::ShowLastPickup, csharp_callback);
        add_on_pressed_callback(Action::ShowProgressWithHints, csharp_callback);
        add_on_pressed_callback(Action::WarpToCredits, csharp_callback);
        add_on_pressed_callback(Action::ToggleCursorLock, csharp_callback);
        add_on_pressed_callback(Action::ToggleAlwaysShowKeystones, csharp_callback);
        add_on_pressed_callback(Action::ShowDevFlag, csharp_callback);
        add_on_pressed_callback(Action::ToggleDebug, csharp_callback);
        add_on_pressed_callback(Action::PrintCoordinates, csharp_callback);
        add_on_pressed_callback(Action::TeleportCheat, csharp_callback);
        add_on_pressed_callback(Action::UnlockSpoilers, csharp_callback);
        add_on_pressed_callback(Action::TogglePickupNamesOnSpoiler, csharp_callback);
    }

    CALL_ON_INIT(initialize);
}

INJECT_C_DLLEXPORT bool action_pressed(input::Action action)
{
    if (action < input::Action::OpenRandoWheel)
        return false;

    simulate_action(action, true);
    return true;
}

INJECT_C_DLLEXPORT bool action_released(input::Action action)
{
    if (action < input::Action::OpenRandoWheel)
        return false;

    simulate_action(action, false);
    return true;
}
