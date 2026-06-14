#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CalendarData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CalendarData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CalendarData__Fields_DEFINED)
#define IL2CPP_STRUCT_CalendarData__Fields_DEFINED
struct String;
struct String__Array;
struct __declspec(align(8)) CalendarData__Fields {
    struct String* sNativeName;
    struct String__Array* saShortDates;
    struct String__Array* saYearMonths;
    struct String__Array* saLongDates;
    struct String* sMonthDay;
    struct String__Array* saEraNames;
    struct String__Array* saAbbrevEraNames;
    struct String__Array* saAbbrevEnglishEraNames;
    struct String__Array* saDayNames;
    struct String__Array* saAbbrevDayNames;
    struct String__Array* saSuperShortDayNames;
    struct String__Array* saMonthNames;
    struct String__Array* saAbbrevMonthNames;
    struct String__Array* saMonthGenitiveNames;
    struct String__Array* saAbbrevMonthGenitiveNames;
    struct String__Array* saLeapYearMonthNames;
    int32_t iTwoDigitYearMax;
    int32_t iCurrentEra;
    bool bUseUserOverrides;
};
#endif
#if !defined(IL2CPP_STRUCT_CalendarData__Fields_FWDDECL)
#define IL2CPP_STRUCT_CalendarData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_CalendarData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CalendarData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CalendarData__Fields_FWDDECL)
#include <Modloader/app/structs/CalendarData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CalendarData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
