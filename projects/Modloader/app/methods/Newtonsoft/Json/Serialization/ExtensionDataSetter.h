#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExtensionDataSetter.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Newtonsoft::Json::Serialization::ExtensionDataSetter {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ExtensionDataSetter * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0186BDE0, void, Invoke, (app::ExtensionDataSetter * this_ptr, app::Object* o, app::String* key, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x00DC7DB0, app::IAsyncResult*, BeginInvoke, (app::ExtensionDataSetter * this_ptr, app::Object* o, app::String* key, app::Object* value, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::ExtensionDataSetter * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Newtonsoft::Json::Serialization::ExtensionDataSetter
