#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__PollNextOverlayEvent {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_PollNextOverlayEvent * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01679E40, bool, Invoke, (app::IVROverlay_PollNextOverlayEvent * this_ptr, uint64_t ul_overlay_handle, app::VREvent_t* p_event, uint32_t uncb_v_r_event))
    IL2CPP_REGISTER_METHOD(0x02D7DE50, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_PollNextOverlayEvent * this_ptr, uint64_t ul_overlay_handle, app::VREvent_t* p_event, uint32_t uncb_v_r_event, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (app::IVROverlay_PollNextOverlayEvent * this_ptr, app::VREvent_t* p_event, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__PollNextOverlayEvent
