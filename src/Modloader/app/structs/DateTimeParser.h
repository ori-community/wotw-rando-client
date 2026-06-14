#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DateTimeParser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DateTimeParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeParser_DEFINED)
#include <Modloader/app/structs/ParserTimeZone__Enum.h>
#if defined(IL2CPP_STRUCT_ParserTimeZone__Enum_DEFINED)
#define IL2CPP_STRUCT_DateTimeParser_DEFINED
struct Char__Array;
struct DateTimeParser {
    int32_t Year;
    int32_t Month;
    int32_t Day;
    int32_t Hour;
    int32_t Minute;
    int32_t Second;
    int32_t Fraction;
    int32_t ZoneHour;
    int32_t ZoneMinute;
    ParserTimeZone__Enum Zone;

    struct Char__Array* _text;
    int32_t _end;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DateTimeParser_FWDDECL)
#define IL2CPP_STRUCT_DateTimeParser_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#endif
#undef IL2CPP_STRUCT_DateTimeParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeParser_DEFINED) && !defined(IL2CPP_STRUCT_DateTimeParser_FWDDECL)
#include <Modloader/app/structs/DateTimeParser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DateTimeParser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
