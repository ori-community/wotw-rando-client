#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IVRSystem_GetDeviceToAbsoluteTrackingPose.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/ETrackingUniverseOrigin__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TrackedDevicePose_t__Array.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetDeviceToAbsoluteTrackingPose {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSystem_GetDeviceToAbsoluteTrackingPose * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CEB0B0, void, Invoke, (app::IVRSystem_GetDeviceToAbsoluteTrackingPose * this_ptr, app::ETrackingUniverseOrigin__Enum e_origin, float f_predicted_seconds_to_photons_from_now, app::TrackedDevicePose_t__Array* p_tracked_device_pose_array, uint32_t un_tracked_device_pose_array_count))
    IL2CPP_REGISTER_METHOD(0x02CEB4B0, app::IAsyncResult*, BeginInvoke, (app::IVRSystem_GetDeviceToAbsoluteTrackingPose * this_ptr, app::ETrackingUniverseOrigin__Enum e_origin, float f_predicted_seconds_to_photons_from_now, app::TrackedDevicePose_t__Array* p_tracked_device_pose_array, uint32_t un_tracked_device_pose_array_count, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRSystem_GetDeviceToAbsoluteTrackingPose * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetDeviceToAbsoluteTrackingPose
