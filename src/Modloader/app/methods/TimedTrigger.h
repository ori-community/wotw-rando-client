#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/TimedTrigger.h>

namespace app::classes::TimedTrigger {
    IL2CPP_REGISTER_METHOD(0x010F3F90, bool, get_IsTriggered, app::TimedTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010F3FA0, void, OnEnable, app::TimedTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010F4150, void, OnDisable, app::TimedTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010F4300, void, Start, app::TimedTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010F4310, void, FixedUpdate, app::TimedTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010F4300, void, OnRestoreCheckpoint, app::TimedTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010F44F0, void, TriggerNow, app::TimedTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010F45D0, void, ResetTrigger, app::TimedTrigger* this_ptr, bool stop_timeline, bool reset_time)
    IL2CPP_REGISTER_METHOD(0x004FBAC0, bool, get_IsSuspended, app::TimedTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004FBAD0, void, set_IsSuspended, app::TimedTrigger* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x006410F0, app::SuspendableMask__Enum, get_Mask, app::TimedTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010F46B0, void, set_Mask, app::TimedTrigger* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x010F3F90, bool, Validate, app::TimedTrigger* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x010F4760, void, OnDrawGizmos, app::TimedTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010F48E0, void, ctor, app::TimedTrigger* this_ptr)
} // namespace app::classes::TimedTrigger
