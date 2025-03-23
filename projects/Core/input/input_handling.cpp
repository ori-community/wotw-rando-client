#include <Core/input/input_handling.h>
#include <Core/input/controller_bindings.h>
#include <Core/input/helpers.h>
#include <Randomizer/randomizer.h>

#include <Core/api/game/game.h>
#include <Core/input/simulator.h>

#include <Modloader/app/methods/PlayerInput.h>
#include <Modloader/app/methods/SavePedestalController.h>
#include <Modloader/app/methods/SmartInput/CompoundButtonInput.h>
#include <Modloader/app/methods/UnityEngine/Input.h>
#include <Modloader/app/methods/ButtonIconUtility.h>
#include <Modloader/app/types/PlayerInput.h>
#include <Modloader/app/types/GameSettings.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

#include <unordered_map>
#include <unordered_set>

using namespace modloader;
using namespace app::classes;
using namespace app::classes::UnityEngine;

namespace core::input {
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
            std::vector<KeyboardMouseInput> kbm_bindings;
            SimulatedButton simulator;

            bool is_pressed = false;
            bool is_just_pressed = false;
        };

        struct VanillaControlInfo {
            app::CompoundButtonInput* input;

            bool is_pressed = false;
            bool is_just_pressed = false;
        };

        std::unordered_map<Action, ControlInfo> rando_bindings;
        std::unordered_map<Action, VanillaControlInfo> vanilla_bindings;

        void add_keyboard_binding(Action action, const KeyboardMouseInput& input) {
            if (action < Action::RANDO_ACTIONS_START) {
                return;
            }

            if (input.codes.empty() && input.mouse_buttons.empty()) {
                return;
            }

            rando_bindings[action].kbm_bindings.push_back(input);
        }

        void on_binding_read(Action action, std::vector<int> const& buttons, bool respects_modifiers) {
            KeyboardMouseInput input;
            input.respects_modifiers = respects_modifiers;
            for (auto const& button : buttons) {
                if (button < 0) {
                    input.mouse_buttons.push_back(-button);
                } else {
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
            for (auto& info: rando_bindings | std::views::values) {
                info.kbm_bindings.clear();
            }
        }

        bool is_kbm_pressed(KeyboardMouseInput const& input) {
            if (input.respects_modifiers) {
                const auto shift = Input::GetKeyInt(app::KeyCode__Enum::LeftShift) || Input::GetKeyInt(app::KeyCode__Enum::RightShift);
                const auto ctrl = Input::GetKeyInt(app::KeyCode__Enum::LeftControl) || Input::GetKeyInt(app::KeyCode__Enum::RightControl);
                const auto alt = Input::GetKeyInt(app::KeyCode__Enum::LeftAlt) || Input::GetKeyInt(app::KeyCode__Enum::RightAlt);
                // auto altgr = Input::GetKeyInt(app::KeyCode__Enum::AltGr);

                if (input.shift != shift || input.ctrl != ctrl || input.alt != alt) {
                    return false;
                }
            }

            for (const auto code : input.codes) {
                if (!Input::GetKeyInt(code)) {
                    return false;
                }
            }

            for (const auto button : input.mouse_buttons) {
                if (!Input::GetMouseButton(button)) {
                    return false;
                }
            }

            return true;
        }

        IL2CPP_INTERCEPT(SavePedestalController, void, BeginTeleportation, (app::Vector2 teleport_target_world_position)) {
            const auto player_input = types::PlayerInput::get_class()->static_fields->Instance;
            const auto prev = player_input->fields.Active;
            next::SavePedestalController::BeginTeleportation(teleport_target_world_position);
            player_input->fields.Active = prev;
        }

        void initialize_vanilla_bindings(app::PlayerInput* input) {
            vanilla_bindings = {
                {Action::MainMenuSaveCopy,        {input->fields.MainMenuSaveCopy, false}       },
                {Action::MainMenuSaveDelete,      {input->fields.MainMenuSaveDelete, false}     },
                {Action::Interact,                {input->fields.Interact, false}               },
                {Action::Jump,                    {input->fields.Jump, false}                   },
                {Action::Ability1,                {input->fields.Ability1, false}               },
                {Action::Ability2,                {input->fields.Ability2, false}               },
                {Action::Ability3,                {input->fields.Ability3, false}               },
                {Action::Glide,                   {input->fields.Glide, false}                  },
                {Action::Grab,                    {input->fields.Grab, false}                   },
                {Action::Dash,                    {input->fields.Dash, false}                   },
                {Action::Burrow,                  {input->fields.Burrow, false}                 },
                {Action::Bash,                    {input->fields.Bash, false}                   },
                {Action::Grapple,                 {input->fields.Grapple, false}                },
                {Action::DialogueAdvance,         {input->fields.DialogueAdvance, false}        },
                {Action::DialogueOption1,         {input->fields.DialogueOption1, false}        },
                {Action::DialogueOption2,         {input->fields.DialogueOption2, false}        },
                {Action::DialogueOption3,         {input->fields.DialogueOption3, false}        },
                {Action::DialogueExit,            {input->fields.DialogueExit, false}           },
                {Action::OpenMapsShardsInventory, {input->fields.OpenMapsShardsInventory, false}},
                {Action::OpenAreaMap,             {input->fields.OpenAreaMap, false}            },
                {Action::OpenInventory,           {input->fields.OpenInventory, false}          },
                {Action::OpenWorldMap,            {input->fields.OpenWorldMap, false}           },
                {Action::OpenShards,              {input->fields.OpenShards, false}             },
                {Action::OpenWeaponWheel,         {input->fields.OpenWeaponWheel, false}        },
                {Action::PauseScreen,             {input->fields.PauseScreen, false}            },
                {Action::LiveSignIn,              {input->fields.LiveSignIn, false}             },
                {Action::MapZoomIn,               {input->fields.MapZoomIn, false}              },
                {Action::MapZoomOut,              {input->fields.MapZoomOut, false}             },
                {Action::MenuSelect,              {input->fields.MenuSelect, false}             },
                {Action::MenuBack,                {input->fields.MenuBack, false}               },
                {Action::MenuClose,               {input->fields.MenuClose, false}              },
                {Action::MenuDown,                {input->fields.MenuDown, false}               },
                {Action::MenuUp,                  {input->fields.MenuUp, false}                 },
                {Action::MenuLeft,                {input->fields.MenuLeft, false}               },
                {Action::MenuRight,               {input->fields.MenuRight, false}              },
                {Action::MenuPageLeft,            {input->fields.MenuPageLeft, false}           },
                {Action::MenuPageRight,           {input->fields.MenuPageRight, false}          },
                {Action::LeaderboardCycleFilter,  {input->fields.LeaderboardCycleFilter, false} },
                {Action::MapFilter,               {input->fields.MapFilter, false}              },
                {Action::MapDetails,              {input->fields.MapDetails, false}             },
                {Action::MapFocusOri,             {input->fields.MapFocusOri, false}            },
                {Action::MapFocusObjective,       {input->fields.MapFocusObjective, false}      },
                {Action::Left,                    {input->fields.Left, false}                   },
                {Action::Right,                   {input->fields.Right, false}                  },
                {Action::Up,                      {input->fields.Up, false}                     },
                {Action::Down,                    {input->fields.Down, false}                   },
            };
        }

        IL2CPP_INTERCEPT(PlayerInput, void, RefreshControlScheme, (app::PlayerInput * this_ptr)) {
            next::PlayerInput::RefreshControlScheme(this_ptr);
            initialize_vanilla_bindings(this_ptr);
        }

        IL2CPP_INTERCEPT(PlayerInput, void, RefreshControls, (app::PlayerInput * this_ptr)) {
            next::PlayerInput::RefreshControls(this_ptr);

            if (vanilla_bindings.empty()) {
                initialize_vanilla_bindings(this_ptr);
            }

            for (auto& [action, info]: vanilla_bindings) {
                const auto pressed = SmartInput::CompoundButtonInput::GetValue(info.input);
                const auto is_just_released = !pressed && info.is_pressed;
                info.is_just_pressed = pressed && !info.is_pressed;
                info.is_pressed = pressed;
                if (info.is_just_pressed) {
                    single_input_bus().trigger_event(action, EventTiming::Before);
                    input_bus().trigger_event(EventTiming::Before, action);
                }
                if (is_just_released) {
                    single_input_bus().trigger_event(action, EventTiming::After);
                    input_bus().trigger_event(EventTiming::After, action);
                }
            }

            for (auto& [action, info]: rando_bindings) {
                auto pressed = false;

                if (info.simulator.enabled) {
                    pressed = info.simulator.pressed;
                } else {
                    pressed = is_controller_pressed(action);
                    if (!pressed) {
                        for (auto const& input : info.kbm_bindings) {
                            if (is_kbm_pressed(input)) {
                                pressed = true;
                                break;
                            }
                        }
                    }
                }

                auto is_just_released = !pressed && info.is_pressed;
                info.is_just_pressed = pressed && !info.is_pressed;
                info.is_pressed = pressed;
                if (info.is_just_pressed) {
                    single_input_bus().trigger_event(action, EventTiming::Before);
                    input_bus().trigger_event(EventTiming::Before, action);
                }
                if (is_just_released) {
                    single_input_bus().trigger_event(action, EventTiming::After);
                    input_bus().trigger_event(EventTiming::After, action);
                }
            }
        }
    } // namespace

    void simulate_action(Action action, bool value) {
        auto& binding = input::rando_bindings[action];
        binding.simulator.pressed = value;

        // TODO: Handle releasing and disabling the simulator separately
        binding.simulator.enabled = value;

        if (binding.is_pressed != value) {
            binding.is_pressed = value;
            binding.is_just_pressed = value;
            single_input_bus().trigger_event(action, value ? EventTiming::Before : EventTiming::After);
        }
    }

    void set_action(Action action, bool value) {
        if (action < Action::RANDO_ACTIONS_START) {
            auto simulator = core::input::get_simulator_for(action);
            simulator->pressed = value;
            simulator->enabled = true;
        } else {
            simulate_action(action, value);
        }
    }

    app::ControlScheme__Enum get_current_control_scheme() {
        static app::GameSettings* settings = nullptr;
        if (il2cpp::unity::is_valid(settings))
            return settings->fields.m_currentControlSchemes;

        settings = types::GameSettings::get_class()->static_fields->Instance;
        return il2cpp::unity::is_valid(settings)
            ? settings->fields.m_currentControlSchemes
            : app::ControlScheme__Enum::KeyboardAndMouse;
    }

    std::string action_to_string(Action action) {
        if (get_current_control_scheme() == app::ControlScheme__Enum::Controller) {
            return controller_action_to_string(action);
        }

        std::string key;
        const auto it = rando_bindings.find(action);
        if (it == rando_bindings.end() || it->second.kbm_bindings.empty()) {
            return key;
        }

        const auto& binding = it->second.kbm_bindings.front();
        for (const auto code : binding.codes) {
            key += il2cpp::convert_csstring(ButtonIconUtility::KeyCodeToString(code));
        }

        for (const auto button : binding.mouse_buttons) {
            key += std::format("<mouse>{}</>", button);
        }

        return key;
    }

    common::TimedMultiEventBus<Action>& single_input_bus() {
        static common::TimedMultiEventBus<Action> bus;
        return bus;
    }

    common::TimedEventBus<Action>& input_bus() {
        static common::TimedEventBus<Action> bus;
        return bus;
    }

    bool is_pressed(const Action action) {
        if (action < Action::RANDO_ACTIONS_START) {
            return vanilla_bindings.contains(action) ? false : vanilla_bindings.at(action).is_pressed;
        }

        return rando_bindings.contains(action) ? false : rando_bindings.at(action).is_pressed;
    }

    bool is_just_pressed(const Action action) {
        if (action < Action::RANDO_ACTIONS_START) {
            return vanilla_bindings.contains(action) ? false : vanilla_bindings.at(action).is_just_pressed;
        }

        return rando_bindings.contains(action) ? false : rando_bindings.at(action).is_just_pressed;
    }

    void on_before_register_input_simulators(GameEvent game_event, EventTiming timing) {
        read_bindings(base_path() / KEYBOARD_REBIND_FILE, on_binding_read);
    }

    auto on_before_register_input_simulators_handle =
        core::api::game::event_bus().register_handler(GameEvent::RegisteringInputSimulators, EventTiming::Before, &on_before_register_input_simulators);
} // namespace core::input
