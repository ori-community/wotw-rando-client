#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TermInfoDriver__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TermInfoDriver__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TermInfoDriver__StaticFields_DEFINED)
#define IL2CPP_STRUCT_TermInfoDriver__StaticFields_DEFINED
struct String__Array;
struct Int32__Array;
struct TermInfoDriver__StaticFields {
    int32_t* native_terminal_size;
    int32_t terminal_size;
    struct String__Array* locations;
    struct Int32__Array* _consoleColorToAnsiCode;
};
#endif
#if !defined(IL2CPP_STRUCT_TermInfoDriver__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_TermInfoDriver__StaticFields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_TermInfoDriver__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TermInfoDriver__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_TermInfoDriver__StaticFields_FWDDECL)
#include <Modloader/app/structs/TermInfoDriver__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TermInfoDriver__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
