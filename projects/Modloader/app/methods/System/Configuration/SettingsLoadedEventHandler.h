#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SettingsLoadedEventHandler.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SettingsLoadedEventArgs.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Configuration::SettingsLoadedEventHandler {
    IL2CPP_REGISTER_METHOD(0x02962C80, void, ctor, (app::SettingsLoadedEventHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x047230A8, SettingsLoadedEventHandler__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962CB0, void, Invoke, (app::SettingsLoadedEventHandler * this_ptr, app::Object* sender, app::SettingsLoadedEventArgs* e))
    IL2CPP_REGISTER_METHODINFO(0x04721990, SettingsLoadedEventHandler_Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962CE0, app::IAsyncResult*, BeginInvoke, (app::SettingsLoadedEventHandler * this_ptr, app::Object* sender, app::SettingsLoadedEventArgs* e, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHODINFO(0x0475A380, SettingsLoadedEventHandler_BeginInvoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962D10, void, EndInvoke, (app::SettingsLoadedEventHandler * this_ptr, app::IAsyncResult* result))
    IL2CPP_REGISTER_METHODINFO(0x047670D0, SettingsLoadedEventHandler_EndInvoke__MethodInfo)
} // namespace app::classes::System::Configuration::SettingsLoadedEventHandler
