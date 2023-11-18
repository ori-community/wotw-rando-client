#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JapaneseCalendar__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JapaneseCalendar__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JapaneseCalendar__StaticFields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_JapaneseCalendar__StaticFields_DEFINED
struct EraInfo__Array;
struct Calendar;
struct JapaneseCalendar__StaticFields {
    struct DateTime calendarMinValue;
    struct EraInfo__Array* japaneseEraInfo;
    struct Calendar* s_defaultInstance;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JapaneseCalendar__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_JapaneseCalendar__StaticFields_FWDDECL
#include <Modloader/app/structs/Calendar.h>
#include <Modloader/app/structs/EraInfo__Array.h>
#endif
#undef IL2CPP_STRUCT_JapaneseCalendar__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JapaneseCalendar__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_JapaneseCalendar__StaticFields_FWDDECL)
#include <Modloader/app/structs/JapaneseCalendar__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JapaneseCalendar__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
