#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UTF8StringPtr__Boxed.h>

namespace app::classes::XGamingRuntime::Interop::UTF8StringPtr {
    IL2CPP_REGISTER_METHOD(0x00244850, app::String*, GetString, (app::UTF8StringPtr__Boxed * this_ptr))
}
