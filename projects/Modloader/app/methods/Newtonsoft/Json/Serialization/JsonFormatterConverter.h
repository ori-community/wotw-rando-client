#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonFormatterConverter.h>
#include <Modloader/app/structs/JsonISerializableContract.h>
#include <Modloader/app/structs/JsonProperty.h>
#include <Modloader/app/structs/JsonSerializerInternalReader.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Newtonsoft::Json::Serialization::JsonFormatterConverter {
    IL2CPP_REGISTER_METHOD(0x018719E0, void, ctor, (app::JsonFormatterConverter * this_ptr, app::JsonSerializerInternalReader* reader, app::JsonISerializableContract* contract, app::JsonProperty* member))
    IL2CPP_REGISTER_METHOD(0x01871AB0, app::Object*, Convert, (app::JsonFormatterConverter * this_ptr, app::Object* value, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x01871D10, bool, ToBoolean, (app::JsonFormatterConverter * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01871DA0, int32_t, ToInt32, (app::JsonFormatterConverter * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01871E30, int64_t, ToInt64, (app::JsonFormatterConverter * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01871EC0, float, ToSingle, (app::JsonFormatterConverter * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01871F50, app::String*, ToString, (app::JsonFormatterConverter * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x015F4080, app::Object*, GetTokenValue_1, (app::JsonFormatterConverter * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x015F3B10, bool, GetTokenValue_2, (app::JsonFormatterConverter * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x015F3CE0, int32_t, GetTokenValue_3, (app::JsonFormatterConverter * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x015F3EB0, int64_t, GetTokenValue_4, (app::JsonFormatterConverter * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x015F4260, float, GetTokenValue_5, (app::JsonFormatterConverter * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x015F4080, app::String*, GetTokenValue_6, (app::JsonFormatterConverter * this_ptr, app::Object* value))
} // namespace app::classes::Newtonsoft::Json::Serialization::JsonFormatterConverter
