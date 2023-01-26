#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/TextWriter.h>
#include <Modloader/app/structs/UnicodeDecodingConformance__Enum.h>
#include <Modloader/app/structs/UnicodeEncodingConformance__Enum.h>
#include <Modloader/app/structs/char16_t.h>

namespace app::classes::System::Net::WebUtility {
    IL2CPP_REGISTER_METHOD(0x021B8A50, app::String*, HtmlEncode_1, (app::String * value))
    IL2CPP_REGISTER_METHOD(0x021B8C70, void, HtmlEncode_2, (app::String * value, app::TextWriter* output))
    IL2CPP_REGISTER_METHOD(0x021B9060, app::String*, HtmlDecode_1, (app::String * value))
    IL2CPP_REGISTER_METHOD(0x021B9270, void, HtmlDecode_2, (app::String * value, app::TextWriter* output))
    IL2CPP_REGISTER_METHOD(0x021B96F0, int32_t, IndexOfHtmlEncodingChars, (app::String * s, int32_t start_pos))
    IL2CPP_REGISTER_METHOD(0x021B9880, app::UnicodeDecodingConformance__Enum, get_HtmlDecodeConformance, ())
    IL2CPP_REGISTER_METHOD(0x021B99F0, app::UnicodeEncodingConformance__Enum, get_HtmlEncodeConformance, ())
    IL2CPP_REGISTER_METHOD(0x021B9B60, app::Byte__Array*, UrlEncode_1, (app::Byte__Array * bytes, int32_t offset, int32_t count, bool always_create_new_return_value))
    IL2CPP_REGISTER_METHOD(0x021B9CF0, app::Byte__Array*, UrlEncode_2, (app::Byte__Array * bytes, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x021BA090, app::String*, UrlEncode_3, (app::String * value))
    IL2CPP_REGISTER_METHOD(0x021BA240, app::Byte__Array*, UrlEncodeToBytes, (app::Byte__Array * value, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x021BA310, app::String*, UrlDecodeInternal_1, (app::String * value, app::Encoding* encoding))
    IL2CPP_REGISTER_METHOD(0x021BA700, app::Byte__Array*, UrlDecodeInternal_2, (app::Byte__Array * bytes, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x021BA990, app::String*, UrlDecode, (app::String * encoded_value))
    IL2CPP_REGISTER_METHOD(0x021BAA60, app::Byte__Array*, UrlDecodeToBytes, (app::Byte__Array * encoded_value, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x021BAB20, void, ConvertSmpToUtf16, (uint32_t smp_char, char16_t* leading_surrogate, char16_t* trailing_surrogate))
    IL2CPP_REGISTER_METHOD(0x021BAB60, int32_t, GetNextUnicodeScalarValueFromUtf16Surrogate, (app::char16_t** pch, int32_t* chars_remaining))
    IL2CPP_REGISTER_METHOD(0x021BAC60, int32_t, HexToInt, (char16_t h))
    IL2CPP_REGISTER_METHOD(0x021BACA0, char16_t, IntToHex, (int32_t n))
    IL2CPP_REGISTER_METHOD(0x021BACB0, bool, IsUrlSafeChar, (char16_t ch))
    IL2CPP_REGISTER_METHOD(0x021BAD30, bool, ValidateUrlEncodingParameters, (app::Byte__Array * bytes, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x021BAE80, bool, StringRequiresHtmlDecoding, (app::String * s))
    IL2CPP_REGISTER_METHOD(0x021BAFE0, void, cctor, ())
} // namespace app::classes::System::Net::WebUtility
