#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Func_2_Newtonsoft_Json_Serialization_JsonProperty_String_.h>
#include <Modloader/app/structs/Func_2_Object_String_.h>
#include <Modloader/app/structs/IEnumerable_1_Newtonsoft_Json_Serialization_JsonProperty_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/JsonProperty.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/StringWriter.h>

namespace app::classes::Newtonsoft::Json::Utilities::StringUtils {
    IL2CPP_REGISTER_METHOD(0x030272D0, app::String*, FormatWith_1, (app::String * format, app::IFormatProvider* provider, app::Object* arg0))
    IL2CPP_REGISTER_METHOD(0x030273E0, app::String*, FormatWith_2, (app::String * format, app::IFormatProvider* provider, app::Object* arg0, app::Object* arg1))
    IL2CPP_REGISTER_METHOD(0x03027540, app::String*, FormatWith_3, (app::String * format, app::IFormatProvider* provider, app::Object* arg0, app::Object* arg1, app::Object* arg2))
    IL2CPP_REGISTER_METHOD(0x03027700, app::String*, FormatWith_4, (app::String * format, app::IFormatProvider* provider, app::Object* arg0, app::Object* arg1, app::Object* arg2, app::Object* arg3))
    IL2CPP_REGISTER_METHOD(0x03027910, app::String*, FormatWith_5, (app::String * format, app::IFormatProvider* provider, app::Object__Array* args))
    IL2CPP_REGISTER_METHOD(0x030279C0, app::StringWriter*, CreateStringWriter, (int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x03027C10, void, ToCharAsUnicode, (char16_t c, app::Char__Array* buffer))
    IL2CPP_REGISTER_METHOD(0x03027D50, app::String*, ToCamelCase, (app::String * s))
    IL2CPP_REGISTER_METHOD(0x03028020, char16_t, ToLower, (char16_t c))
    IL2CPP_REGISTER_METHOD(0x030280F0, bool, IsHighSurrogate, (char16_t c))
    IL2CPP_REGISTER_METHOD(0x030281A0, bool, IsLowSurrogate, (char16_t c))
    IL2CPP_REGISTER_METHOD(0x03028250, bool, StartsWith, (app::String * source, char16_t value))
    IL2CPP_REGISTER_METHOD(0x03028290, bool, EndsWith, (app::String * source, char16_t value))
    IL2CPP_REGISTER_METHOD(0x030282D0, app::String*, Trim, (app::String * s, int32_t start, int32_t length))
    IL2CPP_REGISTER_METHOD(0x015805D0, app::Object*, ForgivingCaseSensitiveFind_1, (app::IEnumerable_1_System_Object_ * source, app::Func_2_Object_String_* value_selector, app::String* test_value))
    IL2CPP_REGISTER_METHOD(0x015805D0, app::JsonProperty*, ForgivingCaseSensitiveFind_2, (app::IEnumerable_1_Newtonsoft_Json_Serialization_JsonProperty_ * source, app::Func_2_Newtonsoft_Json_Serialization_JsonProperty_String_* value_selector, app::String* test_value))
} // namespace app::classes::Newtonsoft::Json::Utilities::StringUtils
