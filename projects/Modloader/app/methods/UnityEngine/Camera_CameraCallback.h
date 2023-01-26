#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Camera_CameraCallback.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::UnityEngine::Camera_CameraCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Camera_CameraCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::Camera_CameraCallback * this_ptr, app::Camera* cam))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::Camera_CameraCallback * this_ptr, app::Camera* cam, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Camera_CameraCallback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::UnityEngine::Camera_CameraCallback
