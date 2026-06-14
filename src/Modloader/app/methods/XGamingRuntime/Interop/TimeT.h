#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/TimeT__Boxed.h>

namespace app::classes::XGamingRuntime::Interop::TimeT {
    IL2CPP_REGISTER_METHOD(0x00244840, app::DateTime, get_DateTime, app::TimeT__Boxed* this_ptr)
}
