#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetVideoStreamTextureD3D11 {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRTrackedCamera_GetVideoStreamTextureD3D11 * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00F53E00, app::EVRTrackedCameraError__Enum, Invoke, (app::IVRTrackedCamera_GetVideoStreamTextureD3D11 * this_ptr, uint64_t h_tracked_camera, app::EVRTrackedCameraFrameType__Enum e_frame_type, void* p_d3_d11_device_or_resource, app::void** pp_d3_d11_shader_resource_view, app::CameraVideoStreamFrameHeader_t* p_frame_header, uint32_t n_frame_header_size))
    IL2CPP_REGISTER_METHOD(0x00F54360, app::IAsyncResult*, BeginInvoke, (app::IVRTrackedCamera_GetVideoStreamTextureD3D11 * this_ptr, uint64_t h_tracked_camera, app::EVRTrackedCameraFrameType__Enum e_frame_type, void* p_d3_d11_device_or_resource, app::void** pp_d3_d11_shader_resource_view, app::CameraVideoStreamFrameHeader_t* p_frame_header, uint32_t n_frame_header_size, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F530B0, app::EVRTrackedCameraError__Enum, EndInvoke, (app::IVRTrackedCamera_GetVideoStreamTextureD3D11 * this_ptr, app::void** pp_d3_d11_shader_resource_view, app::CameraVideoStreamFrameHeader_t* p_frame_header, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetVideoStreamTextureD3D11
