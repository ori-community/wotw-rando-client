#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTransformOverlayRelative {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_GetOverlayTransformOverlayRelative * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CE61E0, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_GetOverlayTransformOverlayRelative * this_ptr, uint64_t ul_overlay_handle, uint64_t* ul_overlay_handle_parent, app::HmdMatrix34_t* pmat_parent_overlay_to_overlay_transform))
    IL2CPP_REGISTER_METHOD(0x02D7CBC0, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_GetOverlayTransformOverlayRelative * this_ptr, uint64_t ul_overlay_handle, uint64_t* ul_overlay_handle_parent, app::HmdMatrix34_t* pmat_parent_overlay_to_overlay_transform, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F530B0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_GetOverlayTransformOverlayRelative * this_ptr, uint64_t* ul_overlay_handle_parent, app::HmdMatrix34_t* pmat_parent_overlay_to_overlay_transform, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTransformOverlayRelative
