#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UnescapeMode__Enum.h>
#include <Modloader/app/structs/UriParser.h>

namespace app::classes::System::UriHelper {
    IL2CPP_REGISTER_METHOD(0x02A8F680, app::Char__Array*, EscapeString, (app::String * input, int32_t start, int32_t end, app::Char__Array* dest, int32_t* dest_pos, bool is_uri_string, char16_t force1, char16_t force2, char16_t rsvd))
    IL2CPP_REGISTER_METHOD(0x02A8FE30, app::Char__Array*, EnsureDestinationSize, (char16_t* p_str, app::Char__Array* dest, int32_t current_input_pos, int16_t chars_to_add, int16_t min_reallocate_chars, int32_t* dest_pos, int32_t prev_input_pos))
    IL2CPP_REGISTER_METHOD(0x02A8FFA0, app::Char__Array*, UnescapeString_1, (app::String * input, int32_t start, int32_t end, app::Char__Array* dest, int32_t* dest_position, char16_t rsvd1, char16_t rsvd2, char16_t rsvd3, app::UnescapeMode__Enum unescape_mode, app::UriParser* syntax, bool is_query))
    IL2CPP_REGISTER_METHOD(0x02A900D0, app::Char__Array*, UnescapeString_2, (char16_t* p_str, int32_t start, int32_t end, app::Char__Array* dest, int32_t* dest_position, char16_t rsvd1, char16_t rsvd2, char16_t rsvd3, app::UnescapeMode__Enum unescape_mode, app::UriParser* syntax, bool is_query))
    IL2CPP_REGISTER_METHOD(0x02A90CD0, void, MatchUTF8Sequence, (char16_t* p_dest, app::Char__Array* dest, int32_t* dest_offset, app::Char__Array* unescaped_chars, int32_t char_count, app::Byte__Array* bytes, int32_t byte_count, bool is_query, bool iri_parsing))
    IL2CPP_REGISTER_METHOD(0x02A91290, void, EscapeAsciiChar, (char16_t ch, app::Char__Array* to, int32_t* pos))
    IL2CPP_REGISTER_METHOD(0x02A91460, char16_t, EscapedAscii, (char16_t digit, char16_t next))
    IL2CPP_REGISTER_METHOD(0x02A91500, bool, IsNotSafeForUnescape, (char16_t ch))
    IL2CPP_REGISTER_METHOD(0x02A91550, bool, IsReservedUnreservedOrHash, (char16_t c))
    IL2CPP_REGISTER_METHOD(0x02A916A0, bool, IsUnreserved, (char16_t c))
    IL2CPP_REGISTER_METHOD(0x02A917C0, bool, Is3986Unreserved, (char16_t c))
    IL2CPP_REGISTER_METHOD(0x02A918A0, void, cctor, ())
} // namespace app::classes::System::UriHelper
