#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CalendarData.h>
#include <Modloader/app/structs/CultureData.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/NumberFormatInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::System::Globalization::CultureData {
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, ctor, app::CultureData* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x025F3860, app::CultureData*, get_Invariant, )
    IL2CPP_REGISTER_METHOD(0x025F3D40, app::CultureData*, GetCultureData_1, app::String* culture_name, bool use_user_override)
    IL2CPP_REGISTER_METHOD(
        0x025F3ED0,
        app::CultureData*,
        GetCultureData_2,
        app::String* culture_name,
        bool use_user_override,
        int32_t datetime_index,
        int32_t calendar_id,
        int32_t number_index,
        app::String* iso2lang,
        int32_t ansi_code_page,
        int32_t oem_code_page,
        int32_t mac_code_page,
        int32_t ebcdic_code_page,
        bool right_to_left,
        app::String* list_separator
    )
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::CultureData*, GetCultureData_3, int32_t culture, bool b_use_user_override)
    IL2CPP_REGISTER_METHOD(0x025F4170, void, fill_culture_data, app::CultureData* this_ptr, int32_t datetime_index)
    IL2CPP_REGISTER_METHOD(0x025F4270, app::CalendarData*, GetCalendar, app::CultureData* this_ptr, int32_t calendar_id)
    IL2CPP_REGISTER_METHOD(0x025F4490, app::String__Array*, get_LongTimes, app::CultureData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F44A0, app::String__Array*, get_ShortTimes, app::CultureData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_SISO639LANGNAME, app::CultureData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_IFIRSTDAYOFWEEK, app::CultureData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FC830, int32_t, get_IFIRSTWEEKOFYEAR, app::CultureData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_SAM1159, app::CultureData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_SPM2359, app::CultureData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_TimeSeparator, app::CultureData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F44B0, app::Int32__Array*, get_CalendarIds, app::CultureData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F46B0, bool, get_IsInvariantCulture, app::CultureData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::String*, get_CultureName, app::CultureData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F46D0, app::String*, get_SCOMPAREINFO, app::CultureData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::String*, get_STEXTINFO, app::CultureData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ILANGUAGE, app::CultureData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_UseUserOverride, app::CultureData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F4750, app::String__Array*, EraNames, app::CultureData* this_ptr, int32_t calendar_id)
    IL2CPP_REGISTER_METHOD(0x025F4770, app::String__Array*, AbbrevEraNames, app::CultureData* this_ptr, int32_t calendar_id)
    IL2CPP_REGISTER_METHOD(0x025F4790, app::String__Array*, AbbreviatedEnglishEraNames, app::CultureData* this_ptr, int32_t calendar_id)
    IL2CPP_REGISTER_METHOD(0x025F47B0, app::String__Array*, ShortDates, app::CultureData* this_ptr, int32_t calendar_id)
    IL2CPP_REGISTER_METHOD(0x025F47D0, app::String__Array*, LongDates, app::CultureData* this_ptr, int32_t calendar_id)
    IL2CPP_REGISTER_METHOD(0x025F47F0, app::String__Array*, YearMonths, app::CultureData* this_ptr, int32_t calendar_id)
    IL2CPP_REGISTER_METHOD(0x025F4810, app::String__Array*, DayNames, app::CultureData* this_ptr, int32_t calendar_id)
    IL2CPP_REGISTER_METHOD(0x025F4830, app::String__Array*, AbbreviatedDayNames, app::CultureData* this_ptr, int32_t calendar_id)
    IL2CPP_REGISTER_METHOD(0x025F4850, app::String__Array*, MonthNames, app::CultureData* this_ptr, int32_t calendar_id)
    IL2CPP_REGISTER_METHOD(0x025F4870, app::String__Array*, GenitiveMonthNames, app::CultureData* this_ptr, int32_t calendar_id)
    IL2CPP_REGISTER_METHOD(0x025F4890, app::String__Array*, AbbreviatedMonthNames, app::CultureData* this_ptr, int32_t calendar_id)
    IL2CPP_REGISTER_METHOD(0x025F48B0, app::String__Array*, AbbreviatedGenitiveMonthNames, app::CultureData* this_ptr, int32_t calendar_id)
    IL2CPP_REGISTER_METHOD(0x025F48E0, app::String__Array*, LeapYearMonthNames, app::CultureData* this_ptr, int32_t calendar_id)
    IL2CPP_REGISTER_METHOD(0x025F4910, app::String*, MonthDay, app::CultureData* this_ptr, int32_t calendar_id)
    IL2CPP_REGISTER_METHOD(0x025F4930, app::String*, DateSeparator, app::CultureData* this_ptr, int32_t calendar_id)
    IL2CPP_REGISTER_METHOD(0x025F4980, app::String*, GetDateSeparator, app::String* format)
    IL2CPP_REGISTER_METHOD(0x025F4B00, app::String*, GetSeparator, app::String* format, app::String* time_parts)
    IL2CPP_REGISTER_METHOD(0x025F4C30, int32_t, IndexOfTimePart, app::String* format, int32_t start_index, app::String* time_parts)
    IL2CPP_REGISTER_METHOD(0x025F4D30, app::String*, UnescapeNlsString, app::String* str, int32_t start, int32_t end)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::String__Array*, ReescapeWin32Strings, app::String__Array* array)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::String*, ReescapeWin32String, app::String* str)
    IL2CPP_REGISTER_METHOD(0x025F5090, void, GetNFIValues, app::CultureData* this_ptr, app::NumberFormatInfo* nfi)
    IL2CPP_REGISTER_METHOD(0x025F50F0, void, fill_number_data, app::NumberFormatInfo* nfi, int32_t number_index)
} // namespace app::classes::System::Globalization::CultureData
