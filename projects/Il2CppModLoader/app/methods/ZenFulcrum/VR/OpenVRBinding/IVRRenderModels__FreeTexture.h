#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__FreeTexture {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRRenderModels_FreeTexture * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x006FCF70, void, Invoke, (app::IVRRenderModels_FreeTexture * this_ptr, void* p_texture))
    IL2CPP_REGISTER_METHOD(0x02CE2BF0, app::IAsyncResult*, BeginInvoke, (app::IVRRenderModels_FreeTexture * this_ptr, void* p_texture, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRRenderModels_FreeTexture * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__FreeTexture
