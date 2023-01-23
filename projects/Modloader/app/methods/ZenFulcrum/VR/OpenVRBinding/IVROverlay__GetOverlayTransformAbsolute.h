#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IVROverlay_GetOverlayTransformAbsolute.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/EVROverlayError__Enum.h>
#include <Modloader/app/structs/ETrackingUniverseOrigin__Enum.h>
#include <Modloader/app/structs/HmdMatrix34_t.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTransformAbsolute {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_GetOverlayTransformAbsolute * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CE61E0, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_GetOverlayTransformAbsolute * this_ptr, uint64_t ul_overlay_handle, app::ETrackingUniverseOrigin__Enum* pe_tracking_origin, app::HmdMatrix34_t* pmat_tracking_origin_to_overlay_transform))
    IL2CPP_REGISTER_METHOD(0x02D7CAC0, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_GetOverlayTransformAbsolute * this_ptr, uint64_t ul_overlay_handle, app::ETrackingUniverseOrigin__Enum* pe_tracking_origin, app::HmdMatrix34_t* pmat_tracking_origin_to_overlay_transform, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F530B0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetOverlayTransformAbsolute * this_ptr, app::ETrackingUniverseOrigin__Enum* pe_tracking_origin, app::HmdMatrix34_t* pmat_tracking_origin_to_overlay_transform, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTransformAbsolute
