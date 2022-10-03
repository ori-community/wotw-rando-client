#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRSystem__PollNextEventPacked {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::CVRSystem_PollNextEventPacked * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0167DDE0, bool, Invoke, (app::CVRSystem_PollNextEventPacked * this_ptr, app::VREvent_t_Packed* p_event, uint32_t uncb_v_r_event))
    IL2CPP_REGISTER_METHOD(0x0167E150, app::IAsyncResult*, BeginInvoke, (app::CVRSystem_PollNextEventPacked * this_ptr, app::VREvent_t_Packed* p_event, uint32_t uncb_v_r_event, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (app::CVRSystem_PollNextEventPacked * this_ptr, app::VREvent_t_Packed* p_event, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRSystem__PollNextEventPacked
