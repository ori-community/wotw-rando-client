#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XGameSaveContainerHandle.h>
#include <Modloader/app/structs/XGameSaveContainerHandle_1.h>

namespace app::classes::XGamingRuntime::XGameSaveContainerHandle {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::XGameSaveContainerHandle* this_ptr, app::XGameSaveContainerHandle_1 interop_handle)
    IL2CPP_REGISTER_METHOD(
        0x030BAE10,
        int32_t,
        WrapInteropHandleAndReturnHResult,
        int32_t hresult,
        app::XGameSaveContainerHandle_1 interop_handle,
        app::XGameSaveContainerHandle** user_handle
    )
    IL2CPP_REGISTER_METHOD(0x002FA280, app::XGameSaveContainerHandle_1, get_InteropHandle, app::XGameSaveContainerHandle* this_ptr)
} // namespace app::classes::XGamingRuntime::XGameSaveContainerHandle
