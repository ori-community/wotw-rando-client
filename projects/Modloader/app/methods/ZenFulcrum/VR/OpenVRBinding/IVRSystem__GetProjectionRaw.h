#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVREye__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRSystem_GetProjectionRaw.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetProjectionRaw {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRSystem_GetProjectionRaw* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02CEDA90,
        void,
        Invoke,
        app::IVRSystem_GetProjectionRaw* this_ptr,
        app::EVREye__Enum e_eye,
        float* pf_left,
        float* pf_right,
        float* pf_top,
        float* pf_bottom
    )
    IL2CPP_REGISTER_METHOD(
        0x02CEDF20,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRSystem_GetProjectionRaw* this_ptr,
        app::EVREye__Enum e_eye,
        float* pf_left,
        float* pf_right,
        float* pf_top,
        float* pf_bottom,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x012DE400,
        void,
        EndInvoke,
        app::IVRSystem_GetProjectionRaw* this_ptr,
        float* pf_left,
        float* pf_right,
        float* pf_top,
        float* pf_bottom,
        app::IAsyncResult* result
    )
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetProjectionRaw
