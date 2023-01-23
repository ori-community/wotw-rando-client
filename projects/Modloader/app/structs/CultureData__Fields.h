#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CultureData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CultureData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CultureData__Fields_DEFINED)
#define IL2CPP_STRUCT_CultureData__Fields_DEFINED
struct String;
struct String__Array;
struct Int32__Array;
struct CalendarData__Array;
struct __declspec(align(8)) CultureData__Fields {
    struct String* sAM1159;
    struct String* sPM2359;
    struct String* sTimeSeparator;
    struct String__Array* saLongTimes;
    struct String__Array* saShortTimes;
    int32_t iFirstDayOfWeek;
    int32_t iFirstWeekOfYear;
    struct Int32__Array* waCalendars;
    struct CalendarData__Array* calendars;
    struct String* sISO639Language;
    struct String* sRealName;
    bool bUseOverrides;
    int32_t calendarId;
    int32_t numberIndex;
    int32_t iDefaultAnsiCodePage;
    int32_t iDefaultOemCodePage;
    int32_t iDefaultMacCodePage;
    int32_t iDefaultEbcdicCodePage;
    bool isRightToLeft;
    struct String* sListSeparator;
};
#endif
#if !defined(IL2CPP_STRUCT_CultureData__Fields_FWDDECL)
#define IL2CPP_STRUCT_CultureData__Fields_FWDDECL
#include <Modloader/app/structs/CalendarData__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_CultureData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CultureData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CultureData__Fields_FWDDECL)
#include <Modloader/app/structs/CultureData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CultureData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
