#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ActionWithDuration.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::ActionWithDuration {
    IL2CPP_REGISTER_METHOD(0x004C6DA0, void, Awake, (app::ActionWithDuration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C6E40, void, OnDestroy, (app::ActionWithDuration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, (app::ActionWithDuration * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsSuspended, (app::ActionWithDuration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsSuspended, (app::ActionWithDuration * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FC830, app::SuspendableMask__Enum, get_Mask, (app::ActionWithDuration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C6EE0, void, set_Mask, (app::ActionWithDuration * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x0043BB90, void, ctor, (app::ActionWithDuration * this_ptr))
} // namespace app::classes::ActionWithDuration
