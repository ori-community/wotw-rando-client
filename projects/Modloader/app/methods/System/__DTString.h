#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CompareInfo.h>
#include <Modloader/app/structs/DTSubString.h>
#include <Modloader/app/structs/DateTimeFormatInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/TokenType__Enum.h>
#include <Modloader/app/structs/_DTString__Boxed.h>

namespace app::classes::System::__DTString {
    IL2CPP_REGISTER_METHOD(0x00249FC0, void, ctor_1, app::_DTString__Boxed* this_ptr, app::String* str, app::DateTimeFormatInfo* dtfi, bool check_digit_token)
    IL2CPP_REGISTER_METHOD(0x00249FF0, void, ctor_2, app::_DTString__Boxed* this_ptr, app::String* str, app::DateTimeFormatInfo* dtfi)
    IL2CPP_REGISTER_METHOD(0x00107C30, app::CompareInfo*, get_CompareInfo, app::_DTString__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0024A000, bool, GetNext, app::_DTString__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0024A040, bool, AtEnd, app::_DTString__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0024A050, bool, Advance, app::_DTString__Boxed* this_ptr, int32_t count)
    IL2CPP_REGISTER_METHOD(
        0x0024A090,
        void,
        GetRegularToken,
        app::_DTString__Boxed* this_ptr,
        app::TokenType__Enum* token_type,
        int32_t* token_value,
        app::DateTimeFormatInfo* dtfi
    )
    IL2CPP_REGISTER_METHOD(
        0x0024A0A0,
        app::TokenType__Enum,
        GetSeparatorToken,
        app::_DTString__Boxed* this_ptr,
        app::DateTimeFormatInfo* dtfi,
        int32_t* index_before_separator,
        char16_t* char_before_separator
    )
    IL2CPP_REGISTER_METHOD(0x0024A0B0, bool, MatchSpecifiedWord_1, app::_DTString__Boxed* this_ptr, app::String* target)
    IL2CPP_REGISTER_METHOD(0x0024A0C0, bool, MatchSpecifiedWord_2, app::_DTString__Boxed* this_ptr, app::String* target, int32_t end_index)
    IL2CPP_REGISTER_METHOD(
        0x0024A0D0,
        bool,
        MatchSpecifiedWords,
        app::_DTString__Boxed* this_ptr,
        app::String* target,
        bool check_word_boundary,
        int32_t* match_length
    )
    IL2CPP_REGISTER_METHOD(0x0024A0E0, bool, Match_1, app::_DTString__Boxed* this_ptr, app::String* str)
    IL2CPP_REGISTER_METHOD(0x0024A0F0, bool, Match_2, app::_DTString__Boxed* this_ptr, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x0024A150, int32_t, MatchLongestWords, app::_DTString__Boxed* this_ptr, app::String__Array* words, int32_t* max_match_str_len)
    IL2CPP_REGISTER_METHOD(0x0024A160, int32_t, GetRepeatCount, app::_DTString__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0024A170, bool, GetNextDigit, app::_DTString__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0024A180, char16_t, GetChar, app::_DTString__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0024A1B0, int32_t, GetDigit, app::_DTString__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0024A1E0, void, SkipWhiteSpaces, app::_DTString__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0024A1F0, bool, SkipWhiteSpaceCurrent, app::_DTString__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0024A200, void, TrimTail, app::_DTString__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0024A210, void, RemoveTrailingInQuoteSpaces, app::_DTString__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0024A220, void, RemoveLeadingInQuoteSpaces, app::_DTString__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0024A230, app::DTSubString, GetSubString, app::_DTString__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0024A260, void, ConsumeSubString, app::_DTString__Boxed* this_ptr, app::DTSubString sub)
    IL2CPP_REGISTER_METHOD(0x0314FD20, void, cctor, )
} // namespace app::classes::System::__DTString
