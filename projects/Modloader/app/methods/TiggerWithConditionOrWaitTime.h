#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TiggerWithConditionOrWaitTime.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::TiggerWithConditionOrWaitTime {
    IL2CPP_REGISTER_METHOD(0x010ED520, void, Awake, (app::TiggerWithConditionOrWaitTime * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010ED5C0, void, OnDestroy, (app::TiggerWithConditionOrWaitTime * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010ED660, void, FixedUpdate, (app::TiggerWithConditionOrWaitTime * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0098F4A0, bool, get_IsSuspended, (app::TiggerWithConditionOrWaitTime * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0098F4B0, void, set_IsSuspended, (app::TiggerWithConditionOrWaitTime * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FD490, app::SuspendableMask__Enum, get_Mask, (app::TiggerWithConditionOrWaitTime * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010ED740, void, set_Mask, (app::TiggerWithConditionOrWaitTime * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x010ED7F0, void, ctor, (app::TiggerWithConditionOrWaitTime * this_ptr))
} // namespace app::classes::TiggerWithConditionOrWaitTime
