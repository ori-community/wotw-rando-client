#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__CreateDashboardOverlay {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_CreateDashboardOverlay * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02D792C0, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_CreateDashboardOverlay * this_ptr, app::String * pch_overlay_key, app::String * pch_overlay_friendly_name, uint64_t * p_main_handle, uint64_t * p_thumbnail_handle))
    IL2CPP_REGISTER_METHOD(0x02D798F0, app::IAsyncResult *, BeginInvoke, (app::IVROverlay_CreateDashboardOverlay * this_ptr, app::String * pch_overlay_key, app::String * pch_overlay_friendly_name, uint64_t * p_main_handle, uint64_t * p_thumbnail_handle, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F530B0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_CreateDashboardOverlay * this_ptr, uint64_t * p_main_handle, uint64_t * p_thumbnail_handle, app::IAsyncResult * result))
}
