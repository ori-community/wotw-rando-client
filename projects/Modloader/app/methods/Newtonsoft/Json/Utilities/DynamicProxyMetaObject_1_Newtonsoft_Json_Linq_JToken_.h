#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicProxyMetaObject_1_Newtonsoft_Json_Linq_JToken_.h>
#include <Modloader/app/structs/DynamicProxy_1_Newtonsoft_Json_Linq_JToken_.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/JToken.h>

namespace app::classes::Newtonsoft::Json::Utilities::DynamicProxyMetaObject_1_Newtonsoft_Json_Linq_JToken_ {
    IL2CPP_REGISTER_METHOD(
        0x01D0F010,
        void,
        ctor,
        app::DynamicProxyMetaObject_1_Newtonsoft_Json_Linq_JToken_* this_ptr,
        app::Expression* expression,
        app::JToken* value,
        app::DynamicProxy_1_Newtonsoft_Json_Linq_JToken_* proxy
    )
}
