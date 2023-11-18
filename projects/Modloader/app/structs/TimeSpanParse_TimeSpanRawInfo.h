#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSpanParse_TimeSpanRawInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSpanParse_TimeSpanRawInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSpanParse_TimeSpanRawInfo_DEFINED)
#include <Modloader/app/structs/TimeSpanFormat_FormatLiterals.h>
#include <Modloader/app/structs/TimeSpanParse_TTT__Enum.h>
#if defined(IL2CPP_STRUCT_TimeSpanParse_TTT__Enum_DEFINED) && defined(IL2CPP_STRUCT_TimeSpanFormat_FormatLiterals_DEFINED)
#define IL2CPP_STRUCT_TimeSpanParse_TimeSpanRawInfo_DEFINED
struct String__Array;
struct TimeSpanParse_TimeSpanToken__Array;
struct String;
struct TimeSpanParse_TimeSpanRawInfo {
    TimeSpanParse_TTT__Enum lastSeenTTT;

    int32_t tokenCount;
    int32_t SepCount;
    int32_t NumCount;
    struct String__Array* literals;
    struct TimeSpanParse_TimeSpanToken__Array* numbers;
    struct TimeSpanFormat_FormatLiterals m_posLoc;
    struct TimeSpanFormat_FormatLiterals m_negLoc;
    bool m_posLocInit;
    bool m_negLocInit;
    struct String* m_fullPosPattern;
    struct String* m_fullNegPattern;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeSpanParse_TimeSpanRawInfo_FWDDECL)
#define IL2CPP_STRUCT_TimeSpanParse_TimeSpanRawInfo_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/TimeSpanParse_TimeSpanToken__Array.h>
#endif
#undef IL2CPP_STRUCT_TimeSpanParse_TimeSpanRawInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSpanParse_TimeSpanRawInfo_DEFINED) && !defined(IL2CPP_STRUCT_TimeSpanParse_TimeSpanRawInfo_FWDDECL)
#include <Modloader/app/structs/TimeSpanParse_TimeSpanRawInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSpanParse_TimeSpanRawInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
