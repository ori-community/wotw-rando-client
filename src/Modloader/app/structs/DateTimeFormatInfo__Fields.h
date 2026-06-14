#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DateTimeFormatInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DateTimeFormatInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeFormatInfo__Fields_DEFINED)
#include <Modloader/app/structs/DateTimeFormatFlags__Enum.h>
#if defined(IL2CPP_STRUCT_DateTimeFormatFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_DateTimeFormatInfo__Fields_DEFINED
struct CultureData;
struct String;
struct CompareInfo;
struct CultureInfo;
struct Calendar;
struct String__Array;
struct Int32__Array;
struct TokenHashValue__Array;
struct __declspec(align(8)) DateTimeFormatInfo__Fields {
    struct CultureData* m_cultureData;
    struct String* m_name;
    struct String* m_langName;
    struct CompareInfo* m_compareInfo;
    struct CultureInfo* m_cultureInfo;
    struct String* amDesignator;
    struct String* pmDesignator;
    struct String* dateSeparator;
    struct String* generalShortTimePattern;
    struct String* generalLongTimePattern;
    struct String* timeSeparator;
    struct String* monthDayPattern;
    struct String* dateTimeOffsetPattern;
    struct Calendar* calendar;
    int32_t firstDayOfWeek;
    int32_t calendarWeekRule;
    struct String* fullDateTimePattern;
    struct String__Array* abbreviatedDayNames;
    struct String__Array* m_superShortDayNames;
    struct String__Array* dayNames;
    struct String__Array* abbreviatedMonthNames;
    struct String__Array* monthNames;
    struct String__Array* genitiveMonthNames;
    struct String__Array* m_genitiveAbbreviatedMonthNames;
    struct String__Array* leapYearMonthNames;
    struct String* longDatePattern;
    struct String* shortDatePattern;
    struct String* yearMonthPattern;
    struct String* longTimePattern;
    struct String* shortTimePattern;
    struct String__Array* allYearMonthPatterns;
    struct String__Array* allShortDatePatterns;
    struct String__Array* allLongDatePatterns;
    struct String__Array* allShortTimePatterns;
    struct String__Array* allLongTimePatterns;
    struct String__Array* m_eraNames;
    struct String__Array* m_abbrevEraNames;
    struct String__Array* m_abbrevEnglishEraNames;
    struct Int32__Array* optionalCalendars;
    bool m_isReadOnly;
    DateTimeFormatFlags__Enum formatFlags;

    int32_t CultureID;
    bool m_useUserOverride;
    bool bUseCalendarInfo;
    int32_t nDataItem;
    bool m_isDefaultCalendar;
    struct String__Array* m_dateWords;
    struct String* m_fullTimeSpanPositivePattern;
    struct String* m_fullTimeSpanNegativePattern;
    struct TokenHashValue__Array* m_dtfiTokenHash;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DateTimeFormatInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_DateTimeFormatInfo__Fields_FWDDECL
#include <Modloader/app/structs/Calendar.h>
#include <Modloader/app/structs/CompareInfo.h>
#include <Modloader/app/structs/CultureData.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/TokenHashValue__Array.h>
#endif
#undef IL2CPP_STRUCT_DateTimeFormatInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeFormatInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DateTimeFormatInfo__Fields_FWDDECL)
#include <Modloader/app/structs/DateTimeFormatInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DateTimeFormatInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
