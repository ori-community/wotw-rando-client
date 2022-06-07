#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::CVROverlay__PollNextOverlayEventPacked {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::CVROverlay_PollNextOverlayEventPacked * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01679E40, bool, Invoke, (app::CVROverlay_PollNextOverlayEventPacked * this_ptr, uint64_t ul_overlay_handle, app::VREvent_t_Packed * p_event, uint32_t uncb_v_r_event))
    IL2CPP_REGISTER_METHOD(0x0167A1E0, app::IAsyncResult *, BeginInvoke, (app::CVROverlay_PollNextOverlayEventPacked * this_ptr, uint64_t ul_overlay_handle, app::VREvent_t_Packed * p_event, uint32_t uncb_v_r_event, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (app::CVROverlay_PollNextOverlayEventPacked * this_ptr, app::VREvent_t_Packed * p_event, app::IAsyncResult * result))
}
