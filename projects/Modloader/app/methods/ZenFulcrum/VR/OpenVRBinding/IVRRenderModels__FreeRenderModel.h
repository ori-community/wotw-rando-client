#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__FreeRenderModel {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRRenderModels_FreeRenderModel * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x006FCF70, void, Invoke, (app::IVRRenderModels_FreeRenderModel * this_ptr, void* p_render_model))
    IL2CPP_REGISTER_METHOD(0x02CE2B30, app::IAsyncResult*, BeginInvoke, (app::IVRRenderModels_FreeRenderModel * this_ptr, void* p_render_model, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRRenderModels_FreeRenderModel * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__FreeRenderModel
