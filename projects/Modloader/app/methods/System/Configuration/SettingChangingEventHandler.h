#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SettingChangingEventArgs.h>
#include <Modloader/app/structs/SettingChangingEventHandler.h>

namespace app::classes::System::Configuration::SettingChangingEventHandler {
    IL2CPP_REGISTER_METHOD(0x029622F0, void, ctor, app::SettingChangingEventHandler* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x02962320, void, Invoke, app::SettingChangingEventHandler* this_ptr, app::Object* sender, app::SettingChangingEventArgs* e)
    IL2CPP_REGISTER_METHOD(
        0x02962350,
        app::IAsyncResult*,
        BeginInvoke,
        app::SettingChangingEventHandler* this_ptr,
        app::Object* sender,
        app::SettingChangingEventArgs* e,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x02962380, void, EndInvoke, app::SettingChangingEventHandler* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Configuration::SettingChangingEventHandler
