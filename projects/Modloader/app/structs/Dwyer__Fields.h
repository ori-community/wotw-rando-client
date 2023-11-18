#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Dwyer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Dwyer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dwyer__Fields_DEFINED)
#define IL2CPP_STRUCT_Dwyer__Fields_DEFINED
struct IPredicates;
struct Vertex__Array;
struct Mesh_1;
struct __declspec(align(8)) Dwyer__Fields {
    struct IPredicates* predicates;
    bool UseDwyer;
    struct Vertex__Array* sortarray;
    struct Mesh_1* mesh;
};
#endif
#if !defined(IL2CPP_STRUCT_Dwyer__Fields_FWDDECL)
#define IL2CPP_STRUCT_Dwyer__Fields_FWDDECL
#include <Modloader/app/structs/IPredicates.h>
#include <Modloader/app/structs/Mesh_1.h>
#include <Modloader/app/structs/Vertex__Array.h>
#endif
#undef IL2CPP_STRUCT_Dwyer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dwyer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Dwyer__Fields_FWDDECL)
#include <Modloader/app/structs/Dwyer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Dwyer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
