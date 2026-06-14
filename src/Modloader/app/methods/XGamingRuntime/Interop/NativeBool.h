#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NativeBool__Boxed.h>

namespace app::classes::XGamingRuntime::Interop::NativeBool {
    IL2CPP_REGISTER_METHOD(0x00244800, void, ctor, app::NativeBool__Boxed* this_ptr, bool value)
}
