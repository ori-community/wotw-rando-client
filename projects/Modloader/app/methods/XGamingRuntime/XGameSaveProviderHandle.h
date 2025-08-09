#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XGameSaveProviderHandle.h>
#include <Modloader/app/structs/XGameSaveProviderHandle_1.h>

namespace app::classes::XGamingRuntime::XGameSaveProviderHandle {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::XGameSaveProviderHandle* this_ptr, app::XGameSaveProviderHandle_1 interop_handle)
    IL2CPP_REGISTER_METHOD(
        0x030BB050,
        int32_t,
        WrapInteropHandleAndReturnHResult,
        int32_t hresult,
        app::XGameSaveProviderHandle_1 interop_handle,
        app::XGameSaveProviderHandle** user_handle
    )
    IL2CPP_REGISTER_METHOD(0x002FA280, app::XGameSaveProviderHandle_1, get_InteropHandle, app::XGameSaveProviderHandle* this_ptr)
} // namespace app::classes::XGamingRuntime::XGameSaveProviderHandle
