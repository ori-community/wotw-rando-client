#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayRenderModel.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/HmdColor_t.h>
#include <Modloader/app/structs/EVROverlayError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayRenderModel {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_GetOverlayRenderModel * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02D7ACF0, uint32_t, Invoke, (app::IVROverlay_GetOverlayRenderModel * this_ptr, uint64_t ul_overlay_handle, app::String* pch_value, uint32_t un_buffer_size, app::HmdColor_t* p_color, app::EVROverlayError__Enum* p_error))
    IL2CPP_REGISTER_METHOD(0x02D7BA90, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_GetOverlayRenderModel * this_ptr, uint64_t ul_overlay_handle, app::String* pch_value, uint32_t un_buffer_size, app::HmdColor_t* p_color, app::EVROverlayError__Enum* p_error, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F530B0, uint32_t, EndInvoke, (app::IVROverlay_GetOverlayRenderModel * this_ptr, app::HmdColor_t* p_color, app::EVROverlayError__Enum* p_error, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayRenderModel
