#include <Randomizer/input/controller_bindings.h>
#include <Randomizer/input/helpers.h>
#include <Randomizer/input/rando_bindings.h>
#include <Core/input/midi_input.h>
#include <Randomizer/randomizer.h>

#include <Core/api/game/game.h>
#include <Core/input/simulator.h>
#include <Core/settings.h>

#include <Modloader/app/methods/PlayerInput.h>
#include <Modloader/app/methods/SavePedestalController.h>
#include <Modloader/app/methods/UnityEngine/Input.h>
#include <Modloader/app/types/PlayerInput.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

#include <unordered_map>
#include <unordered_set>

using namespace modloader;
using namespace app::classes;
using namespace app::classes::UnityEngine;

namespace randomizer::input {
    namespace {
        const std::string KEYBOARD_REBIND_FILE = "keyboard_bindings.json";
        const std::string MIDI_REBIND_FILE = "midi_bindings.json";

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

        IL2CPP_INTERCEPT(PlayerInput, void, ClearControls, (app::PlayerInput * this_ptr)) {
            next::PlayerInput::ClearControls(this_ptr);
            for (auto& binding : rando_bindings) {
                binding.second.kbm_bindings.clear();
                binding.second.midi_bindings.clear();
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

        IL2CPP_INTERCEPT(SavePedestalController, void, BeginTeleportation, (app::Vector2 teleport_target_world_position)) {
            auto player_input = types::PlayerInput::get_class()->static_fields->Instance;
            auto prev = player_input->fields.Active;
            next::SavePedestalController::BeginTeleportation(teleport_target_world_position);
            player_input->fields.Active = prev;
        }

        IL2CPP_INTERCEPT(PlayerInput, void, RefreshControls, (app::PlayerInput * this_ptr)) {
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
                        for (auto const& input : info.midi_bindings) {
                            const auto midi_pressed = is_midi_pressed(input);

                            set_action(action, midi_pressed);

                            if (midi_pressed) {
                                pressed = true;
                                break;
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

    common::TimedMultiEventBus<Action>& single_input_bus() {
        static common::TimedMultiEventBus<Action> bus;
        return bus;
    }

    common::TimedEventBus<Action>& input_bus() {
        static common::TimedEventBus<Action> bus;
        return bus;
    }

    void on_before_register_input_simulators(GameEvent game_event, EventTiming timing) {
        read_keyboard_or_controller_bindings(base_path() / KEYBOARD_REBIND_FILE, on_keyboard_binding_read);
        read_midi_bindings(base_path() / MIDI_REBIND_FILE, on_midi_binding_read);
    }

    auto on_before_register_input_simulators_handle =
        core::api::game::event_bus().register_handler(GameEvent::RegisteringInputSimulators, EventTiming::Before, &on_before_register_input_simulators);
} // namespace randomizer::input
