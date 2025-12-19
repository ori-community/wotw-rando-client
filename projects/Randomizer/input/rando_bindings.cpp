#include <Randomizer/input/controller_bindings.h>
#include <Randomizer/input/helpers.h>
#include <Randomizer/input/rando_bindings.h>
#include <Core/input/midi_input.h>
#include <Randomizer/randomizer.h>

#include <Core/api/game/game.h>
#include <Core/input/simulator.h>
#include <Core/settings.h>
#include <Core/utils/json_serializers.h>

#include <Modloader/app/methods/PlayerInput.h>
#include <Modloader/app/methods/SavePedestalController.h>
#include <Modloader/app/methods/UnityEngine/Input.h>
#include <Modloader/app/methods/ButtonIconUtility.h>
#include <Modloader/app/types/PlayerInput.h>
#include <Modloader/app/types/GameSettings.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

#include <Core/events/task.h>
#include <Modloader/app/structs/ControlScheme__Enum.h>
#include <magic_enum/magic_enum.hpp>
#include <unordered_map>
#include <unordered_set>

using namespace modloader;
using namespace app::classes;
using namespace app::classes::UnityEngine;

namespace randomizer::input {
    namespace {
        // const std::string KEYBOARD_REBIND_FILE = "keyboard_bindings.json";
        // const std::string MIDI_REBIND_FILE = "midi_bindings.json";

        struct KeyboardMouseInput {
            std::vector<app::KeyCode__Enum> codes;
            std::vector<int> mouse_buttons;

            bool respects_modifiers = false;
            bool shift = false;
            bool ctrl = false;
            bool alt = false;
            bool altgr = false;
        };

        struct MidiInput {
            std::vector<uint8_t> notes;
        };

        struct ControlInfo {
            std::vector<KeyboardMouseInput> kbm_bindings;
            std::vector<MidiInput> midi_bindings;
            core::input::SimulatedButton simulator;

            bool is_pressed = false;
            bool is_just_pressed = false;
        };

        std::unordered_map<Action, ControlInfo> rando_bindings;
        bool midi_input_enabled = false;

        void add_midi_binding(Action action, const MidiInput& input) {
            rando_bindings[action].midi_bindings.push_back(input);
        }

        void add_keyboard_binding(Action action, const KeyboardMouseInput& input) {
            if (action < Action::RANDO_ACTIONS_START) {
                return;
            }

            if (input.codes.empty() && input.mouse_buttons.empty()) {
                return;
            }

            rando_bindings[action].kbm_bindings.push_back(input);
        }

        void on_keyboard_binding_read(Action action, std::vector<int> const& buttons, bool respects_modifiers) {
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

        void on_midi_binding_read(Action action, std::vector<int> const& notes) {
            MidiInput input;
            input.notes.append_range(notes);
            add_midi_binding(action, input);
        }

        IL2CPP_INTERCEPT_WITH_ORDER(0, void, PlayerInput, ClearControls, app::PlayerInput * this_ptr) {
            next::PlayerInput::ClearControls(this_ptr);
            for (auto& bind: rando_bindings | std::views::values) {
                bind.kbm_bindings.clear();
                bind.midi_bindings.clear();
            }
        }

        bool is_kbm_pressed(KeyboardMouseInput const& input) {
            if (input.respects_modifiers) {
                auto shift = Input::GetKeyInt(app::KeyCode__Enum::LeftShift) || Input::GetKeyInt(app::KeyCode__Enum::RightShift);
                auto ctrl = Input::GetKeyInt(app::KeyCode__Enum::LeftControl) || Input::GetKeyInt(app::KeyCode__Enum::RightControl);
                auto alt = Input::GetKeyInt(app::KeyCode__Enum::LeftAlt) || Input::GetKeyInt(app::KeyCode__Enum::RightAlt);
                // auto altgr = Input::GetKeyInt(app::KeyCode__Enum::AltGr);

                if (input.shift != shift || input.ctrl != ctrl || input.alt != alt) {
                    return false;
                }
            }

            for (auto code : input.codes) {
                if (!Input::GetKeyInt(code)) {
                    return false;
                }
            }

            for (auto button : input.mouse_buttons) {
                if (!Input::GetMouseButton(button)) {
                    return false;
                }
            }

            return true;
        }

        #ifdef ENABLE_MIDI_IN
        bool is_midi_pressed(const MidiInput& input) {
            if (input.notes.empty()) {
                return false;
            }

            for (const auto& note : input.notes) {
                if (!core::input::midi_input::is_note_pressed(note)) {
                    return false;
                }
            }

            return true;
        }
        #endif

        IL2CPP_INTERCEPT_WITH_ORDER(10, void, SavePedestalController, BeginTeleportation, app::Vector2 teleport_target_world_position) {
            auto player_input = types::PlayerInput::get_class()->static_fields->Instance;
            auto prev = player_input->fields.Active;
            next::SavePedestalController::BeginTeleportation(teleport_target_world_position);
            player_input->fields.Active = prev;
        }

        IL2CPP_INTERCEPT(void, PlayerInput, RefreshControls, app::PlayerInput * this_ptr) {
            next::PlayerInput::RefreshControls(this_ptr);

            for (auto& [action, info] : rando_bindings) {
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

                        #ifdef ENABLE_MIDI_IN
                        if (midi_input_enabled) {
                            for (auto const& input : info.midi_bindings) {
                                const auto midi_pressed = is_midi_pressed(input);

                                set_action(action, midi_pressed);

                                if (midi_pressed) {
                                    pressed = true;
                                    break;
                                }
                            }
                        }
                        #endif
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
            randomizer::input::simulate_action(action, value);
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
            const auto controller_action_string = controller_action_to_string(action);
            if (controller_action_string.has_value()) {
                return *controller_action_string;
            }
        }

        std::string key;
        const auto it = rando_bindings.find(action);
        if (it == rando_bindings.end() || it->second.kbm_bindings.empty()) {
            return std::format("[{}]", magic_enum::enum_name(action));
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

    void on_before_register_input_simulators(GameEvent game_event, EventTiming timing) {
        read_keyboard_or_controller_bindings(get_user_data_path("randomizer/keyboard_bindings.json"), on_keyboard_binding_read);
        read_midi_bindings(get_user_data_path("randomizer/midi_bindings.json"), on_midi_binding_read);
    }

    auto on_before_register_input_simulators_handle =
        core::api::game::event_bus().register_handler(GameEvent::RegisteringInputSimulators, EventTiming::Before, &on_before_register_input_simulators);

    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        #ifdef ENABLE_MIDI_IN
        win::console::register_command(
            {"midi", "enable_input"},
            [](auto, auto) {
                midi_input_enabled = true;
                win::console::console_send("MIDI Input enabled");
            },
            true
        );

        win::console::register_command(
            {"midi", "disable_input"},
            [](auto, auto) {
                midi_input_enabled = false;
                for (auto& [action, bind]: rando_bindings) {
                    if (!bind.midi_bindings.empty()) {
                        const auto simulator = core::input::get_simulator_for(action);

                        if (simulator != nullptr) {
                            simulator->enabled = false;
                        }
                    }
                }

                win::console::console_send("MIDI Input disabled");
            },
            true
        );

        win::console::register_command(
            {"midi", "register_action"},
            [](auto, auto params) {
                if (params.size() != 1) {
                    win::console::console_send("Error: Exactly one argument required. Please provide the action name.");
                    return;
                }

                const auto action_name = params.at(0).value;
                win::console::console_send(std::format("Hold your notes for '{}' in 3...", params[0].value));

                core::events::schedule_task(1.f, [] { win::console::console_send("2..."); });

                core::events::schedule_task(2.f, [] { win::console::console_send("1..."); });

                core::events::schedule_task(3.f, [action_name] {
                    std::vector<uint8_t> pressed_notes;

                    for (int i = 0; i < 256; ++i) {
                        if (core::input::midi_input::is_note_pressed(i)) {
                            pressed_notes.push_back(i);
                        }
                    }

                    if (pressed_notes.empty()) {
                        win::console::console_send("No notes pressed, nothing changed.");
                        return;
                    }

                    nlohmann::json j;
                    load_json_file(get_user_data_path("randomizer/midi_bindings.json"), j);

                    if (!j.contains(action_name)) {
                        j[action_name] = nlohmann::json::array();
                    }

                    // Store new bind
                    j[action_name][0]["notes"] = pressed_notes;
                    std::ofstream stream(get_user_data_path("randomizer/midi_bindings.json"));
                    stream << j.dump(2);
                    stream.close();

                    // Reload MIDI bindings
                    for (auto& bind: rando_bindings | std::views::values) {
                        bind.midi_bindings.clear();
                    }
                    read_midi_bindings(get_user_data_path("randomizer/midi_bindings.json"), on_midi_binding_read);

                    win::console::console_send(std::format("Saved '{}' = {}", action_name, pressed_notes));
                });
            },
            true
        );
        #endif
   });
} // namespace randomizer::input
