#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/CVRSystem_GetControllerStateWithPosePacked.h>
#include <Modloader/app/structs/ETrackingUniverseOrigin__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TrackedDevicePose_t.h>
#include <Modloader/app/structs/VRControllerState_t_Packed.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRSystem__GetControllerStateWithPosePacked {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::CVRSystem_GetControllerStateWithPosePacked* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x0167D740,
        bool,
        Invoke,
        app::CVRSystem_GetControllerStateWithPosePacked* this_ptr,
        app::ETrackingUniverseOrigin__Enum e_origin,
        uint32_t un_controller_device_index,
        app::VRControllerState_t_Packed* p_controller_state,
        uint32_t un_controller_state_size,
        app::TrackedDevicePose_t* p_tracked_device_pose
    )
    IL2CPP_REGISTER_METHOD(
        0x0167DBD0,
        app::IAsyncResult*,
        BeginInvoke,
        app::CVRSystem_GetControllerStateWithPosePacked* this_ptr,
        app::ETrackingUniverseOrigin__Enum e_origin,
        uint32_t un_controller_device_index,
        app::VRControllerState_t_Packed* p_controller_state,
        uint32_t un_controller_state_size,
        app::TrackedDevicePose_t* p_tracked_device_pose,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x0167DD00,
        bool,
        EndInvoke,
        app::CVRSystem_GetControllerStateWithPosePacked* this_ptr,
        app::VRControllerState_t_Packed* p_controller_state,
        app::TrackedDevicePose_t* p_tracked_device_pose,
        app::IAsyncResult* result
    )
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRSystem__GetControllerStateWithPosePacked
