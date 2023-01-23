#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XboxControllerManager_SetVibrationDelegate.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::Core::Devices::XboxControllerManager_SetVibrationDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::XboxControllerManager_SetVibrationDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x011F8C00, void, Invoke, (app::XboxControllerManager_SetVibrationDelegate * this_ptr, uint32_t controller_index, app::Vector2 magnitude))
    IL2CPP_REGISTER_METHOD(0x011F8F80, app::IAsyncResult*, BeginInvoke, (app::XboxControllerManager_SetVibrationDelegate * this_ptr, uint32_t controller_index, app::Vector2 magnitude, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XboxControllerManager_SetVibrationDelegate * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Core::Devices::XboxControllerManager_SetVibrationDelegate
