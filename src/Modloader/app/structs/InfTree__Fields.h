#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InfTree__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InfTree__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InfTree__Fields_DEFINED)
#define IL2CPP_STRUCT_InfTree__Fields_DEFINED
struct Int32__Array;
struct __declspec(align(8)) InfTree__Fields {
    struct Int32__Array* hn;
    struct Int32__Array* v;
    struct Int32__Array* c;
    struct Int32__Array* r;
    struct Int32__Array* u;
    struct Int32__Array* x;
};
#endif
#if !defined(IL2CPP_STRUCT_InfTree__Fields_FWDDECL)
#define IL2CPP_STRUCT_InfTree__Fields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_InfTree__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InfTree__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InfTree__Fields_FWDDECL)
#include <Modloader/app/structs/InfTree__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InfTree__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
