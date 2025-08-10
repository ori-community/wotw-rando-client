#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XGameSaveUpdateHandle.h>
#include <Modloader/app/structs/XGameSaveUpdateHandle_1.h>

namespace app::classes::XGamingRuntime::XGameSaveUpdateHandle {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::XGameSaveUpdateHandle* this_ptr, app::XGameSaveUpdateHandle_1 interop_handle)
    IL2CPP_REGISTER_METHOD(
        0x030BB350,
        int32_t,
        WrapInteropHandleAndReturnHResult,
        int32_t hresult,
        app::XGameSaveUpdateHandle_1 interop_handle,
        app::XGameSaveUpdateHandle** user_handle
    )
    IL2CPP_REGISTER_METHOD(0x002FA280, app::XGameSaveUpdateHandle_1, get_InteropHandle, app::XGameSaveUpdateHandle* this_ptr)
} // namespace app::classes::XGamingRuntime::XGameSaveUpdateHandle
