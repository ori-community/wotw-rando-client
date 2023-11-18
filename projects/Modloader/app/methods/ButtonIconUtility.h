#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/AxisButtonInput.h>
#include <Modloader/app/structs/AxisInput.h>
#include <Modloader/app/structs/Axis__Enum_1.h>
#include <Modloader/app/structs/ButtonInput.h>
#include <Modloader/app/structs/Button__Enum.h>
#include <Modloader/app/structs/CompoundButtonInput.h>
#include <Modloader/app/structs/ControllerButtonInput.h>
#include <Modloader/app/structs/IAxisInput.h>
#include <Modloader/app/structs/KeyCodeButtonInput.h>
#include <Modloader/app/structs/KeyCode__Enum.h>
#include <Modloader/app/structs/XboxControllerInput_Button__Enum.h>
#include <Modloader/app/structs/XboxOneController_AxisInput.h>
#include <Modloader/app/structs/XboxOneController_Axis__Enum.h>
#include <Modloader/app/structs/XboxOneController_ButtonInput.h>
#include <Modloader/app/structs/XboxOneController_Button__Enum.h>

namespace app::classes::ButtonIconUtility {
    IL2CPP_REGISTER_METHOD(0x0081E660, app::String*, KeyCodeToString, (app::KeyCode__Enum key_code))
    IL2CPP_REGISTER_METHOD(0x0081E8C0, app::String*, ControllerButtonToString, (app::XboxControllerInput_Button__Enum button))
    IL2CPP_REGISTER_METHOD(0x0081EAB0, app::String*, SwitchButtonToString, (app::Button__Enum button))
    IL2CPP_REGISTER_METHOD(0x0081ECA0, app::String*, XboxOneControllerButtonToString, (app::XboxOneController_Button__Enum button))
    IL2CPP_REGISTER_METHOD(0x0081EE90, app::String*, XboxOneControllerAxisToString, (app::XboxOneController_Axis__Enum axis))
    IL2CPP_REGISTER_METHOD(0x0081F080, app::String*, SwitchControllerAxisToString, (app::Axis__Enum_1 axis))
    IL2CPP_REGISTER_METHOD(0x0081F270, app::String*, GetButtonString_1, (app::KeyCodeButtonInput * key_code_button_input))
    IL2CPP_REGISTER_METHOD(0x0081F320, app::String*, GetButtonString_2, (app::XboxOneController_ButtonInput * xbox_one_button_input))
    IL2CPP_REGISTER_METHOD(0x0081F3D0, app::String*, GetAxisString, (app::XboxOneController_AxisInput * xbox_one_axis_input))
    IL2CPP_REGISTER_METHOD(0x0081F480, app::String*, GetSwitchAxisString, (app::AxisInput * switch_axis_input))
    IL2CPP_REGISTER_METHOD(0x0081F530, app::String*, GetButtonString_3, (app::ControllerButtonInput * controller_button_input))
    IL2CPP_REGISTER_METHOD(0x0081F5E0, app::String*, GetButtonString_4, (app::AxisButtonInput * axis_button_input))
    IL2CPP_REGISTER_METHOD(0x0081F660, app::String*, GetSwitchButtonString, (app::AxisButtonInput * axis_button_input))
    IL2CPP_REGISTER_METHOD(0x0081F740, app::String*, GetButtonString_5, (app::ButtonInput * button_input))
    IL2CPP_REGISTER_METHOD(0x0081F7D0, app::String*, GetAxisIcon, (app::IAxisInput * axis_input, bool positive))
    IL2CPP_REGISTER_METHOD(0x0081FAC0, app::String*, GetButtonString_6, (app::CompoundButtonInput * compound_button_input))
    IL2CPP_REGISTER_METHOD(0x0081FD70, app::String*, GetNeutralLeftAxis, ())
    IL2CPP_REGISTER_METHOD(0x0081FDF0, app::String*, GetIconDigiPad, ())
    IL2CPP_REGISTER_METHOD(0x0081FE70, app::String*, GetIconKeyboardNavigationArrows, ())
    IL2CPP_REGISTER_METHOD(0x0081FEF0, app::String*, GetIconMouseNavigation, ())
    IL2CPP_REGISTER_METHOD(0x0081FF70, app::String*, GetIconAnalogueStick, ())
    IL2CPP_REGISTER_METHOD(0x0081FFF0, void, cctor, ())
} // namespace app::classes::ButtonIconUtility
