#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InfTree__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InfTree__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InfTree__StaticFields_DEFINED)
#define IL2CPP_STRUCT_InfTree__StaticFields_DEFINED
struct Int32__Array;
struct InfTree__StaticFields {
    struct Int32__Array* fixed_tl;
    struct Int32__Array* fixed_td;
    struct Int32__Array* cplens;
    struct Int32__Array* cplext;
    struct Int32__Array* cpdist;
    struct Int32__Array* cpdext;
};
#endif
#if !defined(IL2CPP_STRUCT_InfTree__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_InfTree__StaticFields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_InfTree__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InfTree__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_InfTree__StaticFields_FWDDECL)
#include <Modloader/app/structs/InfTree__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InfTree__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
