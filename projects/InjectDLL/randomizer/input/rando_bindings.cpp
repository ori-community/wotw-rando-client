#include <input/rando_bindings.h>

#include <Common/ext.h>
#include <input/controller_bindings.h>
#include <input/helpers.h>
#include <input/simulator.h>
#include <interop/csharp_bridge.h>
#include <macros.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/app/methods/PlayerInput.h>
#include <Il2CppModLoader/app/methods/SavePedestalController.h>
#include <Il2CppModLoader/app/methods/UnityEngine/Input.h>

#include <fstream>
#include <unordered_map>
#include <unordered_set>

#include <magic_enum.hpp>

using namespace modloader;
using namespace app::classes;
using namespace app::classes::UnityEngine;

namespace randomizer::input {
    namespace {
        const std::string KEYBOARD_REBIND_FILE = "keyboard_bindings.json";

        struct KeyboardMouseInput {
            std::vector<app::KeyCode__Enum> codes;
            std::vector<int> mouse_buttons;

            bool respects_modifiers = false;
            bool shift = false;
            bool ctrl = false;
            bool alt = false;
            bool altgr = false;
        };

        struct ControlInfo {
            std::vector<rando_input_callback> on_pressed_actions;
            std::vector<rando_input_callback> on_release_actions;
            std::vector<KeyboardMouseInput> kbm_bindings;
            bool simulated_state = false;

            bool is_pressed = false;
            bool is_just_pressed = false;
        };

        std::unordered_map<Action, ControlInfo> bindings;

        void add_keyboard_binding(Action action, KeyboardMouseInput input) {
            if (action < Action::RANDO_ACTIONS_START)
                return;

            if (input.codes.empty() && input.mouse_buttons.empty())
                return;

            bindings[action].kbm_bindings.push_back(input);
        }

        void handle_binding(Action action, std::vector<int> const& buttons, bool respects_modifiers) {
            KeyboardMouseInput input;
            input.respects_modifiers = respects_modifiers;
            for (auto const& button : buttons) {
                if (button < 0)
                    input.mouse_buttons.push_back(-button);
                else {
                    auto code = static_cast<app::KeyCode__Enum>(button);
                    input.codes.push_back(code);
                    input.shift |= code == app::KeyCode__Enum::LeftShift || code == app::KeyCode__Enum::RightShift;
                    input.ctrl |= code == app::KeyCode__Enum::LeftControl || code == app::KeyCode__Enum::RightControl;
                    input.alt |= code == app::KeyCode__Enum::LeftAlt || code == app::KeyCode__Enum::RightAlt;
                    input.altgr |= code == app::KeyCode__Enum::AltGr;
                }
            }

            add_keyboard_binding(action, input);
        }

        IL2CPP_INTERCEPT(PlayerInput, void, ClearControls, (app::PlayerInput * this_ptr)) {
            next::PlayerInput::ClearControls(this_ptr);
            clear_simulators();
            for (auto& binding : bindings)
                binding.second.kbm_bindings.clear();
        }

        IL2CPP_INTERCEPT(PlayerInput, void, AddKeyboardControls, (app::PlayerInput * this_ptr)) {
            next::PlayerInput::AddKeyboardControls(this_ptr);
            read_bindings(base_path + KEYBOARD_REBIND_FILE, handle_binding);
            register_simulators(this_ptr);
        }

        bool is_pressed(KeyboardMouseInput const& input) {
            if (input.respects_modifiers) {
                auto shift = Input::GetKeyInt(app::KeyCode__Enum::LeftShift) || Input::GetKeyInt(app::KeyCode__Enum::RightShift);
                auto ctrl = Input::GetKeyInt(app::KeyCode__Enum::LeftControl) || Input::GetKeyInt(app::KeyCode__Enum::RightControl);
                auto alt = Input::GetKeyInt(app::KeyCode__Enum::LeftAlt) || Input::GetKeyInt(app::KeyCode__Enum::RightAlt);
                // auto altgr = Input::GetKeyInt(app::KeyCode__Enum::AltGr);

                if (input.shift != shift || input.ctrl != ctrl || input.alt != alt)
                    return false;
            }

            for (auto code : input.codes)
                if (!Input::GetKeyInt(code))
                    return false;

            for (auto button : input.mouse_buttons)
                if (!Input::GetMouseButton(button))
                    return false;

            return true;
        }

        IL2CPP_INTERCEPT(SavePedestalController, void, BeginTeleportation, (app::Vector2 teleport_target_world_position)) {
            auto player_input = il2cpp::get_class<app::PlayerInput__Class>("", "PlayerInput")->static_fields->Instance;
            auto prev = player_input->fields.Active;
            next::SavePedestalController::BeginTeleportation(teleport_target_world_position);
            player_input->fields.Active = prev;
        }

        IL2CPP_INTERCEPT(PlayerInput, void, RefreshControls, (app::PlayerInput * this_ptr)) {
            next::PlayerInput::RefreshControls(this_ptr);
            refresh_controller_controls();

            for (auto& binding : bindings) {
                auto pressed = is_controller_pressed(binding.first);
                if (!pressed) {
                    for (auto const& input : binding.second.kbm_bindings) {
                        if (is_pressed(input)) {
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
                        action(binding.first, true);

                if (is_just_released)
                    for (auto action : binding.second.on_release_actions)
                        action(binding.first, false);
            }
        }
    } // namespace

    bool is_pressed(Action action) {
        if (action < Action::RANDO_ACTIONS_START)
            return false;

        return bindings[action].is_pressed;
    }

    void add_on_pressed_callback(Action action, rando_input_callback callback) {
        if (action < Action::RANDO_ACTIONS_START)
            return;

        bindings[action].on_pressed_actions.push_back(callback);
    }

    void add_on_released_callback(Action action, rando_input_callback callback) {
        if (action < Action::RANDO_ACTIONS_START)
            return;

        bindings[action].on_release_actions.push_back(callback);
    }

    void simulate_action(Action action, bool value) {
        auto& binding = input::bindings[action];
        binding.simulated_state = value;
        if (binding.is_pressed != value) {
            binding.is_pressed = value;
            binding.is_just_pressed = value;
            auto& callbacks = value ? binding.on_pressed_actions : binding.on_release_actions;
            for (auto callback : callbacks)
                callback(action, value);
        }
    }

    void csharp_callback(Action action, bool pressed) {
        csharp_bridge::on_action_triggered(action);
    }

    void initialize() {
        add_on_pressed_callback(Action::Binding1, csharp_callback);
        add_on_pressed_callback(Action::Binding2, csharp_callback);
        add_on_pressed_callback(Action::Binding3, csharp_callback);
        add_on_pressed_callback(Action::Binding4, csharp_callback);
        add_on_pressed_callback(Action::Binding5, csharp_callback);
        add_on_pressed_callback(Action::Reload, csharp_callback);
        add_on_pressed_callback(Action::ShowLastPickup, csharp_callback);
        add_on_pressed_callback(Action::ShowProgressWithHints, csharp_callback);
        add_on_pressed_callback(Action::WarpCredits, csharp_callback);
        add_on_pressed_callback(Action::ToggleCursorLock, csharp_callback);
        add_on_pressed_callback(Action::ToggleAlwaysShowKeystones, csharp_callback);
        add_on_pressed_callback(Action::ToggleAutoaim, csharp_callback);
        add_on_pressed_callback(Action::ShowDevFlag, csharp_callback);
        add_on_pressed_callback(Action::ToggleDebug, csharp_callback);
        add_on_pressed_callback(Action::PrintCoordinates, csharp_callback);
        add_on_pressed_callback(Action::TeleportCheat, csharp_callback);
        add_on_pressed_callback(Action::UnlockSpoilers, csharp_callback);
        add_on_pressed_callback(Action::TogglePickupNamesOnSpoiler, csharp_callback);
        add_on_pressed_callback(Action::ForceExit, csharp_callback);
    }

    CALL_ON_INIT(initialize);
} // namespace randomizer::input

INJECT_C_DLLEXPORT bool set_action_pressed(Action action) {
    if (action < Action::RANDO_ACTIONS_START)
        randomizer::input::simulate(action, true);
    else
        randomizer::input::simulate_action(action, true);

    return true;
}

INJECT_C_DLLEXPORT bool set_action_released(Action action) {
    if (action < Action::RANDO_ACTIONS_START)
        randomizer::input::simulate(action, false);
    else
        randomizer::input::simulate_action(action, false);

    return true;
}
