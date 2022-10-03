#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetRenderModelName {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRRenderModels_GetRenderModelName * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CE3D50, uint32_t, Invoke, (app::IVRRenderModels_GetRenderModelName * this_ptr, uint32_t un_render_model_index, app::StringBuilder* pch_render_model_name, uint32_t un_render_model_name_len))
    IL2CPP_REGISTER_METHOD(0x02CE40E0, app::IAsyncResult*, BeginInvoke, (app::IVRRenderModels_GetRenderModelName * this_ptr, uint32_t un_render_model_index, app::StringBuilder* pch_render_model_name, uint32_t un_render_model_name_len, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (app::IVRRenderModels_GetRenderModelName * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetRenderModelName
