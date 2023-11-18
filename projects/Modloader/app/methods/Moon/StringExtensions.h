#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/char16_t.h>

namespace app::classes::Moon::StringExtensions {
    IL2CPP_REGISTER_METHOD(0x030F35E0, app::String*, ToCSharpStringLiteral, (app::String * this_1, bool omit_quotes, bool escape_all_non_ascii))
    IL2CPP_REGISTER_METHOD(0x030F3750, int32_t, GetCSharpLiteralLength, (app::String * input, bool omit_quotes, bool escape_all_non_ascii))
    IL2CPP_REGISTER_METHOD(0x030F3980, void, WriteCSharpLiteral, (app::String * input, char16_t* output, bool omit_quotes, bool escape_all_non_ascii))
    IL2CPP_REGISTER_METHOD(0x030F3ED0, void, WriteByteAsLowercaseHex, (app::char16_t** output, uint8_t b))
} // namespace app::classes::Moon::StringExtensions
