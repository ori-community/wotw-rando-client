#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IVRTrackedCamera_GetCameraErrorNameFromEnum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/EVRTrackedCameraError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetCameraErrorNameFromEnum {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRTrackedCamera_GetCameraErrorNameFromEnum * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00F52080, void*, Invoke, (app::IVRTrackedCamera_GetCameraErrorNameFromEnum * this_ptr, app::EVRTrackedCameraError__Enum e_camera_error))
    IL2CPP_REGISTER_METHOD(0x00F523C0, app::IAsyncResult*, BeginInvoke, (app::IVRTrackedCamera_GetCameraErrorNameFromEnum * this_ptr, app::EVRTrackedCameraError__Enum e_camera_error, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F52480, void*, EndInvoke, (app::IVRTrackedCamera_GetCameraErrorNameFromEnum * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__GetCameraErrorNameFromEnum
