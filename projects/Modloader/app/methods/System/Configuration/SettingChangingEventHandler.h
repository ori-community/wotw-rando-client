#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SettingChangingEventHandler.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SettingChangingEventArgs.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Configuration::SettingChangingEventHandler {
    IL2CPP_REGISTER_METHOD(0x029622F0, void, ctor, (app::SettingChangingEventHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04749B98, SettingChangingEventHandler__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962320, void, Invoke, (app::SettingChangingEventHandler * this_ptr, app::Object* sender, app::SettingChangingEventArgs* e))
    IL2CPP_REGISTER_METHODINFO(0x04716BF0, SettingChangingEventHandler_Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962350, app::IAsyncResult*, BeginInvoke, (app::SettingChangingEventHandler * this_ptr, app::Object* sender, app::SettingChangingEventArgs* e, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHODINFO(0x04734AB0, SettingChangingEventHandler_BeginInvoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962380, void, EndInvoke, (app::SettingChangingEventHandler * this_ptr, app::IAsyncResult* result))
    IL2CPP_REGISTER_METHODINFO(0x04736D18, SettingChangingEventHandler_EndInvoke__MethodInfo)
} // namespace app::classes::System::Configuration::SettingChangingEventHandler
