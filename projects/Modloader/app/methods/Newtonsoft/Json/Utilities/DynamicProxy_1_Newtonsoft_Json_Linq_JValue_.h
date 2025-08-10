#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicProxy_1_Newtonsoft_Json_Linq_JValue_.h>
#include <Modloader/app/structs/IEnumerable_1_System_String_.h>
#include <Modloader/app/structs/JValue.h>

namespace app::classes::Newtonsoft::Json::Utilities::DynamicProxy_1_Newtonsoft_Json_Linq_JValue_ {
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::DynamicProxy_1_Newtonsoft_Json_Linq_JValue_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01D11000,
        app::IEnumerable_1_System_String_*,
        GetDynamicMemberNames,
        app::DynamicProxy_1_Newtonsoft_Json_Linq_JValue_* this_ptr,
        app::JValue* instance
    )
} // namespace app::classes::Newtonsoft::Json::Utilities::DynamicProxy_1_Newtonsoft_Json_Linq_JValue_
