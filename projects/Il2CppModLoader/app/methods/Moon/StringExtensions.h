#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::StringExtensions {
    IL2CPP_REGISTER_METHOD(0x030F35E0, app::String*, ToCSharpStringLiteral, (app::String * this_1, bool omit_quotes, bool escape_all_non_ascii))
    IL2CPP_REGISTER_METHODINFO(0x04791258, StringExtensions_ToCSharpStringLiteral__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x030F3750, int32_t, GetCSharpLiteralLength, (app::String * input, bool omit_quotes, bool escape_all_non_ascii))
    IL2CPP_REGISTER_METHOD(0x030F3980, void, WriteCSharpLiteral, (app::String * input, uint16_t* output, bool omit_quotes, bool escape_all_non_ascii))
    IL2CPP_REGISTER_METHOD(0x030F3ED0, void, WriteByteAsLowercaseHex, (app::uint16_t * *output, uint8_t b))
} // namespace app::classes::Moon::StringExtensions
