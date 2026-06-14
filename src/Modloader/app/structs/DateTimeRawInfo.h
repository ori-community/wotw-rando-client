#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DateTimeRawInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DateTimeRawInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeRawInfo_DEFINED)
#include <Modloader/app/structs/DateTimeParse_TM__Enum.h>
#if defined(IL2CPP_STRUCT_DateTimeParse_TM__Enum_DEFINED)
#define IL2CPP_STRUCT_DateTimeRawInfo_DEFINED
struct DateTimeRawInfo {
    int32_t* num;
    int32_t numCount;
    int32_t month;
    int32_t year;
    int32_t dayOfWeek;
    int32_t era;
    DateTimeParse_TM__Enum timeMark;

    double fraction;
    bool hasSameDateAndTimeSeparators;
    bool timeZone;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DateTimeRawInfo_FWDDECL)
#define IL2CPP_STRUCT_DateTimeRawInfo_FWDDECL
#endif
#undef IL2CPP_STRUCT_DateTimeRawInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeRawInfo_DEFINED) && !defined(IL2CPP_STRUCT_DateTimeRawInfo_FWDDECL)
#include <Modloader/app/structs/DateTimeRawInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DateTimeRawInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
