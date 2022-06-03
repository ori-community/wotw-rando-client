#include <enums/actions.h>
#include <enums/buttons.h>
#include <input/controller_bindings.h>
#include <input/helpers.h>
#include <input/rando_bindings.h>

#include <constants.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <Common/ext.h>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#include <json/json.hpp>
#include <magic_enum/include/magic_enum.hpp>

using namespace modloader;

namespace randomizer {
    namespace input {
        namespace {
            const std::string CONTROLLER_REBIND_FILE = "controller_bindings.json";

            std::unordered_map<app::XboxControllerInput_Axis__Enum, uint32_t> axis_map;
            std::unordered_map<ControllerButton, uint32_t> buttons_map;

            NAMED_IL2CPP_BINDING(SmartInput, AxisButtonInput, void, .ctor, ctor, (app::AxisButtonInput * this_ptr, app::IAxisInput* axis, app::AxisButtonInput_AxisMode__Enum mode, float value));
            NAMED_IL2CPP_BINDING(SmartInput, ControllerAxisInput, void, .ctor, ctor, (app::ControllerAxisInput * this_ptr, app::XboxControllerInput_Axis__Enum axis));
            NAMED_IL2CPP_BINDING(SmartInput, ControllerButtonInput, void, .ctor, ctor, (app::ControllerButtonInput * this_ptr, app::XboxControllerInput_Button__Enum button));
            IL2CPP_BINDING(SmartInput, CompoundAxisInput, void, Add, (app::CompoundAxisInput * this_ptr, app::IAxisInput* button));
            IL2CPP_BINDING(SmartInput, CompoundButtonInput, void, Add, (app::CompoundButtonInput * this_ptr, app::IButtonInput* button));
            IL2CPP_BINDING(SmartInput, CompoundAxisInput, float, GetValue, (app::CompoundAxisInput * this_ptr));
            IL2CPP_BINDING(SmartInput, CompoundButtonInput, bool, GetValue, (app::CompoundButtonInput * this_ptr));

            app::IAxisInput* get_axis_input(app::XboxControllerInput_Axis__Enum button) {
                return reinterpret_cast<app::IAxisInput*>(il2cpp::gchandle_target(axis_map[button]));
            }

            app::IButtonInput* get_button_input(ControllerButton button) {
                return reinterpret_cast<app::IButtonInput*>(il2cpp::gchandle_target(buttons_map[button]));
            }

            uint32_t create_axis_input(app::XboxControllerInput_Axis__Enum axis) {
                auto* input = il2cpp::create_object<app::ControllerAxisInput>("SmartInput", "ControllerAxisInput");
                ControllerAxisInput::ctor(input, axis);
                return il2cpp::gchandle_new(input, false);
            }

            uint32_t create_axis_button_input(app::XboxControllerInput_Axis__Enum axis, app::AxisButtonInput_AxisMode__Enum mode, float value) {
                auto* input = il2cpp::create_object<app::AxisButtonInput>("SmartInput", "AxisButtonInput");
                AxisButtonInput::ctor(input, get_axis_input(axis), mode, value);
                return il2cpp::gchandle_new(input, false);
            }

            uint32_t create_button_input(app::XboxControllerInput_Button__Enum button) {
                auto* input = il2cpp::create_object<app::ControllerButtonInput>("SmartInput", "ControllerButtonInput");
                ControllerButtonInput::ctor(input, button);
                return il2cpp::gchandle_new(input, false);
            }

            void initialize_buttons() {
                axis_map[app::XboxControllerInput_Axis__Enum_LeftStickX] = create_axis_input(app::XboxControllerInput_Axis__Enum_LeftStickX);
                axis_map[app::XboxControllerInput_Axis__Enum_LeftStickY] = create_axis_input(app::XboxControllerInput_Axis__Enum_LeftStickY);
                axis_map[app::XboxControllerInput_Axis__Enum_RightStickX] = create_axis_input(app::XboxControllerInput_Axis__Enum_RightStickX);
                axis_map[app::XboxControllerInput_Axis__Enum_RightStickY] = create_axis_input(app::XboxControllerInput_Axis__Enum_RightStickY);
                axis_map[app::XboxControllerInput_Axis__Enum_DpadX] = create_axis_input(app::XboxControllerInput_Axis__Enum_DpadX);
                axis_map[app::XboxControllerInput_Axis__Enum_DpadY] = create_axis_input(app::XboxControllerInput_Axis__Enum_DpadY);
                axis_map[app::XboxControllerInput_Axis__Enum_LeftTrigger] = create_axis_input(app::XboxControllerInput_Axis__Enum_LeftTrigger);
                axis_map[app::XboxControllerInput_Axis__Enum_RightTrigger] = create_axis_input(app::XboxControllerInput_Axis__Enum_RightTrigger);

                buttons_map[ControllerButton::LeftShoulder] = create_button_input(app::XboxControllerInput_Button__Enum_LeftShoulder);
                buttons_map[ControllerButton::RightShoulder] = create_button_input(app::XboxControllerInput_Button__Enum_RightShoulder);
                buttons_map[ControllerButton::LeftTrigger] = create_button_input(app::XboxControllerInput_Button__Enum_LeftTrigger);
                buttons_map[ControllerButton::RightTrigger] = create_button_input(app::XboxControllerInput_Button__Enum_RightTrigger);
                buttons_map[ControllerButton::Select] = create_button_input(app::XboxControllerInput_Button__Enum_Select);
                buttons_map[ControllerButton::Start] = create_button_input(app::XboxControllerInput_Button__Enum_Start);
                buttons_map[ControllerButton::LeftStick] = create_button_input(app::XboxControllerInput_Button__Enum_LeftStick);
                buttons_map[ControllerButton::RightStick] = create_button_input(app::XboxControllerInput_Button__Enum_RightStick);
                buttons_map[ControllerButton::ButtonA] = create_button_input(app::XboxControllerInput_Button__Enum_ButtonA);
                buttons_map[ControllerButton::ButtonB] = create_button_input(app::XboxControllerInput_Button__Enum_ButtonB);
                buttons_map[ControllerButton::ButtonX] = create_button_input(app::XboxControllerInput_Button__Enum_ButtonX);
                buttons_map[ControllerButton::ButtonY] = create_button_input(app::XboxControllerInput_Button__Enum_ButtonY);

                buttons_map[ControllerButton::DPadLeft] = create_axis_button_input(app::XboxControllerInput_Axis__Enum_DpadX, app::AxisButtonInput_AxisMode__Enum_LessThan, -0.5f);
                buttons_map[ControllerButton::DPadRight] = create_axis_button_input(app::XboxControllerInput_Axis__Enum_DpadX, app::AxisButtonInput_AxisMode__Enum_GreaterThan, 0.5f);
                buttons_map[ControllerButton::DPadUp] = create_axis_button_input(app::XboxControllerInput_Axis__Enum_DpadY, app::AxisButtonInput_AxisMode__Enum_GreaterThan, 0.5f);
                buttons_map[ControllerButton::DPadDown] = create_axis_button_input(app::XboxControllerInput_Axis__Enum_DpadY, app::AxisButtonInput_AxisMode__Enum_LessThan, -0.5f);

                buttons_map[ControllerButton::LeftStickLeft] = create_axis_button_input(app::XboxControllerInput_Axis__Enum_LeftStickX, app::AxisButtonInput_AxisMode__Enum_LessThan, -0.5f);
                buttons_map[ControllerButton::LeftStickRight] = create_axis_button_input(app::XboxControllerInput_Axis__Enum_LeftStickX, app::AxisButtonInput_AxisMode__Enum_GreaterThan, 0.5f);
                buttons_map[ControllerButton::LeftStickUp] = create_axis_button_input(app::XboxControllerInput_Axis__Enum_LeftStickY, app::AxisButtonInput_AxisMode__Enum_GreaterThan, 0.5f);
                buttons_map[ControllerButton::LeftStickDown] = create_axis_button_input(app::XboxControllerInput_Axis__Enum_LeftStickY, app::AxisButtonInput_AxisMode__Enum_LessThan, -0.5f);

                buttons_map[ControllerButton::RightStickLeft] = create_axis_button_input(app::XboxControllerInput_Axis__Enum_RightStickX, app::AxisButtonInput_AxisMode__Enum_LessThan, -0.5f);
                buttons_map[ControllerButton::RightStickRight] = create_axis_button_input(app::XboxControllerInput_Axis__Enum_RightStickX, app::AxisButtonInput_AxisMode__Enum_GreaterThan, 0.5f);
                buttons_map[ControllerButton::RightStickUp] = create_axis_button_input(app::XboxControllerInput_Axis__Enum_RightStickY, app::AxisButtonInput_AxisMode__Enum_GreaterThan, 0.5f);
                buttons_map[ControllerButton::RightStickDown] = create_axis_button_input(app::XboxControllerInput_Axis__Enum_RightStickY, app::AxisButtonInput_AxisMode__Enum_LessThan, -0.5f);
            }

            std::unordered_map<Action, std::vector<std::vector<ControllerButton>>> bindings;
            void handle_binding(Action action, std::vector<int> const& buttons, bool respects_modifiers) {
                auto& binding = bindings[action].emplace_back();
                binding.resize(buttons.size());
                std::transform(buttons.begin(), buttons.end(), binding.begin(), [](int button) {
                    return static_cast<ControllerButton>(button);
                });
            }

            void add_bindings(app::CompoundButtonInput* input, Action action) {
                for (auto buttons : bindings[action]) {
                    if (!buttons.empty()) {
                        // For non rando bindings we only support having one button per action.
                        auto* button_input = reinterpret_cast<app::IButtonInput*>(il2cpp::gchandle_target(buttons_map[buttons[0]]));
                        CompoundButtonInput::Add(input, button_input);
                    }
                }
            }

            bool initialized = false;
            IL2CPP_INTERCEPT(, PlayerInput, void, AddControllerControls, (app::PlayerInput * this_ptr)) {
                // If we fail to read the bindings we want to use default game bindings.
                auto bindings_read = read_bindings(base_path + CONTROLLER_REBIND_FILE, handle_binding);

                auto* player_input_rebinding_klass = il2cpp::get_class<app::PlayerInputRebinding__Class>("", "PlayerInputRebinding");
                if (!bindings_read || !player_input_rebinding_klass->static_fields->USE_NEW_BINDINGS_TEST) {
                    // If we are here something weird is happening.
                    PlayerInput::AddControllerControls(this_ptr);
                    return;
                }

                if (!initialized) {
                    initialize_buttons();
                    initialized = true;
                }

                CompoundAxisInput::Add(this_ptr->fields.HorizontalAnalogLeft, get_axis_input(app::XboxControllerInput_Axis__Enum_LeftStickX));
                CompoundAxisInput::Add(this_ptr->fields.VerticalAnalogLeft, get_axis_input(app::XboxControllerInput_Axis__Enum_LeftStickY));
                CompoundAxisInput::Add(this_ptr->fields.HorizontalAnalogRight, get_axis_input(app::XboxControllerInput_Axis__Enum_RightStickX));
                CompoundAxisInput::Add(this_ptr->fields.VerticalAnalogRight, get_axis_input(app::XboxControllerInput_Axis__Enum_RightStickY));
                CompoundAxisInput::Add(this_ptr->fields.HorizontalDigiPad, get_axis_input(app::XboxControllerInput_Axis__Enum_DpadX));
                CompoundAxisInput::Add(this_ptr->fields.VerticalDigiPad, get_axis_input(app::XboxControllerInput_Axis__Enum_DpadY));
                CompoundAxisInput::Add(this_ptr->fields.LeftTriggerAxis, get_axis_input(app::XboxControllerInput_Axis__Enum_LeftTrigger));
                CompoundAxisInput::Add(this_ptr->fields.RightTriggerAxis, get_axis_input(app::XboxControllerInput_Axis__Enum_RightTrigger));

                // We use them for our own actions, so add them.
                // if (player_input_rebinding_klass->static_fields->DEBUG_CONTROLS_ENABLED != false) {
                CompoundButtonInput::Add(this_ptr->fields.LeftShoulder, get_button_input(ControllerButton::LeftShoulder));
                CompoundButtonInput::Add(this_ptr->fields.RightShoulder, get_button_input(ControllerButton::RightShoulder));
                CompoundButtonInput::Add(this_ptr->fields.LeftTrigger, get_button_input(ControllerButton::LeftTrigger));
                CompoundButtonInput::Add(this_ptr->fields.RightTrigger, get_button_input(ControllerButton::RightTrigger));
                CompoundButtonInput::Add(this_ptr->fields.Select, get_button_input(ControllerButton::Select));
                CompoundButtonInput::Add(this_ptr->fields.Start, get_button_input(ControllerButton::Start));
                CompoundButtonInput::Add(this_ptr->fields.LeftStick, get_button_input(ControllerButton::LeftStick));
                CompoundButtonInput::Add(this_ptr->fields.RightStick, get_button_input(ControllerButton::RightStick));
                CompoundButtonInput::Add(this_ptr->fields.ActionButtonA, get_button_input(ControllerButton::ButtonA));
                CompoundButtonInput::Add(this_ptr->fields.ActionButtonB, get_button_input(ControllerButton::ButtonB));
                CompoundButtonInput::Add(this_ptr->fields.ActionButtonX, get_button_input(ControllerButton::ButtonX));
                CompoundButtonInput::Add(this_ptr->fields.ActionButtonY, get_button_input(ControllerButton::ButtonY));
                //}

                add_bindings(this_ptr->fields.MainMenuSaveCopy, Action::MainMenuSaveCopy);
                add_bindings(this_ptr->fields.MainMenuSaveDelete, Action::MainMenuSaveDelete);
                add_bindings(this_ptr->fields.Interact, Action::Interact);
                add_bindings(this_ptr->fields.Jump, Action::Jump);
                add_bindings(this_ptr->fields.Ability1, Action::Ability1);
                add_bindings(this_ptr->fields.Ability2, Action::Ability2);
                add_bindings(this_ptr->fields.Ability3, Action::Ability3);
                add_bindings(this_ptr->fields.Glide, Action::Glide);
                add_bindings(this_ptr->fields.Grab, Action::Grab);
                add_bindings(this_ptr->fields.Dash, Action::Dash);
                add_bindings(this_ptr->fields.Burrow, Action::Burrow);
                add_bindings(this_ptr->fields.Bash, Action::Bash);
                add_bindings(this_ptr->fields.Grapple, Action::Grapple);
                add_bindings(this_ptr->fields.DialogueAdvance, Action::DialogueAdvance);
                add_bindings(this_ptr->fields.DialogueAdvance, Action::DialogueAdvance);
                add_bindings(this_ptr->fields.DialogueAdvance, Action::DialogueAdvance);
                add_bindings(this_ptr->fields.DialogueAdvance, Action::DialogueAdvance);
                add_bindings(this_ptr->fields.DialogueOption1, Action::DialogueOption1);
                add_bindings(this_ptr->fields.DialogueOption2, Action::DialogueOption2);
                add_bindings(this_ptr->fields.DialogueOption3, Action::DialogueOption3);
                add_bindings(this_ptr->fields.DialogueExit, Action::DialogueExit);
                add_bindings(this_ptr->fields.OpenMapsShardsInventory, Action::OpenMapsShardsInventory);
                add_bindings(this_ptr->fields.OpenWeaponWheel, Action::OpenWeaponWheel);
                add_bindings(this_ptr->fields.PauseScreen, Action::PauseScreen);
                add_bindings(this_ptr->fields.LiveSignIn, Action::LiveSignIn);
                add_bindings(this_ptr->fields.MapZoomIn, Action::MapZoomIn);
                add_bindings(this_ptr->fields.MapZoomOut, Action::MapZoomOut);
                add_bindings(this_ptr->fields.MenuSelect, Action::MenuSelect);
                add_bindings(this_ptr->fields.MenuBack, Action::MenuBack);
                add_bindings(this_ptr->fields.MenuClose, Action::MenuClose);
                add_bindings(this_ptr->fields.MenuDown, Action::MenuDown);
                add_bindings(this_ptr->fields.MenuUp, Action::MenuUp);
                add_bindings(this_ptr->fields.MenuLeft, Action::MenuLeft);
                add_bindings(this_ptr->fields.MenuRight, Action::MenuRight);
                add_bindings(this_ptr->fields.MenuPageLeft, Action::MenuPageLeft);
                add_bindings(this_ptr->fields.MenuPageRight, Action::MenuPageRight);
                add_bindings(this_ptr->fields.LeaderboardCycleFilter, Action::LeaderboardCycleFilter);
                add_bindings(this_ptr->fields.MapFilter, Action::MapFilter);
                add_bindings(this_ptr->fields.MapDetails, Action::MapDetails);
                add_bindings(this_ptr->fields.MapFocusOri, Action::MapFocusOri);
                add_bindings(this_ptr->fields.MapFocusObjective, Action::MapFocusObjective);
            }
        } // namespace

        void refresh_controller_controls() {
            for (auto action = static_cast<Action>(static_cast<int>(Action::RANDO_ACTIONS_START) + 1); action < Action::TOTAL; action = static_cast<Action>(static_cast<int>(action) + 1)) {
                auto& entries = bindings[action];
                for (auto const& buttons : entries) {
                    for (auto const& button : buttons) {
                        if (buttons_map.find(button) == buttons_map.end())
                            continue;

                        auto input = il2cpp::gchandle_target(buttons_map[button]);
                        if (input != nullptr)
                            il2cpp::invoke(input, "Refresh");
                    }
                }
            }
        }

        bool is_controller_pressed(Action action) {
            auto& entries = bindings[action];
            for (auto const& buttons : entries) {
                bool is_pressed = true;
                for (auto const& button : buttons) {
                    auto input = il2cpp::gchandle_target(buttons_map[button]);
                    if (!il2cpp::invoke<app::Boolean__Boxed>(input, "GetValue")->fields) {
                        is_pressed = false;
                        break;
                    }
                }

                if (is_pressed)
                    return true;
            }

            return false;
        }
    } // namespace input
} // namespace randomizer
