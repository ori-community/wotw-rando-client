#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IVRTrackedCamera_AcquireVideoStreamingService.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVRTrackedCameraError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__AcquireVideoStreamingService {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRTrackedCamera_AcquireVideoStreamingService * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00F51B50, app::EVRTrackedCameraError__Enum, Invoke, (app::IVRTrackedCamera_AcquireVideoStreamingService * this_ptr, uint32_t n_device_index, uint64_t* p_handle))
    IL2CPP_REGISTER_METHOD(0x00F51EC0, app::IAsyncResult*, BeginInvoke, (app::IVRTrackedCamera_AcquireVideoStreamingService * this_ptr, uint32_t n_device_index, uint64_t* p_handle, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, app::EVRTrackedCameraError__Enum, EndInvoke, (app::IVRTrackedCamera_AcquireVideoStreamingService * this_ptr, uint64_t* p_handle, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__AcquireVideoStreamingService
