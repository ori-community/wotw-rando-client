#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonProperty.h>
#include <Modloader/app/structs/JsonSerializerInternalReader_PropertyPresence__Enum.h>
#include <Modloader/app/structs/JsonSerializerInternalReader_c.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c {
    IL2CPP_REGISTER_METHOD(0x01BF1D40, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::JsonSerializerInternalReader_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00529D50,
        app::String*,
        _CreateObjectUsingCreatorWithParameters_b__37_0,
        app::JsonSerializerInternalReader_c* this_ptr,
        app::JsonProperty* p
    )
    IL2CPP_REGISTER_METHOD(
        0x00529D50,
        app::String*,
        _CreateObjectUsingCreatorWithParameters_b__37_2,
        app::JsonSerializerInternalReader_c* this_ptr,
        app::JsonProperty* p
    )
    IL2CPP_REGISTER_METHOD(0x00502220, app::JsonProperty*, _PopulateObject_b__41_0, app::JsonSerializerInternalReader_c* this_ptr, app::JsonProperty* m)
    IL2CPP_REGISTER_METHOD(
        0x00420EE0,
        app::JsonSerializerInternalReader_PropertyPresence__Enum,
        _PopulateObject_b__41_1,
        app::JsonSerializerInternalReader_c* this_ptr,
        app::JsonProperty* m
    )
} // namespace app::classes::Newtonsoft::Json::Serialization::JsonSerializerInternalReader___c
