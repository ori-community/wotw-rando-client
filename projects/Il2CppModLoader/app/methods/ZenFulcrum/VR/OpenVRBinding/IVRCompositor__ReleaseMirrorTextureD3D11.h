#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__ReleaseMirrorTextureD3D11 {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRCompositor_ReleaseMirrorTextureD3D11 * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x006FCF70, void, Invoke, (app::IVRCompositor_ReleaseMirrorTextureD3D11 * this_ptr, void* p_d3_d11_shader_resource_view))
    IL2CPP_REGISTER_METHOD(0x02F42C30, app::IAsyncResult*, BeginInvoke, (app::IVRCompositor_ReleaseMirrorTextureD3D11 * this_ptr, void* p_d3_d11_shader_resource_view, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRCompositor_ReleaseMirrorTextureD3D11 * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__ReleaseMirrorTextureD3D11
