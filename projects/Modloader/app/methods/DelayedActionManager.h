#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DelayedActionManager {
    IL2CPP_REGISTER_METHOD(0x00654950, app::SuspendableMask__Enum, get_Mask, (app::DelayedActionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00654960, void, set_Mask, (app::DelayedActionManager * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00446970, bool, get_IsSuspended, (app::DelayedActionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00446980, void, set_IsSuspended, (app::DelayedActionManager * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00B80700, void, Awake, (app::DelayedActionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B807A0, void, OnDestroy, (app::DelayedActionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B80840, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00B808C0, app::DelayedActionManager*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x00B80B10, void, FixedUpdate, (app::DelayedActionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444DD0, void, ctor, (app::DelayedActionManager * this_ptr))
} // namespace app::classes::DelayedActionManager
