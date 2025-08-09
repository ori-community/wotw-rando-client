#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DateTimeFormatInfo.h>
#include <Modloader/app/structs/DateTimeFormatInfoScanner.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/FORMATFLAGS__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::System::Globalization::DateTimeFormatInfoScanner {
    IL2CPP_REGISTER_METHOD(0x02605430, app::Dictionary_2_System_String_System_String_*, get_KnownWords, )
    IL2CPP_REGISTER_METHOD(0x026059D0, int32_t, SkipWhiteSpacesAndNonLetter, app::String* pattern, int32_t current_index)
    IL2CPP_REGISTER_METHOD(0x02605AE0, void, AddDateWordOrPostfix, app::DateTimeFormatInfoScanner* this_ptr, app::String* format_postfix, app::String* str)
    IL2CPP_REGISTER_METHOD(
        0x02605E50,
        int32_t,
        AddDateWords,
        app::DateTimeFormatInfoScanner* this_ptr,
        app::String* pattern,
        int32_t index,
        app::String* format_postfix
    )
    IL2CPP_REGISTER_METHOD(0x026061D0, int32_t, ScanRepeatChar, app::String* pattern, char16_t ch, int32_t index, int32_t* count)
    IL2CPP_REGISTER_METHOD(0x02606240, void, AddIgnorableSymbols, app::DateTimeFormatInfoScanner* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x026063F0, void, ScanDateWord, app::DateTimeFormatInfoScanner* this_ptr, app::String* pattern)
    IL2CPP_REGISTER_METHOD(0x02606670, app::String__Array*, GetDateWordsOfDTFI, app::DateTimeFormatInfoScanner* this_ptr, app::DateTimeFormatInfo* dtfi)
    IL2CPP_REGISTER_METHOD(
        0x02606A60,
        app::FORMATFLAGS__Enum,
        GetFormatFlagGenitiveMonth,
        app::String__Array* month_names,
        app::String__Array* genitve_month_names,
        app::String__Array* abbrev_month_names,
        app::String__Array* genetive_abbrev_month_names
    )
    IL2CPP_REGISTER_METHOD(
        0x02606AB0,
        app::FORMATFLAGS__Enum,
        GetFormatFlagUseSpaceInMonthNames,
        app::String__Array* month_names,
        app::String__Array* genitve_month_names,
        app::String__Array* abbrev_month_names,
        app::String__Array* genetive_abbrev_month_names
    )
    IL2CPP_REGISTER_METHOD(
        0x02606B70,
        app::FORMATFLAGS__Enum,
        GetFormatFlagUseSpaceInDayNames,
        app::String__Array* day_names,
        app::String__Array* abbrev_day_names
    )
    IL2CPP_REGISTER_METHOD(0x02606BB0, app::FORMATFLAGS__Enum, GetFormatFlagUseHebrewCalendar, int32_t cal_i_d)
    IL2CPP_REGISTER_METHOD(0x02606BC0, bool, EqualStringArrays, app::String__Array* array1, app::String__Array* array2)
    IL2CPP_REGISTER_METHOD(0x02606C90, bool, ArrayElementsHaveSpace, app::String__Array* array)
    IL2CPP_REGISTER_METHOD(0x02606DD0, bool, ArrayElementsBeginWithDigit, app::String__Array* array)
    IL2CPP_REGISTER_METHOD(0x02607110, void, ctor, app::DateTimeFormatInfoScanner* this_ptr)
} // namespace app::classes::System::Globalization::DateTimeFormatInfoScanner
