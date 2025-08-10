#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicProxyMetaObject_1_Newtonsoft_Json_Linq_JValue_.h>
#include <Modloader/app/structs/DynamicProxy_1_Newtonsoft_Json_Linq_JValue_.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/JValue.h>

namespace app::classes::Newtonsoft::Json::Utilities::DynamicProxyMetaObject_1_Newtonsoft_Json_Linq_JValue_ {
    IL2CPP_REGISTER_METHOD(
        0x01D0F010,
        void,
        ctor,
        app::DynamicProxyMetaObject_1_Newtonsoft_Json_Linq_JValue_* this_ptr,
        app::Expression* expression,
        app::JValue* value,
        app::DynamicProxy_1_Newtonsoft_Json_Linq_JValue_* proxy
    )
}
