#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IVRSystem_PollNextEventWithPose.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ETrackingUniverseOrigin__Enum.h>
#include <Modloader/app/structs/VREvent_t.h>
#include <Modloader/app/structs/TrackedDevicePose_t.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__PollNextEventWithPose {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSystem_PollNextEventWithPose * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CEF6F0, bool, Invoke, (app::IVRSystem_PollNextEventWithPose * this_ptr, app::ETrackingUniverseOrigin__Enum e_origin, app::VREvent_t* p_event, uint32_t uncb_v_r_event, app::TrackedDevicePose_t* p_tracked_device_pose))
    IL2CPP_REGISTER_METHOD(0x02CEFB10, app::IAsyncResult*, BeginInvoke, (app::IVRSystem_PollNextEventWithPose * this_ptr, app::ETrackingUniverseOrigin__Enum e_origin, app::VREvent_t* p_event, uint32_t uncb_v_r_event, app::TrackedDevicePose_t* p_tracked_device_pose, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x0167DD00, bool, EndInvoke, (app::IVRSystem_PollNextEventWithPose * this_ptr, app::VREvent_t* p_event, app::TrackedDevicePose_t* p_tracked_device_pose, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__PollNextEventWithPose
