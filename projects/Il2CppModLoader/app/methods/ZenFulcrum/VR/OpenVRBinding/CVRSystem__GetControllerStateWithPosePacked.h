#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::CVRSystem__GetControllerStateWithPosePacked {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::CVRSystem_GetControllerStateWithPosePacked * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x0167D740, bool, Invoke, (app::CVRSystem_GetControllerStateWithPosePacked * this_ptr, app::ETrackingUniverseOrigin__Enum e_origin, uint32_t un_controller_device_index, app::VRControllerState_t_Packed * p_controller_state, uint32_t un_controller_state_size, app::TrackedDevicePose_t * p_tracked_device_pose))
    IL2CPP_REGISTER_METHOD(0x0167DBD0, app::IAsyncResult *, BeginInvoke, (app::CVRSystem_GetControllerStateWithPosePacked * this_ptr, app::ETrackingUniverseOrigin__Enum e_origin, uint32_t un_controller_device_index, app::VRControllerState_t_Packed * p_controller_state, uint32_t un_controller_state_size, app::TrackedDevicePose_t * p_tracked_device_pose, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x0167DD00, bool, EndInvoke, (app::CVRSystem_GetControllerStateWithPosePacked * this_ptr, app::VRControllerState_t_Packed * p_controller_state, app::TrackedDevicePose_t * p_tracked_device_pose, app::IAsyncResult * result))
}
