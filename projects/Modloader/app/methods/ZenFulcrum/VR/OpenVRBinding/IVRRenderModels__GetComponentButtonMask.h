#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetComponentButtonMask {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRRenderModels_GetComponentButtonMask * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01434D20, uint64_t, Invoke, (app::IVRRenderModels_GetComponentButtonMask * this_ptr, app::String* pch_render_model_name, app::String* pch_component_name))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::IVRRenderModels_GetComponentButtonMask * this_ptr, app::String* pch_render_model_name, app::String* pch_component_name, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F52480, uint64_t, EndInvoke, (app::IVRRenderModels_GetComponentButtonMask * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetComponentButtonMask
