#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AkCallbackManager_MonitoringCallback.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/AkMonitorErrorCode__Enum.h>
#include <Modloader/app/structs/AkMonitorErrorLevel__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::AkCallbackManager_MonitoringCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::AkCallbackManager_MonitoringCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x026D4CF0, void, Invoke, (app::AkCallbackManager_MonitoringCallback * this_ptr, app::AkMonitorErrorCode__Enum in_error_code, app::AkMonitorErrorLevel__Enum in_error_level, uint32_t in_playing_i_d, uint64_t in_game_obj_i_d, app::String* in_msg))
    IL2CPP_REGISTER_METHOD(0x026D5190, app::IAsyncResult*, BeginInvoke, (app::AkCallbackManager_MonitoringCallback * this_ptr, app::AkMonitorErrorCode__Enum in_error_code, app::AkMonitorErrorLevel__Enum in_error_level, uint32_t in_playing_i_d, uint64_t in_game_obj_i_d, app::String* in_msg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::AkCallbackManager_MonitoringCallback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::AkCallbackManager_MonitoringCallback
