#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExtensionDataGetter.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IEnumerable_1_KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Newtonsoft::Json::Serialization::ExtensionDataGetter {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ExtensionDataGetter * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01852930, app::IEnumerable_1_KeyValuePair_2_System_Object_System_Object_*, Invoke, (app::ExtensionDataGetter * this_ptr, app::Object* o))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::ExtensionDataGetter * this_ptr, app::Object* o, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::IEnumerable_1_KeyValuePair_2_System_Object_System_Object_*, EndInvoke, (app::ExtensionDataGetter * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Newtonsoft::Json::Serialization::ExtensionDataGetter
