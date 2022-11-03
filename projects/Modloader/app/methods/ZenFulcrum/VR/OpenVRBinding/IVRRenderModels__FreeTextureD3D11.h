#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__FreeTextureD3D11 {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRRenderModels_FreeTextureD3D11 * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x006FCF70, void, Invoke, (app::IVRRenderModels_FreeTextureD3D11 * this_ptr, void* p_d3_d11_texture2_d))
    IL2CPP_REGISTER_METHOD(0x02CE2CB0, app::IAsyncResult*, BeginInvoke, (app::IVRRenderModels_FreeTextureD3D11 * this_ptr, void* p_d3_d11_texture2_d, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRRenderModels_FreeTextureD3D11 * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__FreeTextureD3D11
