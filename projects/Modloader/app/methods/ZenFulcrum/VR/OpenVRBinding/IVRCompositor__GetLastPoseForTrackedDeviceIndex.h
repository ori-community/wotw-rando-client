#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IVRCompositor_GetLastPoseForTrackedDeviceIndex.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/EVRCompositorError__Enum.h>
#include <Modloader/app/structs/TrackedDevicePose_t.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetLastPoseForTrackedDeviceIndex {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRCompositor_GetLastPoseForTrackedDeviceIndex * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01C7A6D0, app::EVRCompositorError__Enum, Invoke, (app::IVRCompositor_GetLastPoseForTrackedDeviceIndex * this_ptr, uint32_t un_device_index, app::TrackedDevicePose_t* p_output_pose, app::TrackedDevicePose_t* p_output_game_pose))
    IL2CPP_REGISTER_METHOD(0x02F42260, app::IAsyncResult*, BeginInvoke, (app::IVRCompositor_GetLastPoseForTrackedDeviceIndex * this_ptr, uint32_t un_device_index, app::TrackedDevicePose_t* p_output_pose, app::TrackedDevicePose_t* p_output_game_pose, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F530B0, app::EVRCompositorError__Enum, EndInvoke, (app::IVRCompositor_GetLastPoseForTrackedDeviceIndex * this_ptr, app::TrackedDevicePose_t* p_output_pose, app::TrackedDevicePose_t* p_output_game_pose, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetLastPoseForTrackedDeviceIndex
