#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XblContextHandle.h>
#include <Modloader/app/structs/XblContextHandle_1.h>

namespace app::classes::XGamingRuntime::XblContextHandle {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::XblContextHandle * this_ptr, app::XblContextHandle_1 interop_handle))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::XblContextHandle_1, get_InteropHandle, (app::XblContextHandle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_InteropHandle, (app::XblContextHandle * this_ptr, app::XblContextHandle_1 value))
} // namespace app::classes::XGamingRuntime::XblContextHandle
