#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabLogger.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::PlayFab::Public::PlayFabLogger {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BeginUploadLog, app::PlayFabLogger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UploadLog, app::PlayFabLogger* this_ptr, app::String* message)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndUploadLog, app::PlayFabLogger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01AD1210, void, ctor, app::PlayFabLogger* this_ptr)
} // namespace app::classes::PlayFab::Public::PlayFabLogger
