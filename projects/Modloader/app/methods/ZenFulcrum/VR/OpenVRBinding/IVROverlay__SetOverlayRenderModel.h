#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IVROverlay_SetOverlayRenderModel.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVROverlayError__Enum.h>
#include <Modloader/app/structs/HmdColor_t.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayRenderModel {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_SetOverlayRenderModel * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CE61E0, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_SetOverlayRenderModel * this_ptr, uint64_t ul_overlay_handle, app::String* pch_render_model, app::HmdColor_t* p_color))
    IL2CPP_REGISTER_METHOD(0x02D80AA0, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_SetOverlayRenderModel * this_ptr, uint64_t ul_overlay_handle, app::String* pch_render_model, app::HmdColor_t* p_color, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_SetOverlayRenderModel * this_ptr, app::HmdColor_t* p_color, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayRenderModel
