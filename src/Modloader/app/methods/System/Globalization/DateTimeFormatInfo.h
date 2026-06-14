#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Calendar.h>
#include <Modloader/app/structs/CompareInfo.h>
#include <Modloader/app/structs/CultureData.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/DateTimeFormatFlags__Enum.h>
#include <Modloader/app/structs/DateTimeFormatInfo.h>
#include <Modloader/app/structs/DateTimeStyles__Enum.h>
#include <Modloader/app/structs/DayOfWeek__Enum.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/MonthNameStyles__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/TokenHashValue__Array.h>
#include <Modloader/app/structs/TokenType__Enum.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/_DTString.h>

namespace app::classes::System::Globalization::DateTimeFormatInfo {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, InitPreferExistingTokens, )
    IL2CPP_REGISTER_METHOD(0x025FC900, app::String*, get_CultureName, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FC930, app::CultureInfo*, get_Culture, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FCA10, app::String*, get_LanguageName, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FCA40, app::String__Array*, internalGetAbbreviatedDayOfWeekNames, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FCAC0, app::String__Array*, internalGetDayOfWeekNames, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FCB40, app::String__Array*, internalGetAbbreviatedMonthNames, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FCBC0, app::String__Array*, internalGetMonthNames, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FCC40, void, ctor_1, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FCD40, void, ctor_2, app::DateTimeFormatInfo* this_ptr, app::CultureData* culture_data, app::Calendar* cal)
    IL2CPP_REGISTER_METHOD(
        0x025FCD70,
        void,
        InitializeOverridableProperties,
        app::DateTimeFormatInfo* this_ptr,
        app::CultureData* culture_data,
        int32_t calendar_i_d
    )
    IL2CPP_REGISTER_METHOD(0x025FCF70, void, OnDeserialized, app::DateTimeFormatInfo* this_ptr, app::StreamingContext ctx)
    IL2CPP_REGISTER_METHOD(0x025FD710, void, OnSerializing, app::DateTimeFormatInfo* this_ptr, app::StreamingContext ctx)
    IL2CPP_REGISTER_METHOD(0x025FDA30, app::DateTimeFormatInfo*, get_InvariantInfo, )
    IL2CPP_REGISTER_METHOD(0x025FDC50, app::DateTimeFormatInfo*, get_CurrentInfo, )
    IL2CPP_REGISTER_METHOD(0x025FDD80, app::DateTimeFormatInfo*, GetInstance, app::IFormatProvider* provider)
    IL2CPP_REGISTER_METHOD(0x025FDF20, app::Object*, GetFormat, app::DateTimeFormatInfo* this_ptr, app::Type* format_type)
    IL2CPP_REGISTER_METHOD(0x025FDFF0, app::Object*, Clone, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_AMDesignator, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::Calendar*, get_Calendar, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FE1A0, void, set_Calendar, app::DateTimeFormatInfo* this_ptr, app::Calendar* value)
    IL2CPP_REGISTER_METHOD(0x025FE4D0, app::Int32__Array*, get_OptionalCalendars, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FE510, app::String__Array*, get_EraNames, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FE590, app::String*, GetEraName, app::DateTimeFormatInfo* this_ptr, int32_t era)
    IL2CPP_REGISTER_METHOD(0x025FE730, app::String__Array*, get_AbbreviatedEraNames, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FE7B0, app::String*, GetAbbreviatedEraName, app::DateTimeFormatInfo* this_ptr, int32_t era)
    IL2CPP_REGISTER_METHOD(0x025FE980, app::String__Array*, get_AbbreviatedEnglishEraNames, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::String*, get_DateSeparator, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FEA00, app::String*, get_FullDateTimePattern, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FEB00, app::String*, get_LongDatePattern, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FEB50, void, set_LongDatePattern, app::DateTimeFormatInfo* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x025FEC90, app::String*, get_LongTimePattern, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FED00, void, set_LongTimePattern, app::DateTimeFormatInfo* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x025FEE40, app::String*, get_MonthDayPattern, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_PMDesignator, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FEEB0, app::String*, get_RFC1123Pattern, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FEF30, app::String*, get_ShortDatePattern, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FEF80, void, set_ShortDatePattern, app::DateTimeFormatInfo* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x025FF0C0, app::String*, get_ShortTimePattern, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FF130, void, set_ShortTimePattern, app::DateTimeFormatInfo* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x025FF270, app::String*, get_SortableDateTimePattern, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FF2F0, app::String*, get_GeneralShortTimePattern, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FF3E0, app::String*, get_GeneralLongTimePattern, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FF4D0, app::String*, get_DateTimeOffsetPattern, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::String*, get_TimeSeparator, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FF740, app::String*, get_UniversalSortableDateTimePattern, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FF7C0, app::String*, get_YearMonthPattern, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FF810, void, set_YearMonthPattern, app::DateTimeFormatInfo* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x025FF940, app::String__Array*, get_AbbreviatedDayNames, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FFA90, app::String__Array*, get_DayNames, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FFBE0, app::String__Array*, get_AbbreviatedMonthNames, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FFD30, app::String__Array*, get_MonthNames, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FFE80, bool, get_HasSpacesInMonthNames, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025FFEA0, bool, get_HasSpacesInDayNames, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025FFEC0,
        app::String*,
        internalGetMonthName,
        app::DateTimeFormatInfo* this_ptr,
        int32_t month,
        app::MonthNameStyles__Enum style,
        bool abbreviated
    )
    IL2CPP_REGISTER_METHOD(0x026000B0, app::String__Array*, internalGetGenitiveMonthNames, app::DateTimeFormatInfo* this_ptr, bool abbreviated)
    IL2CPP_REGISTER_METHOD(0x026001A0, app::String__Array*, internalGetLeapYearMonthNames, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02600220, app::String*, GetAbbreviatedDayName, app::DateTimeFormatInfo* this_ptr, app::DayOfWeek__Enum dayofweek)
    IL2CPP_REGISTER_METHOD(
        0x026003C0,
        app::String__Array*,
        GetCombinedPatterns,
        app::String__Array* patterns1,
        app::String__Array* patterns2,
        app::String* connect_string
    )
    IL2CPP_REGISTER_METHOD(0x02600570, app::String__Array*, GetAllDateTimePatterns, app::DateTimeFormatInfo* this_ptr, char16_t format)
    IL2CPP_REGISTER_METHOD(0x02600A20, app::String*, GetDayName, app::DateTimeFormatInfo* this_ptr, app::DayOfWeek__Enum dayofweek)
    IL2CPP_REGISTER_METHOD(0x02600BC0, app::String*, GetAbbreviatedMonthName, app::DateTimeFormatInfo* this_ptr, int32_t month)
    IL2CPP_REGISTER_METHOD(0x02600D60, app::String*, GetMonthName, app::DateTimeFormatInfo* this_ptr, int32_t month)
    IL2CPP_REGISTER_METHOD(0x02600F00, app::String__Array*, GetMergedPatterns, app::String__Array* patterns, app::String* default_pattern)
    IL2CPP_REGISTER_METHOD(0x026012C0, app::String__Array*, get_AllYearMonthPatterns, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026013C0, app::String__Array*, get_AllShortDatePatterns, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026014C0, app::String__Array*, get_AllShortTimePatterns, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026015A0, app::String__Array*, get_AllLongDatePatterns, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026016A0, app::String__Array*, get_AllLongTimePatterns, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02601780, app::String__Array*, get_UnclonedYearMonthPatterns, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02601800, app::String__Array*, get_UnclonedShortDatePatterns, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02601880, app::String__Array*, get_UnclonedLongDatePatterns, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02601900, app::String__Array*, get_UnclonedShortTimePatterns, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02601940, app::String__Array*, get_UnclonedLongTimePatterns, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02601980, app::DateTimeFormatInfo*, ReadOnly, app::DateTimeFormatInfo* dtfi)
    IL2CPP_REGISTER_METHOD(0x00A5BA30, bool, get_IsReadOnly, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02601C70, app::String__Array*, get_MonthGenitiveNames, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02601E20, app::String*, get_FullTimeSpanPositivePattern, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02601FE0, app::String*, get_FullTimeSpanNegativePattern, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02602080, app::CompareInfo*, get_CompareInfo, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02602200, void, ValidateStyles, app::DateTimeStyles__Enum style, app::String* parameter_name)
    IL2CPP_REGISTER_METHOD(0x02602370, app::DateTimeFormatFlags__Enum, get_FormatFlags, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02602920, bool, get_HasForceTwoDigitYears, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02602960, bool, get_HasYearMonthAdjustment, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02602980, bool, YearMonthAdjustment, app::DateTimeFormatInfo* this_ptr, int32_t* year, int32_t* month, bool parsed_month_name)
    IL2CPP_REGISTER_METHOD(0x02602AB0, app::DateTimeFormatInfo*, GetJapaneseCalendarDTFI, )
    IL2CPP_REGISTER_METHOD(0x02602CE0, app::DateTimeFormatInfo*, GetTaiwanCalendarDTFI, )
    IL2CPP_REGISTER_METHOD(0x02602F10, void, ClearTokenHashTable, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02602F30, app::TokenHashValue__Array*, CreateTokenHashTable, app::DateTimeFormatInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02604320, void, AddMonthNames, app::DateTimeFormatInfo* this_ptr, app::TokenHashValue__Array* temp, app::String* month_postfix)
    IL2CPP_REGISTER_METHOD(0x026043F0, bool, TryParseHebrewNumber, app::_DTString* str, bool* bad_format, int32_t* number)
    IL2CPP_REGISTER_METHOD(0x026046B0, bool, IsHebrewChar, char16_t ch)
    IL2CPP_REGISTER_METHOD(
        0x026046D0,
        bool,
        Tokenize,
        app::DateTimeFormatInfo* this_ptr,
        app::TokenType__Enum token_mask,
        app::TokenType__Enum* token_type,
        int32_t* token_value,
        app::_DTString* str
    )
    IL2CPP_REGISTER_METHOD(
        0x02604BD0,
        void,
        InsertAtCurrentHashNode,
        app::DateTimeFormatInfo* this_ptr,
        app::TokenHashValue__Array* hash_table,
        app::String* str,
        char16_t ch,
        app::TokenType__Enum token_type,
        int32_t token_value,
        int32_t pos,
        int32_t hashcode,
        int32_t hash_probe
    )
    IL2CPP_REGISTER_METHOD(
        0x02604ED0,
        void,
        InsertHash,
        app::DateTimeFormatInfo* this_ptr,
        app::TokenHashValue__Array* hash_table,
        app::String* str,
        app::TokenType__Enum token_type,
        int32_t token_value
    )
    IL2CPP_REGISTER_METHOD(0x026053B0, void, cctor, )
} // namespace app::classes::System::Globalization::DateTimeFormatInfo
