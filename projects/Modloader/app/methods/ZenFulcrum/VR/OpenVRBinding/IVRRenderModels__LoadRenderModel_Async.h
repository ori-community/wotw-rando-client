#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__LoadRenderModel_Async {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRRenderModels_LoadRenderModel_Async * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02AD6B00, app::EVRRenderModelError__Enum, Invoke, (app::IVRRenderModels_LoadRenderModel_Async * this_ptr, app::String* pch_render_model_name, app::void** pp_render_model))
    IL2CPP_REGISTER_METHOD(0x02CE4A90, app::IAsyncResult*, BeginInvoke, (app::IVRRenderModels_LoadRenderModel_Async * this_ptr, app::String* pch_render_model_name, app::void** pp_render_model, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, app::EVRRenderModelError__Enum, EndInvoke, (app::IVRRenderModels_LoadRenderModel_Async * this_ptr, app::void** pp_render_model, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__LoadRenderModel_Async
