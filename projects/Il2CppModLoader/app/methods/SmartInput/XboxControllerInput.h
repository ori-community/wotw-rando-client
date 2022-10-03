#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SmartInput::XboxControllerInput {
    IL2CPP_REGISTER_METHOD(0x006CDA80, float, ToAxisFloat, (int32_t axis))
    IL2CPP_REGISTER_METHOD(0x006CDA90, float, GetAxis, (app::XboxControllerInput_Axis__Enum axis))
    IL2CPP_REGISTER_METHOD(0x006CE020, bool, GetButton, (app::XboxControllerInput_Button__Enum button, int32_t user_index))
    IL2CPP_REGISTER_METHOD(0x006CE970, int32_t, UserIndexToAxisUserIndex, (int32_t user_index))
    IL2CPP_REGISTER_METHOD(0x006CE980, int32_t, GetAxisUserIndex, ())
    IL2CPP_REGISTER_METHOD(0x006CEA10, int32_t, AxisIndexToButtonUserIndex, (int32_t user_index))
    IL2CPP_REGISTER_METHOD(0x006CEA20, app::String*, GetJoystickXAxisYString, (int32_t x, int32_t y))
    IL2CPP_REGISTER_METHOD(0x006CEFA0, void, cctor, ())
} // namespace app::classes::SmartInput::XboxControllerInput
