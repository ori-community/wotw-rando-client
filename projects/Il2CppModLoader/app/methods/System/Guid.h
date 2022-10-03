#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Guid {
    IL2CPP_REGISTER_METHOD(0x001D46A0, void, ctor_1, (app::Guid__Boxed * this_ptr, app::Byte__Array* b))
    IL2CPP_REGISTER_METHODINFO(0x0473B0D0, Guid__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001D46B0, void, ctor_2, (app::Guid__Boxed * this_ptr, uint32_t a, uint16_t b, uint16_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint8_t i, uint8_t j, uint8_t k))
    IL2CPP_REGISTER_METHOD(0x001D4700, void, ctor_3, (app::Guid__Boxed * this_ptr, int32_t a, int16_t b, int16_t c, app::Byte__Array* d))
    IL2CPP_REGISTER_METHODINFO(0x04735470, Guid__ctor_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001D46B0, void, ctor_4, (app::Guid__Boxed * this_ptr, int32_t a, int16_t b, int16_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint8_t i, uint8_t j, uint8_t k))
    IL2CPP_REGISTER_METHOD(0x001D4710, void, ctor_5, (app::Guid__Boxed * this_ptr, app::String* g))
    IL2CPP_REGISTER_METHODINFO(0x0474F608, Guid__ctor_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DF9340, app::Guid, Parse, (app::String * input))
    IL2CPP_REGISTER_METHODINFO(0x0474BAD8, Guid_Parse__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DF9490, bool, TryParse, (app::String * input, app::Guid* result))
    IL2CPP_REGISTER_METHOD(0x01DF95C0, bool, TryParseExact, (app::String * input, app::String* format, app::Guid* result))
    IL2CPP_REGISTER_METHOD(0x01DF9770, bool, TryParseGuid, (app::String * g, app::Guid_GuidStyles__Enum flags, app::Guid_GuidResult* result))
    IL2CPP_REGISTER_METHOD(0x01DF99A0, bool, TryParseGuidWithHexPrefix, (app::String * guid_string, app::Guid_GuidResult* result))
    IL2CPP_REGISTER_METHOD(0x01DFA170, bool, TryParseGuidWithNoStyle, (app::String * guid_string, app::Guid_GuidResult* result))
    IL2CPP_REGISTER_METHOD(0x01DFA510, bool, TryParseGuidWithDashes, (app::String * guid_string, app::Guid_GuidResult* result))
    IL2CPP_REGISTER_METHOD(0x01DFAAA0, bool, StringToShort_1, (app::String * str, int32_t required_length, int32_t flags, int16_t* result, app::Guid_GuidResult* parse_result))
    IL2CPP_REGISTER_METHOD(0x01DFAC10, bool, StringToShort_2, (app::String * str, int32_t* parse_pos, int32_t required_length, int32_t flags, int16_t* result, app::Guid_GuidResult* parse_result))
    IL2CPP_REGISTER_METHOD(0x01DFAD20, bool, StringToInt_1, (app::String * str, int32_t required_length, int32_t flags, int32_t* result, app::Guid_GuidResult* parse_result))
    IL2CPP_REGISTER_METHOD(0x01DFAE10, bool, StringToInt_2, (app::String * str, int32_t* parse_pos, int32_t required_length, int32_t flags, int32_t* result, app::Guid_GuidResult* parse_result))
    IL2CPP_REGISTER_METHOD(0x01DFAEF0, bool, StringToInt_3, (app::String * str, int32_t* parse_pos, int32_t required_length, int32_t flags, int32_t* result, app::Guid_GuidResult* parse_result))
    IL2CPP_REGISTER_METHODINFO(0x0472B268, Guid_StringToInt_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DFB0B0, bool, StringToLong_1, (app::String * str, int32_t* parse_pos, int32_t flags, int64_t* result, app::Guid_GuidResult* parse_result))
    IL2CPP_REGISTER_METHOD(0x01DFB190, bool, StringToLong_2, (app::String * str, int32_t* parse_pos, int32_t flags, int64_t* result, app::Guid_GuidResult* parse_result))
    IL2CPP_REGISTER_METHODINFO(0x04742898, Guid_StringToLong_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DFB2F0, app::String*, EatAllWhitespace, (app::String * str))
    IL2CPP_REGISTER_METHOD(0x01DFB450, bool, IsHexPrefix, (app::String * str, int32_t i))
    IL2CPP_REGISTER_METHOD(0x001D4720, app::Byte__Array*, ToByteArray, (app::Guid__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D4730, app::String*, ToString_1, (app::Guid__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D4740, int32_t, GetHashCode, (app::Guid__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D4770, bool, Equals_1, (app::Guid__Boxed * this_ptr, app::Object* o))
    IL2CPP_REGISTER_METHOD(0x001D4780, bool, Equals_2, (app::Guid__Boxed * this_ptr, app::Guid g))
    IL2CPP_REGISTER_METHOD(0x001D47A0, int32_t, GetResult, (app::Guid__Boxed * this_ptr, uint32_t me, uint32_t them))
    IL2CPP_REGISTER_METHOD(0x001D47C0, int32_t, CompareTo_1, (app::Guid__Boxed * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x0472C070, Guid_CompareTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001D47D0, int32_t, CompareTo_2, (app::Guid__Boxed * this_ptr, app::Guid value))
    IL2CPP_REGISTER_METHOD(0x01DFC0D0, bool, op_Equality, (app::Guid a, app::Guid b))
    IL2CPP_REGISTER_METHOD(0x01DFC250, bool, op_Inequality, (app::Guid a, app::Guid b))
    IL2CPP_REGISTER_METHOD(0x001D47F0, app::String*, ToString_2, (app::Guid__Boxed * this_ptr, app::String* format))
    IL2CPP_REGISTER_METHOD(0x01DFC320, uint16_t, HexToChar, (int32_t a))
    IL2CPP_REGISTER_METHOD(0x01DFC340, int32_t, HexsToChars_1, (uint16_t * guid_chars, int32_t offset, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x01DFC420, int32_t, HexsToChars_2, (uint16_t * guid_chars, int32_t offset, int32_t a, int32_t b, bool hex))
    IL2CPP_REGISTER_METHOD(0x001D47F0, app::String*, ToString_3, (app::Guid__Boxed * this_ptr, app::String* format, app::IFormatProvider* provider))
    IL2CPP_REGISTER_METHODINFO(0x04763920, Guid_ToString_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DFCC80, app::Guid, NewGuid, ())
    IL2CPP_REGISTER_METHOD(0x01DFCF20, void, cctor, ())
    inline bool operator==(app::Guid a, app::Guid b) {
        return op_Equality(a, b);
    }
    inline bool operator!=(app::Guid a, app::Guid b) {
        return op_Inequality(a, b);
    }
} // namespace app::classes::System::Guid
