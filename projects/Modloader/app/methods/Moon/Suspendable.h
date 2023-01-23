#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Suspendable.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::Moon::Suspendable {
    IL2CPP_REGISTER_METHOD(0x031AC030, void, Awake, (app::Suspendable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031AC0D0, void, OnDestroy, (app::Suspendable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00654950, app::SuspendableMask__Enum, get_Mask, (app::Suspendable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031AC170, void, set_Mask, (app::Suspendable * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00444DD0, void, ctor, (app::Suspendable * this_ptr))
} // namespace app::classes::Moon::Suspendable
