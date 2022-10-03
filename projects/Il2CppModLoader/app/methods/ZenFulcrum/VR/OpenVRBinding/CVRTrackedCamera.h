#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRTrackedCamera {
    IL2CPP_REGISTER_METHOD(0x0167E230, void, ctor, (app::CVRTrackedCamera * this_ptr, void* p_interface))
    IL2CPP_REGISTER_METHOD(0x0167E370, app::String*, GetCameraErrorNameFromEnum, (app::CVRTrackedCamera * this_ptr, app::EVRTrackedCameraError__Enum e_camera_error))
    IL2CPP_REGISTER_METHOD(0x0167E450, app::EVRTrackedCameraError__Enum, HasCamera, (app::CVRTrackedCamera * this_ptr, uint32_t n_device_index, bool* p_has_camera))
    IL2CPP_REGISTER_METHOD(0x0167E480, app::EVRTrackedCameraError__Enum, GetCameraFrameSize, (app::CVRTrackedCamera * this_ptr, uint32_t n_device_index, app::EVRTrackedCameraFrameType__Enum e_frame_type, uint32_t* pn_width, uint32_t* pn_height, uint32_t* pn_frame_buffer_size))
    IL2CPP_REGISTER_METHOD(0x0167E4C0, app::EVRTrackedCameraError__Enum, GetCameraIntrinsics, (app::CVRTrackedCamera * this_ptr, uint32_t n_device_index, app::EVRTrackedCameraFrameType__Enum e_frame_type, app::HmdVector2_t* p_focal_length, app::HmdVector2_t* p_center))
    IL2CPP_REGISTER_METHOD(0x0167E4F0, app::EVRTrackedCameraError__Enum, GetCameraProjection, (app::CVRTrackedCamera * this_ptr, uint32_t n_device_index, app::EVRTrackedCameraFrameType__Enum e_frame_type, float fl_z_near, float fl_z_far, app::HmdMatrix44_t* p_projection))
    IL2CPP_REGISTER_METHOD(0x0167E520, app::EVRTrackedCameraError__Enum, AcquireVideoStreamingService, (app::CVRTrackedCamera * this_ptr, uint32_t n_device_index, uint64_t* p_handle))
    IL2CPP_REGISTER_METHOD(0x0167E550, app::EVRTrackedCameraError__Enum, ReleaseVideoStreamingService, (app::CVRTrackedCamera * this_ptr, uint64_t h_tracked_camera))
    IL2CPP_REGISTER_METHOD(0x0167E570, app::EVRTrackedCameraError__Enum, GetVideoStreamFrameBuffer, (app::CVRTrackedCamera * this_ptr, uint64_t h_tracked_camera, app::EVRTrackedCameraFrameType__Enum e_frame_type, void* p_frame_buffer, uint32_t n_frame_buffer_size, app::CameraVideoStreamFrameHeader_t* p_frame_header, uint32_t n_frame_header_size))
    IL2CPP_REGISTER_METHOD(0x0167E5A0, app::EVRTrackedCameraError__Enum, GetVideoStreamTextureSize, (app::CVRTrackedCamera * this_ptr, uint32_t n_device_index, app::EVRTrackedCameraFrameType__Enum e_frame_type, app::VRTextureBounds_t* p_texture_bounds, uint32_t* pn_width, uint32_t* pn_height))
    IL2CPP_REGISTER_METHOD(0x0167E5E0, app::EVRTrackedCameraError__Enum, GetVideoStreamTextureD3D11, (app::CVRTrackedCamera * this_ptr, uint64_t h_tracked_camera, app::EVRTrackedCameraFrameType__Enum e_frame_type, void* p_d3_d11_device_or_resource, app::void** pp_d3_d11_shader_resource_view, app::CameraVideoStreamFrameHeader_t* p_frame_header, uint32_t n_frame_header_size))
    IL2CPP_REGISTER_METHOD(0x0167E610, app::EVRTrackedCameraError__Enum, GetVideoStreamTextureGL, (app::CVRTrackedCamera * this_ptr, uint64_t h_tracked_camera, app::EVRTrackedCameraFrameType__Enum e_frame_type, uint32_t* pgl_texture_id, app::CameraVideoStreamFrameHeader_t* p_frame_header, uint32_t n_frame_header_size))
    IL2CPP_REGISTER_METHOD(0x0167E640, app::EVRTrackedCameraError__Enum, ReleaseVideoStreamTextureGL, (app::CVRTrackedCamera * this_ptr, uint64_t h_tracked_camera, uint32_t gl_texture_id))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRTrackedCamera
