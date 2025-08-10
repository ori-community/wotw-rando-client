#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/CancelEventArgs.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SettingsSavingEventHandler.h>

namespace app::classes::System::Configuration::SettingsSavingEventHandler {
    IL2CPP_REGISTER_METHOD(0x01FFE1A0, void, ctor, app::SettingsSavingEventHandler* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x01FFE1D0, void, Invoke, app::SettingsSavingEventHandler* this_ptr, app::Object* sender, app::CancelEventArgs* e)
    IL2CPP_REGISTER_METHOD(
        0x01FFE200,
        app::IAsyncResult*,
        BeginInvoke,
        app::SettingsSavingEventHandler* this_ptr,
        app::Object* sender,
        app::CancelEventArgs* e,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x01FFE230, void, EndInvoke, app::SettingsSavingEventHandler* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Configuration::SettingsSavingEventHandler
