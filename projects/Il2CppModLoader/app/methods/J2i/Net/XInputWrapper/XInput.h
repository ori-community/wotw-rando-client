#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::J2i::Net::XInputWrapper::XInput {
    IL2CPP_REGISTER_METHOD(0x031B8670, int32_t, XInputGetState, (int32_t dw_user_index, app::XInputState * p_state))
    IL2CPP_REGISTER_METHOD(0x031B8720, int32_t, XInputSetState, (int32_t dw_user_index, app::XInputVibration * p_vibration))
}
