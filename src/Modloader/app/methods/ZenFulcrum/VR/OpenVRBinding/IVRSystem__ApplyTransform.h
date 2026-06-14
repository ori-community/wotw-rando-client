#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/HmdMatrix34_t.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRSystem_ApplyTransform.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TrackedDevicePose_t.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__ApplyTransform {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRSystem_ApplyTransform* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x0143DA20,
        void,
        Invoke,
        app::IVRSystem_ApplyTransform* this_ptr,
        app::TrackedDevicePose_t* p_output_pose,
        app::TrackedDevicePose_t* p_tracked_device_pose,
        app::HmdMatrix34_t* p_transform
    )
    IL2CPP_REGISTER_METHOD(
        0x02CE9E60,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRSystem_ApplyTransform* this_ptr,
        app::TrackedDevicePose_t* p_output_pose,
        app::TrackedDevicePose_t* p_tracked_device_pose,
        app::HmdMatrix34_t* p_transform,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x02CE9F60,
        void,
        EndInvoke,
        app::IVRSystem_ApplyTransform* this_ptr,
        app::TrackedDevicePose_t* p_output_pose,
        app::TrackedDevicePose_t* p_tracked_device_pose,
        app::HmdMatrix34_t* p_transform,
        app::IAsyncResult* result
    )
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__ApplyTransform
