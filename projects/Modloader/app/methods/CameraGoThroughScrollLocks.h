#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraGoThroughScrollLocks.h>
#include <Modloader/app/structs/GameplayCamera.h>
#include <Modloader/app/structs/Object_1.h>

namespace app::classes::CameraGoThroughScrollLocks {
    IL2CPP_REGISTER_METHOD(0x01691720, void, ctor, (app::CameraGoThroughScrollLocks * this_ptr, app::GameplayCamera* camera_controller))
    IL2CPP_REGISTER_METHOD(0x01691AC0, void, Destroy, (app::CameraGoThroughScrollLocks * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01691C50, void, AddDisablePassThroughRequest, (app::CameraGoThroughScrollLocks * this_ptr, app::Object_1* obj))
    IL2CPP_REGISTER_METHOD(0x01691D00, void, RemoveDisablePassThroughRequest, (app::CameraGoThroughScrollLocks * this_ptr, app::Object_1* obj))
    IL2CPP_REGISTER_METHOD(0x01691DA0, void, Update, (app::CameraGoThroughScrollLocks * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01691F80, void, OnPassThroughScrollLock, (app::CameraGoThroughScrollLocks * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01692320, void, OnScrollFaderFinishedFading, (app::CameraGoThroughScrollLocks * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016924C0, void, OnGameEarlyFixedUpdate, (app::CameraGoThroughScrollLocks * this_ptr))
} // namespace app::classes::CameraGoThroughScrollLocks
