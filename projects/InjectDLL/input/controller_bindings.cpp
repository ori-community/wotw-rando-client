#include <input/controller_bindings.h>
#include <input/enums/actions.h>
#include <input/enums/buttons.h>

#include <constants.h>

#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>

#include <fstream>
#include <vector>
#include <unordered_map>
#include <Common\ext.h>

#include <magic_enum/include/magic_enum.hpp>

using namespace modloader;

namespace
{
    const std::string CONTROLLER_REBIND_FILE = "controller_bindings.cfg";

    std::unordered_map<app::XboxControllerInput_Axis__Enum, uint32_t> axis_map;
    std::unordered_map<Button, uint32_t> buttons_map;

    NAMED_IL2CPP_BINDING(SmartInput, AxisButtonInput, void, .ctor, ctor, (app::AxisButtonInput* this_ptr, app::IAxisInput* axis, app::AxisButtonInput_AxisMode__Enum mode, float value));
    NAMED_IL2CPP_BINDING(SmartInput, ControllerAxisInput, void, .ctor, ctor, (app::ControllerAxisInput* this_ptr, app::XboxControllerInput_Axis__Enum axis));
    NAMED_IL2CPP_BINDING(SmartInput, ControllerButtonInput, void, .ctor, ctor, (app::ControllerButtonInput* this_ptr, app::XboxControllerInput_Button__Enum button));
    IL2CPP_BINDING(SmartInput, CompoundAxisInput, void, Add, (app::CompoundAxisInput* this_ptr, app::IAxisInput* button));
    IL2CPP_BINDING(SmartInput, CompoundButtonInput, void, Add, (app::CompoundButtonInput* this_ptr, app::IButtonInput* button));

    app::IAxisInput* get_axis_input(app::XboxControllerInput_Axis__Enum button)
    {
        return reinterpret_cast<app::IAxisInput*>(il2cpp::gchandle_target(axis_map[button]));
    }

    app::IButtonInput* get_button_input(Button button)
    {
        return reinterpret_cast<app::IButtonInput*>(il2cpp::gchandle_target(buttons_map[button]));
    }

    uint32_t create_axis_input(app::XboxControllerInput_Axis__Enum axis)
    {
        auto* input = il2cpp::create_object<app::ControllerAxisInput>("SmartInput", "ControllerAxisInput");
        ControllerAxisInput::ctor(input, axis);
        return il2cpp::gchandle_new(input, false);
    }

    uint32_t create_axis_button_input(app::XboxControllerInput_Axis__Enum axis, app::AxisButtonInput_AxisMode__Enum mode, float value)
    {
        auto* input = il2cpp::create_object<app::AxisButtonInput>("SmartInput", "AxisButtonInput");
        AxisButtonInput::ctor(input, get_axis_input(axis), mode, value);
        return il2cpp::gchandle_new(input, false);
    }

    uint32_t create_button_input(app::XboxControllerInput_Button__Enum button)
    {
        auto* input = il2cpp::create_object<app::ControllerButtonInput>("SmartInput", "ControllerButtonInput");
        ControllerButtonInput::ctor(input, button);
        return il2cpp::gchandle_new(input, false);
    }

    void initialize_buttons()
    {
        axis_map[app::XboxControllerInput_Axis__Enum_LeftStickX] = create_axis_input(app::XboxControllerInput_Axis__Enum_LeftStickX);
        axis_map[app::XboxControllerInput_Axis__Enum_LeftStickY] = create_axis_input(app::XboxControllerInput_Axis__Enum_LeftStickY);
        axis_map[app::XboxControllerInput_Axis__Enum_RightStickX] = create_axis_input(app::XboxControllerInput_Axis__Enum_RightStickX);
        axis_map[app::XboxControllerInput_Axis__Enum_RightStickY] = create_axis_input(app::XboxControllerInput_Axis__Enum_RightStickY);
        axis_map[app::XboxControllerInput_Axis__Enum_DpadX] = create_axis_input(app::XboxControllerInput_Axis__Enum_LeftStickX);
        axis_map[app::XboxControllerInput_Axis__Enum_DpadY] = create_axis_input(app::XboxControllerInput_Axis__Enum_DpadY);
        axis_map[app::XboxControllerInput_Axis__Enum_LeftTrigger] = create_axis_input(app::XboxControllerInput_Axis__Enum_LeftTrigger);
        axis_map[app::XboxControllerInput_Axis__Enum_RightTrigger] = create_axis_input(app::XboxControllerInput_Axis__Enum_RightTrigger);

        buttons_map[Button::LeftShoulder] = create_button_input(app::XboxControllerInput_Button__Enum_LeftShoulder);
        buttons_map[Button::RightShoulder] = create_button_input(app::XboxControllerInput_Button__Enum_RightShoulder);
        buttons_map[Button::LeftTrigger] = create_button_input(app::XboxControllerInput_Button__Enum_LeftTrigger);
        buttons_map[Button::RightTrigger] = create_button_input(app::XboxControllerInput_Button__Enum_RightTrigger);
        buttons_map[Button::Select] = create_button_input(app::XboxControllerInput_Button__Enum_Select);
        buttons_map[Button::Start] = create_button_input(app::XboxControllerInput_Button__Enum_Start);
        buttons_map[Button::LeftStick] = create_button_input(app::XboxControllerInput_Button__Enum_LeftStick);
        buttons_map[Button::RightStick] = create_button_input(app::XboxControllerInput_Button__Enum_RightStick);
        buttons_map[Button::ButtonA] = create_button_input(app::XboxControllerInput_Button__Enum_ButtonA);
        buttons_map[Button::ButtonB] = create_button_input(app::XboxControllerInput_Button__Enum_ButtonB);
        buttons_map[Button::ButtonX] = create_button_input(app::XboxControllerInput_Button__Enum_ButtonX);
        buttons_map[Button::ButtonY] = create_button_input(app::XboxControllerInput_Button__Enum_ButtonY);

        buttons_map[Button::DPadLeft] = create_axis_button_input(app::XboxControllerInput_Axis__Enum_DpadX, app::AxisButtonInput_AxisMode__Enum_LessThan, -0.5f);
        buttons_map[Button::DPadRight] = create_axis_button_input(app::XboxControllerInput_Axis__Enum_DpadX, app::AxisButtonInput_AxisMode__Enum_GreaterThan, 0.5f);
        buttons_map[Button::DPadUp] = create_axis_button_input(app::XboxControllerInput_Axis__Enum_DpadY, app::AxisButtonInput_AxisMode__Enum_GreaterThan, 0.5f);
        buttons_map[Button::DPadDown] = create_axis_button_input(app::XboxControllerInput_Axis__Enum_DpadY, app::AxisButtonInput_AxisMode__Enum_LessThan, -0.5f);
        
        buttons_map[Button::LeftStickLeft] = create_axis_button_input(app::XboxControllerInput_Axis__Enum_LeftStickX, app::AxisButtonInput_AxisMode__Enum_LessThan, -0.5f);
        buttons_map[Button::LeftStickRight] = create_axis_button_input(app::XboxControllerInput_Axis__Enum_LeftStickX, app::AxisButtonInput_AxisMode__Enum_GreaterThan, 0.5f);
        buttons_map[Button::LeftStickUp] = create_axis_button_input(app::XboxControllerInput_Axis__Enum_LeftStickY, app::AxisButtonInput_AxisMode__Enum_GreaterThan, 0.5f);
        buttons_map[Button::LeftStickDown] = create_axis_button_input(app::XboxControllerInput_Axis__Enum_LeftStickY, app::AxisButtonInput_AxisMode__Enum_LessThan, -0.5f);
        
        buttons_map[Button::RightStickLeft] = create_axis_button_input(app::XboxControllerInput_Axis__Enum_RightStickX, app::AxisButtonInput_AxisMode__Enum_LessThan, -0.5f);
        buttons_map[Button::RightStickRight] = create_axis_button_input(app::XboxControllerInput_Axis__Enum_RightStickX, app::AxisButtonInput_AxisMode__Enum_GreaterThan, 0.5f);
        buttons_map[Button::RightStickUp] = create_axis_button_input(app::XboxControllerInput_Axis__Enum_RightStickY, app::AxisButtonInput_AxisMode__Enum_GreaterThan, 0.5f);
        buttons_map[Button::RightStickDown] = create_axis_button_input(app::XboxControllerInput_Axis__Enum_RightStickY, app::AxisButtonInput_AxisMode__Enum_LessThan, -0.5f);
    }

    std::unordered_map<Action, std::vector<uint32_t>> bindings;
    void read_bindings()
    {
        bindings.clear();
        std::string line;
        std::ifstream file(base_path + CONTROLLER_REBIND_FILE);
        while (std::getline(file, line))
        {
            trim(line);
            if (!line.empty())
            {
                auto index = line.find('=');
                if (index != std::string::npos)
                {
                    auto action = magic_enum::enum_cast<Action>(trim(line.substr(0, index)));
                    auto button = magic_enum::enum_cast<Button>(trim(line.substr(index + 1)));
                    if (!action.has_value())
                        modloader::warn("bindings", format("Invalid action in binding file (%s), skipping.", line));
                    else if (!button.has_value())
                        modloader::warn("bindings", format("Invalid button in binding file (%s), skipping.", line));
                    else
                        bindings[action.value()].push_back(buttons_map[button.value()]);
                }
                else
                    modloader::warn("bindings", format("Invalid line in binding file (%s), skipping.", line));
            }
        }
    }

    void add_bindings(app::CompoundButtonInput* input, Action action)
    {
        for (auto button : bindings[action])
        {
            auto* button_input = reinterpret_cast<app::IButtonInput*>(il2cpp::gchandle_target(button));
            CompoundButtonInput::Add(input, button_input);
        }
    }

    bool initialized = false;
    IL2CPP_INTERCEPT(, PlayerInput, void, AddControllerControls, (app::PlayerInput* this_ptr)) {
        auto* player_input_rebinding_klass = il2cpp::get_class<app::PlayerInputRebinding__Class>("", "PlayerInputRebinding");
        if (!player_input_rebinding_klass->static_fields->USE_NEW_BINDINGS_TEST)
        {
            // If we are here something weird is happening.
            PlayerInput::AddControllerControls(this_ptr);
            return;
        }

        if (!initialized)
        {
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
        
        if (player_input_rebinding_klass->static_fields->DEBUG_CONTROLS_ENABLED != false) {
            CompoundButtonInput::Add(this_ptr->fields.LeftShoulder, get_button_input(Button::LeftShoulder));
            CompoundButtonInput::Add(this_ptr->fields.RightShoulder, get_button_input(Button::RightShoulder));
            CompoundButtonInput::Add(this_ptr->fields.LeftTrigger, get_button_input(Button::LeftTrigger));
            CompoundButtonInput::Add(this_ptr->fields.RightTrigger, get_button_input(Button::RightTrigger));
            CompoundButtonInput::Add(this_ptr->fields.Select, get_button_input(Button::Select));
            CompoundButtonInput::Add(this_ptr->fields.Start, get_button_input(Button::Start));
            CompoundButtonInput::Add(this_ptr->fields.LeftStick, get_button_input(Button::LeftStick));
            CompoundButtonInput::Add(this_ptr->fields.RightStick, get_button_input(Button::RightStick));
            CompoundButtonInput::Add(this_ptr->fields.ActionButtonA, get_button_input(Button::ButtonA));
            CompoundButtonInput::Add(this_ptr->fields.ActionButtonB, get_button_input(Button::ButtonB));
            CompoundButtonInput::Add(this_ptr->fields.ActionButtonX, get_button_input(Button::ButtonX));
            CompoundButtonInput::Add(this_ptr->fields.ActionButtonY, get_button_input(Button::ButtonY));
        }
        
        read_bindings();
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
}
