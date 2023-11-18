#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSpanParse_TimeSpanToken_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSpanParse_TimeSpanToken_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSpanParse_TimeSpanToken_DEFINED)
#include <Modloader/app/structs/TimeSpanParse_TTT__Enum.h>
#if defined(IL2CPP_STRUCT_TimeSpanParse_TTT__Enum_DEFINED)
#define IL2CPP_STRUCT_TimeSpanParse_TimeSpanToken_DEFINED
struct String;
struct TimeSpanParse_TimeSpanToken {
    TimeSpanParse_TTT__Enum ttt;

    int32_t num;
    int32_t zeroes;
    struct String* sep;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeSpanParse_TimeSpanToken_FWDDECL)
#define IL2CPP_STRUCT_TimeSpanParse_TimeSpanToken_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TimeSpanParse_TimeSpanToken_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSpanParse_TimeSpanToken_DEFINED) && !defined(IL2CPP_STRUCT_TimeSpanParse_TimeSpanToken_FWDDECL)
#include <Modloader/app/structs/TimeSpanParse_TimeSpanToken.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSpanParse_TimeSpanToken.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
