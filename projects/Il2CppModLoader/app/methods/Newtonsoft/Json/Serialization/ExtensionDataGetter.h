#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Newtonsoft::Json::Serialization::ExtensionDataGetter {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ExtensionDataGetter * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01852930, app::IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *, Invoke, (app::ExtensionDataGetter * this_ptr, app::Object * o))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::ExtensionDataGetter * this_ptr, app::Object * o, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *, EndInvoke, (app::ExtensionDataGetter * this_ptr, app::IAsyncResult * result))
}
