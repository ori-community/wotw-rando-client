#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StaticTree__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StaticTree__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaticTree__StaticFields_DEFINED)
#define IL2CPP_STRUCT_StaticTree__StaticFields_DEFINED
struct Int16__Array;
struct StaticTree;
struct StaticTree__StaticFields {
    struct Int16__Array* lengthAndLiteralsTreeCodes;
    struct Int16__Array* distTreeCodes;
    struct StaticTree* Literals;
    struct StaticTree* Distances;
    struct StaticTree* BitLengths;
};
#endif
#if !defined(IL2CPP_STRUCT_StaticTree__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_StaticTree__StaticFields_FWDDECL
#include <Modloader/app/structs/Int16__Array.h>
#include <Modloader/app/structs/StaticTree.h>
#endif
#undef IL2CPP_STRUCT_StaticTree__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaticTree__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_StaticTree__StaticFields_FWDDECL)
#include <Modloader/app/structs/StaticTree__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StaticTree__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
