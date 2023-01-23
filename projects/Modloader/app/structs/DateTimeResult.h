#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DateTimeResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DateTimeResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeResult_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/ParseFailureKind__Enum.h>
#include <Modloader/app/structs/ParseFlags__Enum.h>
#include <Modloader/app/structs/TimeSpan.h>
#if defined(IL2CPP_STRUCT_ParseFlags__Enum_DEFINED) && defined(IL2CPP_STRUCT_TimeSpan_DEFINED) && defined(IL2CPP_STRUCT_DateTime_DEFINED) && defined(IL2CPP_STRUCT_ParseFailureKind__Enum_DEFINED)
#define IL2CPP_STRUCT_DateTimeResult_DEFINED
struct Calendar;
struct String;
struct Object;
struct DateTimeResult {
    int32_t Year;
    int32_t Month;
    int32_t Day;
    int32_t Hour;
    int32_t Minute;
    int32_t Second;
    double fraction;
    int32_t era;
    ParseFlags__Enum flags;

    struct TimeSpan timeZoneOffset;
    struct Calendar* calendar;
    struct DateTime parsedDate;
    ParseFailureKind__Enum failure;

    struct String* failureMessageID;
    struct Object* failureMessageFormatArgument;
    struct String* failureArgumentName;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DateTimeResult_FWDDECL)
#define IL2CPP_STRUCT_DateTimeResult_FWDDECL
#include <Modloader/app/structs/Calendar.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DateTimeResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeResult_DEFINED) && !defined(IL2CPP_STRUCT_DateTimeResult_FWDDECL)
#include <Modloader/app/structs/DateTimeResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DateTimeResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
