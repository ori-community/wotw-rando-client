#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CVRSystem.h>
#include <Modloader/app/structs/DistortionCoordinates_t.h>
#include <Modloader/app/structs/EDeviceActivityLevel__Enum.h>
#include <Modloader/app/structs/EHiddenAreaMeshType__Enum.h>
#include <Modloader/app/structs/ETextureType__Enum.h>
#include <Modloader/app/structs/ETrackedControllerRole__Enum.h>
#include <Modloader/app/structs/ETrackedDeviceClass__Enum.h>
#include <Modloader/app/structs/ETrackedDeviceProperty__Enum.h>
#include <Modloader/app/structs/ETrackedPropertyError__Enum.h>
#include <Modloader/app/structs/ETrackingUniverseOrigin__Enum.h>
#include <Modloader/app/structs/EVRButtonId__Enum.h>
#include <Modloader/app/structs/EVRControllerAxisType__Enum.h>
#include <Modloader/app/structs/EVREventType__Enum.h>
#include <Modloader/app/structs/EVREye__Enum.h>
#include <Modloader/app/structs/EVRFirmwareError__Enum.h>
#include <Modloader/app/structs/HiddenAreaMesh_t.h>
#include <Modloader/app/structs/HmdMatrix34_t.h>
#include <Modloader/app/structs/HmdMatrix44_t.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/TrackedDevicePose_t.h>
#include <Modloader/app/structs/TrackedDevicePose_t__Array.h>
#include <Modloader/app/structs/UInt32__Array.h>
#include <Modloader/app/structs/VRControllerState_t.h>
#include <Modloader/app/structs/VREvent_t.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRSystem {
    IL2CPP_REGISTER_METHOD(0x0167BAF0, void, ctor, app::CVRSystem* this_ptr, void* p_interface)
    IL2CPP_REGISTER_METHOD(0x0167BCA0, void, GetRecommendedRenderTargetSize, app::CVRSystem* this_ptr, uint32_t* pn_width, uint32_t* pn_height)
    IL2CPP_REGISTER_METHOD(
        0x0167BCD0,
        app::HmdMatrix44_t,
        GetProjectionMatrix,
        app::CVRSystem* this_ptr,
        app::EVREye__Enum e_eye,
        float f_near_z,
        float f_far_z
    )
    IL2CPP_REGISTER_METHOD(
        0x0167BD40,
        void,
        GetProjectionRaw,
        app::CVRSystem* this_ptr,
        app::EVREye__Enum e_eye,
        float* pf_left,
        float* pf_right,
        float* pf_top,
        float* pf_bottom
    )
    IL2CPP_REGISTER_METHOD(
        0x0167BD80,
        bool,
        ComputeDistortion,
        app::CVRSystem* this_ptr,
        app::EVREye__Enum e_eye,
        float f_u,
        float f_v,
        app::DistortionCoordinates_t* p_distortion_coordinates
    )
    IL2CPP_REGISTER_METHOD(0x0167BDB0, app::HmdMatrix34_t, GetEyeToHeadTransform, app::CVRSystem* this_ptr, app::EVREye__Enum e_eye)
    IL2CPP_REGISTER_METHOD(0x0167BE00, bool, GetTimeSinceLastVsync, app::CVRSystem* this_ptr, float* pf_seconds_since_last_vsync, uint64_t* pul_frame_counter)
    IL2CPP_REGISTER_METHOD(0x0167BE30, int32_t, GetD3D9AdapterIndex, app::CVRSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0167BE50, void, GetDXGIOutputInfo, app::CVRSystem* this_ptr, int32_t* pn_adapter_index)
    IL2CPP_REGISTER_METHOD(
        0x0167BE80,
        void,
        GetOutputDevice,
        app::CVRSystem* this_ptr,
        uint64_t* pn_device,
        app::ETextureType__Enum texture_type,
        void* p_instance
    )
    IL2CPP_REGISTER_METHOD(0x0167BEB0, bool, IsDisplayOnDesktop, app::CVRSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0167BED0, bool, SetDisplayVisibility, app::CVRSystem* this_ptr, bool b_is_visible_on_desktop)
    IL2CPP_REGISTER_METHOD(
        0x0167BEF0,
        void,
        GetDeviceToAbsoluteTrackingPose,
        app::CVRSystem* this_ptr,
        app::ETrackingUniverseOrigin__Enum e_origin,
        float f_predicted_seconds_to_photons_from_now,
        app::TrackedDevicePose_t__Array* p_tracked_device_pose_array
    )
    IL2CPP_REGISTER_METHOD(0x00F846A0, void, ResetSeatedZeroPose, app::CVRSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0167BF30, app::HmdMatrix34_t, GetSeatedZeroPoseToStandingAbsoluteTrackingPose, app::CVRSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0167BF80, app::HmdMatrix34_t, GetRawZeroPoseToStandingAbsoluteTrackingPose, app::CVRSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0167BFD0,
        uint32_t,
        GetSortedTrackedDeviceIndicesOfClass,
        app::CVRSystem* this_ptr,
        app::ETrackedDeviceClass__Enum e_tracked_device_class,
        app::UInt32__Array* pun_tracked_device_index_array,
        uint32_t un_relative_to_tracked_device_index
    )
    IL2CPP_REGISTER_METHOD(0x0167C010, app::EDeviceActivityLevel__Enum, GetTrackedDeviceActivityLevel, app::CVRSystem* this_ptr, uint32_t un_device_id)
    IL2CPP_REGISTER_METHOD(
        0x0167C040,
        void,
        ApplyTransform,
        app::CVRSystem* this_ptr,
        app::TrackedDevicePose_t* p_output_pose,
        app::TrackedDevicePose_t* p_tracked_device_pose,
        app::HmdMatrix34_t* p_transform
    )
    IL2CPP_REGISTER_METHOD(
        0x0167C070,
        uint32_t,
        GetTrackedDeviceIndexForControllerRole,
        app::CVRSystem* this_ptr,
        app::ETrackedControllerRole__Enum un_device_type
    )
    IL2CPP_REGISTER_METHOD(
        0x0167C0A0,
        app::ETrackedControllerRole__Enum,
        GetControllerRoleForTrackedDeviceIndex,
        app::CVRSystem* this_ptr,
        uint32_t un_device_index
    )
    IL2CPP_REGISTER_METHOD(0x0167C0D0, app::ETrackedDeviceClass__Enum, GetTrackedDeviceClass, app::CVRSystem* this_ptr, uint32_t un_device_index)
    IL2CPP_REGISTER_METHOD(0x0167C100, bool, IsTrackedDeviceConnected, app::CVRSystem* this_ptr, uint32_t un_device_index)
    IL2CPP_REGISTER_METHOD(
        0x0167C130,
        bool,
        GetBoolTrackedDeviceProperty,
        app::CVRSystem* this_ptr,
        uint32_t un_device_index,
        app::ETrackedDeviceProperty__Enum prop,
        app::ETrackedPropertyError__Enum* p_error
    )
    IL2CPP_REGISTER_METHOD(
        0x0167C160,
        float,
        GetFloatTrackedDeviceProperty,
        app::CVRSystem* this_ptr,
        uint32_t un_device_index,
        app::ETrackedDeviceProperty__Enum prop,
        app::ETrackedPropertyError__Enum* p_error
    )
    IL2CPP_REGISTER_METHOD(
        0x0167C190,
        int32_t,
        GetInt32TrackedDeviceProperty,
        app::CVRSystem* this_ptr,
        uint32_t un_device_index,
        app::ETrackedDeviceProperty__Enum prop,
        app::ETrackedPropertyError__Enum* p_error
    )
    IL2CPP_REGISTER_METHOD(
        0x0167C1C0,
        uint64_t,
        GetUint64TrackedDeviceProperty,
        app::CVRSystem* this_ptr,
        uint32_t un_device_index,
        app::ETrackedDeviceProperty__Enum prop,
        app::ETrackedPropertyError__Enum* p_error
    )
    IL2CPP_REGISTER_METHOD(
        0x0167C1F0,
        app::HmdMatrix34_t,
        GetMatrix34TrackedDeviceProperty,
        app::CVRSystem* this_ptr,
        uint32_t un_device_index,
        app::ETrackedDeviceProperty__Enum prop,
        app::ETrackedPropertyError__Enum* p_error
    )
    IL2CPP_REGISTER_METHOD(
        0x0167C250,
        uint32_t,
        GetStringTrackedDeviceProperty,
        app::CVRSystem* this_ptr,
        uint32_t un_device_index,
        app::ETrackedDeviceProperty__Enum prop,
        app::StringBuilder* pch_value,
        uint32_t un_buffer_size,
        app::ETrackedPropertyError__Enum* p_error
    )
    IL2CPP_REGISTER_METHOD(0x0167C280, app::String*, GetPropErrorNameFromEnum, app::CVRSystem* this_ptr, app::ETrackedPropertyError__Enum error)
    IL2CPP_REGISTER_METHOD(0x0167C370, bool, PollNextEvent, app::CVRSystem* this_ptr, app::VREvent_t* p_event, uint32_t uncb_v_r_event)
    IL2CPP_REGISTER_METHOD(
        0x0167C600,
        bool,
        PollNextEventWithPose,
        app::CVRSystem* this_ptr,
        app::ETrackingUniverseOrigin__Enum e_origin,
        app::VREvent_t* p_event,
        uint32_t uncb_v_r_event,
        app::TrackedDevicePose_t* p_tracked_device_pose
    )
    IL2CPP_REGISTER_METHOD(0x0167C630, app::String*, GetEventTypeNameFromEnum, app::CVRSystem* this_ptr, app::EVREventType__Enum e_type)
    IL2CPP_REGISTER_METHOD(
        0x0167C720,
        app::HiddenAreaMesh_t,
        GetHiddenAreaMesh,
        app::CVRSystem* this_ptr,
        app::EVREye__Enum e_eye,
        app::EHiddenAreaMeshType__Enum type
    )
    IL2CPP_REGISTER_METHOD(
        0x0167C760,
        bool,
        GetControllerState,
        app::CVRSystem* this_ptr,
        uint32_t un_controller_device_index,
        app::VRControllerState_t* p_controller_state,
        uint32_t un_controller_state_size
    )
    IL2CPP_REGISTER_METHOD(
        0x0167CB40,
        bool,
        GetControllerStateWithPose,
        app::CVRSystem* this_ptr,
        app::ETrackingUniverseOrigin__Enum e_origin,
        uint32_t un_controller_device_index,
        app::VRControllerState_t* p_controller_state,
        uint32_t un_controller_state_size,
        app::TrackedDevicePose_t* p_tracked_device_pose
    )
    IL2CPP_REGISTER_METHOD(
        0x0167CF50,
        void,
        TriggerHapticPulse,
        app::CVRSystem* this_ptr,
        uint32_t un_controller_device_index,
        uint32_t un_axis_id,
        char16_t us_duration_micro_sec
    )
    IL2CPP_REGISTER_METHOD(0x0167CF80, app::String*, GetButtonIdNameFromEnum, app::CVRSystem* this_ptr, app::EVRButtonId__Enum e_button_id)
    IL2CPP_REGISTER_METHOD(0x0167D070, app::String*, GetControllerAxisTypeNameFromEnum, app::CVRSystem* this_ptr, app::EVRControllerAxisType__Enum e_axis_type)
    IL2CPP_REGISTER_METHOD(0x0167D160, bool, CaptureInputFocus, app::CVRSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0167D190, void, ReleaseInputFocus, app::CVRSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0167D1C0, bool, IsInputFocusCapturedByAnotherProcess, app::CVRSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0167D1F0,
        uint32_t,
        DriverDebugRequest,
        app::CVRSystem* this_ptr,
        uint32_t un_device_index,
        app::String* pch_request,
        app::String* pch_response_buffer,
        uint32_t un_response_buffer_size
    )
    IL2CPP_REGISTER_METHOD(0x0167D220, app::EVRFirmwareError__Enum, PerformFirmwareUpdate, app::CVRSystem* this_ptr, uint32_t un_device_index)
    IL2CPP_REGISTER_METHOD(0x0167D250, void, AcknowledgeQuit_Exiting, app::CVRSystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0167D280, void, AcknowledgeQuit_UserPrompt, app::CVRSystem* this_ptr)
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRSystem
