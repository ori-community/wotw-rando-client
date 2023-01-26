#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IVRSystem_PollNextEvent.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/VREvent_t.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__PollNextEvent {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSystem_PollNextEvent * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0167DDE0, bool, Invoke, (app::IVRSystem_PollNextEvent * this_ptr, app::VREvent_t* p_event, uint32_t uncb_v_r_event))
    IL2CPP_REGISTER_METHOD(0x02CEF610, app::IAsyncResult*, BeginInvoke, (app::IVRSystem_PollNextEvent * this_ptr, app::VREvent_t* p_event, uint32_t uncb_v_r_event, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (app::IVRSystem_PollNextEvent * this_ptr, app::VREvent_t* p_event, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__PollNextEvent
