#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SettingsSavingEventHandler.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/CancelEventArgs.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Configuration::SettingsSavingEventHandler {
    IL2CPP_REGISTER_METHOD(0x01FFE1A0, void, ctor, (app::SettingsSavingEventHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x047585C0, SettingsSavingEventHandler__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFE1D0, void, Invoke, (app::SettingsSavingEventHandler * this_ptr, app::Object* sender, app::CancelEventArgs* e))
    IL2CPP_REGISTER_METHODINFO(0x04749A98, SettingsSavingEventHandler_Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFE200, app::IAsyncResult*, BeginInvoke, (app::SettingsSavingEventHandler * this_ptr, app::Object* sender, app::CancelEventArgs* e, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHODINFO(0x04752BC8, SettingsSavingEventHandler_BeginInvoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFE230, void, EndInvoke, (app::SettingsSavingEventHandler * this_ptr, app::IAsyncResult* result))
    IL2CPP_REGISTER_METHODINFO(0x04760998, SettingsSavingEventHandler_EndInvoke__MethodInfo)
} // namespace app::classes::System::Configuration::SettingsSavingEventHandler
