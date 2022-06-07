#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayRaw {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_SetOverlayRaw * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02D80500, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_SetOverlayRaw * this_ptr, uint64_t ul_overlay_handle, void * pv_buffer, uint32_t un_width, uint32_t un_height, uint32_t un_depth))
    IL2CPP_REGISTER_METHOD(0x02D80980, app::IAsyncResult *, BeginInvoke, (app::IVROverlay_SetOverlayRaw * this_ptr, uint64_t ul_overlay_handle, void * pv_buffer, uint32_t un_width, uint32_t un_height, uint32_t un_depth, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_SetOverlayRaw * this_ptr, app::IAsyncResult * result))
}
