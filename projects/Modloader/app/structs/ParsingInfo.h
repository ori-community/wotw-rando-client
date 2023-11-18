#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParsingInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParsingInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParsingInfo_DEFINED)
#include <Modloader/app/structs/DateTimeParse_TM__Enum.h>
#if defined(IL2CPP_STRUCT_DateTimeParse_TM__Enum_DEFINED)
#define IL2CPP_STRUCT_ParsingInfo_DEFINED
struct Calendar;
struct DateTimeParse_MatchNumberDelegate;
struct ParsingInfo {
    struct Calendar* calendar;
    int32_t dayOfWeek;
    DateTimeParse_TM__Enum timeMark;

    bool fUseHour12;
    bool fUseTwoDigitYear;
    bool fAllowInnerWhite;
    bool fAllowTrailingWhite;
    bool fCustomNumberParser;
    struct DateTimeParse_MatchNumberDelegate* parseNumberDelegate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParsingInfo_FWDDECL)
#define IL2CPP_STRUCT_ParsingInfo_FWDDECL
#include <Modloader/app/structs/Calendar.h>
#include <Modloader/app/structs/DateTimeParse_MatchNumberDelegate.h>
#endif
#undef IL2CPP_STRUCT_ParsingInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParsingInfo_DEFINED) && !defined(IL2CPP_STRUCT_ParsingInfo_FWDDECL)
#include <Modloader/app/structs/ParsingInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParsingInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
