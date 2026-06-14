#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/RunActionAndWait.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::RunActionAndWait {
    IL2CPP_REGISTER_METHOD(0x013727E0, void, Awake, app::RunActionAndWait* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01372880, void, OnDestroy, app::RunActionAndWait* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01372920, void, Perform, app::RunActionAndWait* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01372960, void, FixedUpdate, app::RunActionAndWait* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0098F4A0, bool, get_IsSuspended, app::RunActionAndWait* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0098F4B0, void, set_IsSuspended, app::RunActionAndWait* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FD490, app::SuspendableMask__Enum, get_Mask, app::RunActionAndWait* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013729F0, void, set_Mask, app::RunActionAndWait* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x01372AA0, void, ctor, app::RunActionAndWait* this_ptr)
} // namespace app::classes::RunActionAndWait
