#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRExtendedDisplay_GetDXGIOutputInfo.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRExtendedDisplay__GetDXGIOutputInfo {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRExtendedDisplay_GetDXGIOutputInfo* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x012E7480,
        void,
        Invoke,
        app::IVRExtendedDisplay_GetDXGIOutputInfo* this_ptr,
        int32_t* pn_adapter_index,
        int32_t* pn_adapter_output_index
    )
    IL2CPP_REGISTER_METHOD(
        0x02D78250,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRExtendedDisplay_GetDXGIOutputInfo* this_ptr,
        int32_t* pn_adapter_index,
        int32_t* pn_adapter_output_index,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x012E78E0,
        void,
        EndInvoke,
        app::IVRExtendedDisplay_GetDXGIOutputInfo* this_ptr,
        int32_t* pn_adapter_index,
        int32_t* pn_adapter_output_index,
        app::IAsyncResult* result
    )
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRExtendedDisplay__GetDXGIOutputInfo
