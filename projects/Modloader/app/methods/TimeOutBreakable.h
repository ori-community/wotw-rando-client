#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TimeOutBreakable.h>

namespace app::classes::TimeOutBreakable {
    IL2CPP_REGISTER_METHOD(0x010F03C0, void, OnEnable, (app::TimeOutBreakable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F05E0, void, OnVitalsDeath, (app::TimeOutBreakable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F06E0, void, ctor, (app::TimeOutBreakable * this_ptr))
} // namespace app::classes::TimeOutBreakable
