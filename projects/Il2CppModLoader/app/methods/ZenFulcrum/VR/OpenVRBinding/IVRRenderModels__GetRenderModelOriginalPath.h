#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetRenderModelOriginalPath {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRRenderModels_GetRenderModelOriginalPath * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02CE41C0, uint32_t, Invoke, (app::IVRRenderModels_GetRenderModelOriginalPath * this_ptr, app::String * pch_render_model_name, app::StringBuilder * pch_original_path, uint32_t un_original_path_len, app::EVRRenderModelError__Enum * pe_error))
    IL2CPP_REGISTER_METHOD(0x02CE47E0, app::IAsyncResult *, BeginInvoke, (app::IVRRenderModels_GetRenderModelOriginalPath * this_ptr, app::String * pch_render_model_name, app::StringBuilder * pch_original_path, uint32_t un_original_path_len, app::EVRRenderModelError__Enum * pe_error, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, uint32_t, EndInvoke, (app::IVRRenderModels_GetRenderModelOriginalPath * this_ptr, app::EVRRenderModelError__Enum * pe_error, app::IAsyncResult * result))
}
