#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::JsonConvert {
    IL2CPP_REGISTER_METHOD(0x01A64830, app::Func_1_Newtonsoft_Json_JsonSerializerSettings_*, get_DefaultSettings, ())
    IL2CPP_REGISTER_METHOD(0x01A648D0, app::String*, ToString_1, (bool value))
    IL2CPP_REGISTER_METHOD(0x01A649B0, app::String*, ToString_2, (uint16_t value))
    IL2CPP_REGISTER_METHOD(0x01A64A80, app::String*, ToString_3, (float value, app::FloatFormatHandling__Enum float_format_handling, uint16_t quote_char, bool nullable))
    IL2CPP_REGISTER_METHOD(0x01A64BC0, app::String*, EnsureFloatFormat, (double value, app::String* text, app::FloatFormatHandling__Enum float_format_handling, uint16_t quote_char, bool nullable))
    IL2CPP_REGISTER_METHOD(0x01A64D70, app::String*, ToString_4, (double value, app::FloatFormatHandling__Enum float_format_handling, uint16_t quote_char, bool nullable))
    IL2CPP_REGISTER_METHOD(0x01A64EB0, app::String*, EnsureDecimalPlace_1, (double value, app::String* text))
    IL2CPP_REGISTER_METHOD(0x01A65050, app::String*, EnsureDecimalPlace_2, (app::String * text))
    IL2CPP_REGISTER_METHOD(0x01A65120, app::String*, ToString_5, (app::Decimal value))
    IL2CPP_REGISTER_METHOD(0x01A652A0, app::String*, ToString_6, (app::String * value))
    IL2CPP_REGISTER_METHOD(0x01A65440, app::String*, ToString_7, (app::String * value, uint16_t delimiter))
    IL2CPP_REGISTER_METHOD(0x01A655B0, app::String*, ToString_8, (app::String * value, uint16_t delimiter, app::StringEscapeHandling__Enum string_escape_handling))
    IL2CPP_REGISTER_METHODINFO(0x04760F78, JsonConvert_ToString_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A656C0, void, cctor, ())
} // namespace app::classes::Newtonsoft::Json::JsonConvert
