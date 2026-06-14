#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSpanParse_TimeSpanResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSpanParse_TimeSpanResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSpanParse_TimeSpanResult_DEFINED)
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/TimeSpanParse_ParseFailureKind__Enum.h>
#include <Modloader/app/structs/TimeSpanParse_TimeSpanThrowStyle__Enum.h>
#if defined(IL2CPP_STRUCT_TimeSpan_DEFINED) && defined(IL2CPP_STRUCT_TimeSpanParse_TimeSpanThrowStyle__Enum_DEFINED) && defined(IL2CPP_STRUCT_TimeSpanParse_ParseFailureKind__Enum_DEFINED)
#define IL2CPP_STRUCT_TimeSpanParse_TimeSpanResult_DEFINED
struct String;
struct Object;
struct TimeSpanParse_TimeSpanResult {
    struct TimeSpan parsedTimeSpan;
    TimeSpanParse_TimeSpanThrowStyle__Enum throwStyle;

    TimeSpanParse_ParseFailureKind__Enum m_failure;

    struct String* m_failureMessageID;
    struct Object* m_failureMessageFormatArgument;
    struct String* m_failureArgumentName;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeSpanParse_TimeSpanResult_FWDDECL)
#define IL2CPP_STRUCT_TimeSpanParse_TimeSpanResult_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TimeSpanParse_TimeSpanResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSpanParse_TimeSpanResult_DEFINED) && !defined(IL2CPP_STRUCT_TimeSpanParse_TimeSpanResult_FWDDECL)
#include <Modloader/app/structs/TimeSpanParse_TimeSpanResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSpanParse_TimeSpanResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
