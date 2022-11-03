#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayTransformAbsolute {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_SetOverlayTransformAbsolute * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02009B10, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_SetOverlayTransformAbsolute * this_ptr, uint64_t ul_overlay_handle, app::ETrackingUniverseOrigin__Enum e_tracking_origin, app::HmdMatrix34_t* pmat_tracking_origin_to_overlay_transform))
    IL2CPP_REGISTER_METHOD(0x02D810A0, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_SetOverlayTransformAbsolute * this_ptr, uint64_t ul_overlay_handle, app::ETrackingUniverseOrigin__Enum e_tracking_origin, app::HmdMatrix34_t* pmat_tracking_origin_to_overlay_transform, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_SetOverlayTransformAbsolute * this_ptr, app::HmdMatrix34_t* pmat_tracking_origin_to_overlay_transform, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayTransformAbsolute
