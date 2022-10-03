#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayWidthInMeters {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_GetOverlayWidthInMeters * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02188B40, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_GetOverlayWidthInMeters * this_ptr, uint64_t ul_overlay_handle, float* pf_width_in_meters))
    IL2CPP_REGISTER_METHOD(0x02D7D3B0, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_GetOverlayWidthInMeters * this_ptr, uint64_t ul_overlay_handle, float* pf_width_in_meters, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetOverlayWidthInMeters * this_ptr, float* pf_width_in_meters, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayWidthInMeters
