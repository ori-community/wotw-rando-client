#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DateTimeFormat__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DateTimeFormat__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeFormat__StaticFields_DEFINED)
#include <Modloader/app/structs/TimeSpan.h>
#if defined(IL2CPP_STRUCT_TimeSpan_DEFINED)
#define IL2CPP_STRUCT_DateTimeFormat__StaticFields_DEFINED
struct Char__Array;
struct String__Array;
struct DateTimeFormat__StaticFields {
    struct TimeSpan NullOffset;
    struct Char__Array* allStandardFormats;
    struct String__Array* fixedNumberFormats;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DateTimeFormat__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_DateTimeFormat__StaticFields_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_DateTimeFormat__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeFormat__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_DateTimeFormat__StaticFields_FWDDECL)
#include <Modloader/app/structs/DateTimeFormat__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DateTimeFormat__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
