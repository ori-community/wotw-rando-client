#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSpanFormat_FormatLiterals_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSpanFormat_FormatLiterals_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSpanFormat_FormatLiterals_DEFINED)
#define IL2CPP_STRUCT_TimeSpanFormat_FormatLiterals_DEFINED
struct String;
struct String__Array;
struct TimeSpanFormat_FormatLiterals {
    struct String* AppCompatLiteral;
    int32_t dd;
    int32_t hh;
    int32_t mm;
    int32_t ss;
    int32_t ff;
    struct String__Array* literals;
};
#endif
#if !defined(IL2CPP_STRUCT_TimeSpanFormat_FormatLiterals_FWDDECL)
#define IL2CPP_STRUCT_TimeSpanFormat_FormatLiterals_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_TimeSpanFormat_FormatLiterals_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSpanFormat_FormatLiterals_DEFINED) && !defined(IL2CPP_STRUCT_TimeSpanFormat_FormatLiterals_FWDDECL)
#include <Modloader/app/structs/TimeSpanFormat_FormatLiterals.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSpanFormat_FormatLiterals.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
