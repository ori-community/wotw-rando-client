#include <Randomizer/input/controller_bindings.h>
#include <Randomizer/input/helpers.h>

#include <Core/enums/actions.h>
#include <Core/enums/buttons.h>

#include <Modloader/app/methods/PlayerInput.h>
#include <Modloader/app/methods/SmartInput/AxisButtonInput.h>
#include <Modloader/app/methods/SmartInput/CompoundAxisInput.h>
#include <Modloader/app/methods/SmartInput/CompoundButtonInput.h>
#include <Modloader/app/methods/SmartInput/ControllerAxisInput.h>
#include <Modloader/app/methods/SmartInput/ControllerButtonInput.h>
#include <Modloader/app/structs/Boolean__Boxed.h>
#include <Modloader/app/types/AxisButtonInput.h>
#include <Modloader/app/types/ControllerAxisInput.h>
#include <Modloader/app/types/ControllerButtonInput.h>
#include <Modloader/app/types/PlayerInputRebinding.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

#include <Modloader/app/methods/ButtonIconUtility.h>
#include <algorithm>
#include <magic_enum.hpp>
#include <nlohmann/json.hpp>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace modloader;
using namespace app::classes;
using namespace app::classes::SmartInput;

namespace randomizer::input {
    namespace {
        const std::string CONTROLLER_REBIND_FILE = "controller_bindings.json";

        std::unordered_map<app::XboxControllerInput_Axis__Enum, gchandle> axis_map;
        std::unordered_map<ControllerButton, gchandle> buttons_map;

        app::IAxisInput* get_axis_input(app::XboxControllerInput_Axis__Enum button) {
            return reinterpret_cast<app::IAxisInput*>(il2cpp::gchandle_target(axis_map[button]));
        }

        app::IButtonInput* get_button_input(ControllerButton button) {
            return reinterpret_cast<app::IButtonInput*>(il2cpp::gchandle_target(buttons_map[button]));
        }

        gchandle create_axis_input(app::XboxControllerInput_Axis__Enum axis) {
            auto* input = types::ControllerAxisInput::create();
            ControllerAxisInput::ctor(input, axis);
            return il2cpp::gchandle_new(input, false);
        }

        gchandle create_axis_button_input(app::XboxControllerInput_Axis__Enum axis, app::AxisButtonInput_AxisMode__Enum mode, float value) {
            auto* input = types::AxisButtonInput::create();
            AxisButtonInput::ctor(input, get_axis_input(axis), mode, value);
            return il2cpp::gchandle_new(input, false);
        }

        gchandle create_button_input(app::XboxControllerInput_Button__Enum button) {
            auto* input = types::ControllerButtonInput::create();
            ControllerButtonInput::ctor(input, button);
            return il2cpp::gchandle_new(input, false);
        }

        void initialize_button_and_axis_maps() {
            axis_map[app::XboxControllerInput_Axis__Enum::LeftStickX] = create_axis_input(app::XboxControllerInput_Axis__Enum::LeftStickX);
            axis_map[app::XboxControllerInput_Axis__Enum::LeftStickY] = create_axis_input(app::XboxControllerInput_Axis__Enum::LeftStickY);
            axis_map[app::XboxControllerInput_Axis__Enum::RightStickX] = create_axis_input(app::XboxControllerInput_Axis__Enum::RightStickX);
            axis_map[app::XboxControllerInput_Axis__Enum::RightStickY] = create_axis_input(app::XboxControllerInput_Axis__Enum::RightStickY);
            axis_map[app::XboxControllerInput_Axis__Enum::DpadX] = create_axis_input(app::XboxControllerInput_Axis__Enum::DpadX);
            axis_map[app::XboxControllerInput_Axis__Enum::DpadY] = create_axis_input(app::XboxControllerInput_Axis__Enum::DpadY);
            axis_map[app::XboxControllerInput_Axis__Enum::LeftTrigger] = create_axis_input(app::XboxControllerInput_Axis__Enum::LeftTrigger);
            axis_map[app::XboxControllerInput_Axis__Enum::RightTrigger] = create_axis_input(app::XboxControllerInput_Axis__Enum::RightTrigger);

            buttons_map[ControllerButton::LeftShoulder] = create_button_input(app::XboxControllerInput_Button__Enum::LeftShoulder);
            buttons_map[ControllerButton::RightShoulder] = create_button_input(app::XboxControllerInput_Button__Enum::RightShoulder);
            buttons_map[ControllerButton::LeftTrigger] = create_button_input(app::XboxControllerInput_Button__Enum::LeftTrigger);
            buttons_map[ControllerButton::RightTrigger] = create_button_input(app::XboxControllerInput_Button__Enum::RightTrigger);
            buttons_map[ControllerButton::Select] = create_button_input(app::XboxControllerInput_Button__Enum::Select);
            buttons_map[ControllerButton::Start] = create_button_input(app::XboxControllerInput_Button__Enum::Start);
            buttons_map[ControllerButton::LeftStick] = create_button_input(app::XboxControllerInput_Button__Enum::LeftStick);
            buttons_map[ControllerButton::RightStick] = create_button_input(app::XboxControllerInput_Button__Enum::RightStick);
            buttons_map[ControllerButton::ButtonA] = create_button_input(app::XboxControllerInput_Button__Enum::ButtonA);
            buttons_map[ControllerButton::ButtonB] = create_button_input(app::XboxControllerInput_Button__Enum::ButtonB);
            buttons_map[ControllerButton::ButtonX] = create_button_input(app::XboxControllerInput_Button__Enum::ButtonX);
            buttons_map[ControllerButton::ButtonY] = create_button_input(app::XboxControllerInput_Button__Enum::ButtonY);

            buttons_map[ControllerButton::DPadLeft] = create_axis_button_input(app::XboxControllerInput_Axis__Enum::DpadX, app::AxisButtonInput_AxisMode__Enum::LessThan, -0.5f);
            buttons_map[ControllerButton::DPadRight] = create_axis_button_input(app::XboxControllerInput_Axis__Enum::DpadX, app::AxisButtonInput_AxisMode__Enum::GreaterThan, 0.5f);
            buttons_map[ControllerButton::DPadUp] = create_axis_button_input(app::XboxControllerInput_Axis__Enum::DpadY, app::AxisButtonInput_AxisMode__Enum::GreaterThan, 0.5f);
            buttons_map[ControllerButton::DPadDown] = create_axis_button_input(app::XboxControllerInput_Axis__Enum::DpadY, app::AxisButtonInput_AxisMode__Enum::LessThan, -0.5f);

            buttons_map[ControllerButton::LeftStickLeft] = create_axis_button_input(app::XboxControllerInput_Axis__Enum::LeftStickX, app::AxisButtonInput_AxisMode__Enum::LessThan, -0.5f);
            buttons_map[ControllerButton::LeftStickRight] = create_axis_button_input(app::XboxControllerInput_Axis__Enum::LeftStickX, app::AxisButtonInput_AxisMode__Enum::GreaterThan, 0.5f);
            buttons_map[ControllerButton::LeftStickUp] = create_axis_button_input(app::XboxControllerInput_Axis__Enum::LeftStickY, app::AxisButtonInput_AxisMode__Enum::GreaterThan, 0.5f);
            buttons_map[ControllerButton::LeftStickDown] = create_axis_button_input(app::XboxControllerInput_Axis__Enum::LeftStickY, app::AxisButtonInput_AxisMode__Enum::LessThan, -0.5f);

            buttons_map[ControllerButton::RightStickLeft] = create_axis_button_input(app::XboxControllerInput_Axis__Enum::RightStickX, app::AxisButtonInput_AxisMode__Enum::LessThan, -0.5f);
            buttons_map[ControllerButton::RightStickRight] = create_axis_button_input(app::XboxControllerInput_Axis__Enum::RightStickX, app::AxisButtonInput_AxisMode__Enum::GreaterThan, 0.5f);
            buttons_map[ControllerButton::RightStickUp] = create_axis_button_input(app::XboxControllerInput_Axis__Enum::RightStickY, app::AxisButtonInput_AxisMode__Enum::GreaterThan, 0.5f);
            buttons_map[ControllerButton::RightStickDown] = create_axis_button_input(app::XboxControllerInput_Axis__Enum::RightStickY, app::AxisButtonInput_AxisMode__Enum::LessThan, -0.5f);
        }

        std::unordered_map<Action, std::vector<std::vector<ControllerButton>>> bindings;
        void on_binding_read(Action action, std::vector<int> const& buttons, bool respects_modifiers) {
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
        IL2CPP_INTERCEPT(PlayerInput, void, AddControllerControls, (app::PlayerInput * this_ptr)) {
            // If we fail to read the bindings we want to use default game bindings.
            auto bindings_read = read_bindings(base_path() / CONTROLLER_REBIND_FILE, on_binding_read);

            auto* player_input_rebinding_klass = types::PlayerInputRebinding::get_class();
            if (!bindings_read || !player_input_rebinding_klass->static_fields->USE_NEW_BINDINGS_TEST) {
                // If we are here something weird is happening.
                error("input/controller_bindings", "Something weird is happening!!11");
                next::PlayerInput::AddControllerControls(this_ptr);
                return;
            }

            if (!initialized) {
                initialize_button_and_axis_maps();
                initialized = true;
            }

            CompoundAxisInput::Add(this_ptr->fields.HorizontalAnalogLeft, get_axis_input(app::XboxControllerInput_Axis__Enum::LeftStickX));
            CompoundAxisInput::Add(this_ptr->fields.VerticalAnalogLeft, get_axis_input(app::XboxControllerInput_Axis__Enum::LeftStickY));
            CompoundAxisInput::Add(this_ptr->fields.HorizontalAnalogRight, get_axis_input(app::XboxControllerInput_Axis__Enum::RightStickX));
            CompoundAxisInput::Add(this_ptr->fields.VerticalAnalogRight, get_axis_input(app::XboxControllerInput_Axis__Enum::RightStickY));
            CompoundAxisInput::Add(this_ptr->fields.HorizontalDigiPad, get_axis_input(app::XboxControllerInput_Axis__Enum::DpadX));
            CompoundAxisInput::Add(this_ptr->fields.VerticalDigiPad, get_axis_input(app::XboxControllerInput_Axis__Enum::DpadY));
            CompoundAxisInput::Add(this_ptr->fields.LeftTriggerAxis, get_axis_input(app::XboxControllerInput_Axis__Enum::LeftTrigger));
            CompoundAxisInput::Add(this_ptr->fields.RightTriggerAxis, get_axis_input(app::XboxControllerInput_Axis__Enum::RightTrigger));

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
            add_bindings(this_ptr->fields.DialogueOption1, Action::DialogueOption1);
            add_bindings(this_ptr->fields.DialogueOption2, Action::DialogueOption2);
            add_bindings(this_ptr->fields.DialogueOption3, Action::DialogueOption3);
            add_bindings(this_ptr->fields.DialogueExit, Action::DialogueExit);
            add_bindings(this_ptr->fields.OpenMapsShardsInventory, Action::OpenMapsShardsInventory);
            add_bindings(this_ptr->fields.OpenAreaMap, Action::OpenAreaMap);
            add_bindings(this_ptr->fields.OpenInventory, Action::OpenInventory);
            add_bindings(this_ptr->fields.OpenWorldMap, Action::OpenWorldMap);
            add_bindings(this_ptr->fields.OpenShards, Action::OpenShards);
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

    bool is_controller_pressed(Action action) {
        auto& entries = bindings[action];
        for (auto const& buttons : entries) {
            if (
                std::all_of(buttons.begin(), buttons.end(), [](ControllerButton button) {
                    auto input = il2cpp::gchandle_target(buttons_map[button]);
                    if (input != nullptr) {
                        return il2cpp::invoke<app::Boolean__Boxed>(input, "GetValue")->fields;
                    }

                    return false;
                })
            ) {
                return true;
            }
        }

        return false;
    }

    std::unordered_map<ControllerButton, std::string> button_to_string{
        { ControllerButton::LeftShoulder, "<xbox>L</>"},
        { ControllerButton::RightShoulder, "<xbox>R</>"},
        { ControllerButton::LeftTrigger, "<xbox>S</>"},
        { ControllerButton::RightTrigger, "<xbox>T</>"},
        { ControllerButton::Select, "<xbox>s</>"},
        { ControllerButton::Start, "<xbox>m</>"},
        { ControllerButton::LeftStick, "<xbox>5</>"},
        { ControllerButton::RightStick, "<xbox>6</>"},
        { ControllerButton::ButtonA, "<xbox>A</>"},
        { ControllerButton::ButtonB, "<xbox>B</>"},
        { ControllerButton::ButtonX, "<xbox>X</>"},
        { ControllerButton::ButtonY, "<xbox>Y</>"},
        { ControllerButton::DPadLeft, "<xbox>l</>"},
        { ControllerButton::DPadRight, "<xbox>r</>"},
        { ControllerButton::DPadUp, "<xbox>u</>"},
        { ControllerButton::DPadDown, "<xbox>d</>"},
        { ControllerButton::LeftStickLeft, "<xbox>5</><xbox>1</>"},
        { ControllerButton::LeftStickRight, "<xbox>5</><xbox>2</>"},
        { ControllerButton::LeftStickUp, "<xbox>5</><xbox>3</>"},
        { ControllerButton::LeftStickDown, "<xbox>5</><xbox>4</>"},
        { ControllerButton::RightStickLeft, "<xbox>6</><xbox>1</>"},
        { ControllerButton::RightStickRight, "<xbox>6</><xbox>2</>"},
        { ControllerButton::RightStickUp, "<xbox>6</><xbox>3</>"},
        { ControllerButton::RightStickDown, "<xbox>6</><xbox>4</>"},
    };

    std::string controller_action_to_string(Action action) {
        std::string key;
        const auto it = bindings.find(action);
        if (it == bindings.end() || it->second.empty()) {
            return key;
        }

        const auto& binding = it->second.front();
        for (auto button: binding) {
            key += button_to_string.at(button);
        }

        return key;
    }
} // namespace randomizer::input
