#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WwiseEventSystem_EventState.h>
#include <Modloader/app/structs/WwiseEventSystem_EventStatus__Enum.h>

namespace app::classes::Moon::Wwise::WwiseEventSystem_EventState {
    IL2CPP_REGISTER_METHOD(0x01B67070, bool, get_IsDispatched, (app::WwiseEventSystem_EventState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB2DA0, bool, get_IsPlaying, (app::WwiseEventSystem_EventState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02713770, bool, get_IsForceStopped, (app::WwiseEventSystem_EventState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DE3650, bool, get_IsFinished, (app::WwiseEventSystem_EventState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005150C0, bool, get_IsIdle, (app::WwiseEventSystem_EventState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02713790, bool, get_IsPaused, (app::WwiseEventSystem_EventState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC780, void, Reset, (app::WwiseEventSystem_EventState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ApplyStatus, (app::WwiseEventSystem_EventState * this_ptr, app::WwiseEventSystem_EventStatus__Enum status))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WwiseEventSystem_EventState * this_ptr))
} // namespace app::classes::Moon::Wwise::WwiseEventSystem_EventState
