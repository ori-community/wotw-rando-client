#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_System_String_.h>
#include <Modloader/app/structs/JObject.h>
#include <Modloader/app/structs/JObject_JObjectDynamicProxy.h>

namespace app::classes::Newtonsoft::Json::Linq::JObject_JObjectDynamicProxy {
    IL2CPP_REGISTER_METHOD(
        0x01F0CBA0,
        app::IEnumerable_1_System_String_*,
        GetDynamicMemberNames,
        app::JObject_JObjectDynamicProxy* this_ptr,
        app::JObject* instance
    )
    IL2CPP_REGISTER_METHOD(0x01F0CDF0, void, ctor, app::JObject_JObjectDynamicProxy* this_ptr)
} // namespace app::classes::Newtonsoft::Json::Linq::JObject_JObjectDynamicProxy
