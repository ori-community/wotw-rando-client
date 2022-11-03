#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayFlag {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_SetOverlayFlag * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02D7F710, app::EVROverlayError__Enum, Invoke, (app::IVROverlay_SetOverlayFlag * this_ptr, uint64_t ul_overlay_handle, app::VROverlayFlags__Enum e_overlay_flag, bool b_enabled))
    IL2CPP_REGISTER_METHOD(0x02D7FAB0, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_SetOverlayFlag * this_ptr, uint64_t ul_overlay_handle, app::VROverlayFlags__Enum e_overlay_flag, bool b_enabled, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVROverlayError__Enum, EndInvoke, (app::IVROverlay_SetOverlayFlag * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayFlag
