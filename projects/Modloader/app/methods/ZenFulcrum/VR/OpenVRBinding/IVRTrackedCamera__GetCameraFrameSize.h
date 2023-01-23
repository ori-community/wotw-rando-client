#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IVRTrackedCamera_GetCameraFrameSize.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/EVRTrackedCameraError__Enum.h>
#include <Modloader/app/structs/EVRTrackedCameraFrameType__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetCameraFrameSize {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRTrackedCamera_GetCameraFrameSize * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00F524C0, app::EVRTrackedCameraError__Enum, Invoke, (app::IVRTrackedCamera_GetCameraFrameSize * this_ptr, uint32_t n_device_index, app::EVRTrackedCameraFrameType__Enum e_frame_type, uint32_t* pn_width, uint32_t* pn_height, uint32_t* pn_frame_buffer_size))
    IL2CPP_REGISTER_METHOD(0x00F52960, app::IAsyncResult*, BeginInvoke, (app::IVRTrackedCamera_GetCameraFrameSize * this_ptr, uint32_t n_device_index, app::EVRTrackedCameraFrameType__Enum e_frame_type, uint32_t* pn_width, uint32_t* pn_height, uint32_t* pn_frame_buffer_size, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F52A90, app::EVRTrackedCameraError__Enum, EndInvoke, (app::IVRTrackedCamera_GetCameraFrameSize * this_ptr, uint32_t* pn_width, uint32_t* pn_height, uint32_t* pn_frame_buffer_size, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetCameraFrameSize
