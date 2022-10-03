#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetComponentCount {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRRenderModels_GetComponentCount * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x020105B0, uint32_t, Invoke, (app::IVRRenderModels_GetComponentCount * this_ptr, app::String* pch_render_model_name))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::IVRRenderModels_GetComponentCount * this_ptr, app::String* pch_render_model_name, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (app::IVRRenderModels_GetComponentCount * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetComponentCount
