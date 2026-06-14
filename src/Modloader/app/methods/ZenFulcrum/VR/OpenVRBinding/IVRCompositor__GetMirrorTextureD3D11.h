#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVRCompositorError__Enum.h>
#include <Modloader/app/structs/EVREye__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRCompositor_GetMirrorTextureD3D11.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/void.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetMirrorTextureD3D11 {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRCompositor_GetMirrorTextureD3D11* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x01C7A6D0,
        app::EVRCompositorError__Enum,
        Invoke,
        app::IVRCompositor_GetMirrorTextureD3D11* this_ptr,
        app::EVREye__Enum e_eye,
        void* p_d3_d11_device_or_resource,
        void** pp_d3_d11_shader_resource_view
    )
    IL2CPP_REGISTER_METHOD(
        0x02F42450,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRCompositor_GetMirrorTextureD3D11* this_ptr,
        app::EVREye__Enum e_eye,
        void* p_d3_d11_device_or_resource,
        void** pp_d3_d11_shader_resource_view,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00F51FA0,
        app::EVRCompositorError__Enum,
        EndInvoke,
        app::IVRCompositor_GetMirrorTextureD3D11* this_ptr,
        void** pp_d3_d11_shader_resource_view,
        app::IAsyncResult* result
    )
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetMirrorTextureD3D11
