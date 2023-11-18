#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraController_UpdatePlaneFunc.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Plane__Array.h>

namespace app::classes::CameraController_UpdatePlaneFunc {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::CameraController_UpdatePlaneFunc * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::CameraController_UpdatePlaneFunc * this_ptr, app::Plane__Array* planes, app::Matrix4x4* trans))
    IL2CPP_REGISTER_METHOD(0x01687490, app::IAsyncResult*, BeginInvoke, (app::CameraController_UpdatePlaneFunc * this_ptr, app::Plane__Array* planes, app::Matrix4x4* trans, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (app::CameraController_UpdatePlaneFunc * this_ptr, app::Matrix4x4* trans, app::IAsyncResult* result))
} // namespace app::classes::CameraController_UpdatePlaneFunc
