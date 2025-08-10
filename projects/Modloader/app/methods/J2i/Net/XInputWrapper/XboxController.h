#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/XInputVibration.h>
#include <Modloader/app/structs/XboxController.h>

namespace app::classes::J2i::Net::XInputWrapper::XboxController {
    IL2CPP_REGISTER_METHOD(0x031B8910, void, set_UpdateFrequency, int32_t value)
    IL2CPP_REGISTER_METHOD(0x031B89D0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x031B8E20, app::XboxController*, RetrieveController, int32_t index)
    IL2CPP_REGISTER_METHOD(0x031B8EF0, void, ctor, app::XboxController* this_ptr, int32_t player_index)
    IL2CPP_REGISTER_METHOD(0x031B8F70, void, OnStateChanged, app::XboxController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031B9170, bool, get_IsDPadUpPressed, app::XboxController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031B9180, bool, get_IsDPadDownPressed, app::XboxController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031B9190, bool, get_IsDPadLeftPressed, app::XboxController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031B91A0, bool, get_IsDPadRightPressed, app::XboxController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031B91B0, bool, get_IsAPressed, app::XboxController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031B91C0, bool, get_IsBPressed, app::XboxController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031B91D0, bool, get_IsXPressed, app::XboxController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031B91E0, bool, get_IsYPressed, app::XboxController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031B91F0, bool, get_IsBackPressed, app::XboxController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031B9200, bool, get_IsStartPressed, app::XboxController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031B9210, bool, get_IsLeftShoulderPressed, app::XboxController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031B9220, bool, get_IsRightShoulderPressed, app::XboxController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031B9230, bool, get_IsLeftStickPressed, app::XboxController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031B9240, bool, get_IsRightStickPressed, app::XboxController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031B9250, int32_t, get_LeftTrigger, app::XboxController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031B9260, int32_t, get_RightTrigger, app::XboxController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031B9270, int32_t, get_LeftThumbStickX, app::XboxController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031B9280, int32_t, get_LeftThumbStickY, app::XboxController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031B9290, int32_t, get_RightThumbStickX, app::XboxController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031B92A0, int32_t, get_RightThumbStickY, app::XboxController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsConnected, app::XboxController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C6650, void, set_IsConnected, app::XboxController* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x031B92B0, void, StartPolling, )
    IL2CPP_REGISTER_METHOD(0x031B9670, void, StopPolling, )
    IL2CPP_REGISTER_METHOD(0x031B9740, void, PollerLoop, )
    IL2CPP_REGISTER_METHOD(0x031B9B30, void, UpdateState, app::XboxController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031B9D20, void, Vibrate_1, app::XboxController* this_ptr, double left_motor, double right_motor)
    IL2CPP_REGISTER_METHOD(0x031B9E00, void, Vibrate_2, app::XboxController* this_ptr, double left_motor, double right_motor, app::TimeSpan length)
    IL2CPP_REGISTER_METHOD(0x031BA030, void, Vibrate_3, app::XboxController* this_ptr, app::XInputVibration strength, app::TimeSpan length)
    IL2CPP_REGISTER_METHOD(0x031BA140, app::String*, ToString, app::XboxController* this_ptr)
} // namespace app::classes::J2i::Net::XInputWrapper::XboxController
