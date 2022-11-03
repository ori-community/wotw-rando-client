#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetComponentRenderModelName {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRRenderModels_GetComponentRenderModelName * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CE3470, uint32_t, Invoke, (app::IVRRenderModels_GetComponentRenderModelName * this_ptr, app::String* pch_render_model_name, app::String* pch_component_name, app::StringBuilder* pch_component_render_model_name, uint32_t un_component_render_model_name_len))
    IL2CPP_REGISTER_METHOD(0x02CE3A80, app::IAsyncResult*, BeginInvoke, (app::IVRRenderModels_GetComponentRenderModelName * this_ptr, app::String* pch_render_model_name, app::String* pch_component_name, app::StringBuilder* pch_component_render_model_name, uint32_t un_component_render_model_name_len, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (app::IVRRenderModels_GetComponentRenderModelName * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetComponentRenderModelName
