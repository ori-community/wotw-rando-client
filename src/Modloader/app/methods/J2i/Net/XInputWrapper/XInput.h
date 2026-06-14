#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XInputState.h>
#include <Modloader/app/structs/XInputVibration.h>

namespace app::classes::J2i::Net::XInputWrapper::XInput {
    IL2CPP_REGISTER_METHOD(0x031B8670, int32_t, XInputGetState, int32_t dw_user_index, app::XInputState* p_state)
    IL2CPP_REGISTER_METHOD(0x031B8720, int32_t, XInputSetState, int32_t dw_user_index, app::XInputVibration* p_vibration)
} // namespace app::classes::J2i::Net::XInputWrapper::XInput
