#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NewLocation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NewLocation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewLocation__Fields_DEFINED)
#define IL2CPP_STRUCT_NewLocation__Fields_DEFINED
struct IPredicates;
struct Mesh_1;
struct Behavior;
struct Double__Array;
struct Double__Array__Array;
struct __declspec(align(8)) NewLocation__Fields {
    struct IPredicates* predicates;
    struct Mesh_1* mesh;
    struct Behavior* behavior;
    struct Double__Array* petalx;
    struct Double__Array* petaly;
    struct Double__Array* petalr;
    struct Double__Array* wedges;
    struct Double__Array* initialConvexPoly;
    struct Double__Array* points_p;
    struct Double__Array* points_q;
    struct Double__Array* points_r;
    struct Double__Array* poly1;
    struct Double__Array* poly2;
    struct Double__Array__Array* polys;
};
#endif
#if !defined(IL2CPP_STRUCT_NewLocation__Fields_FWDDECL)
#define IL2CPP_STRUCT_NewLocation__Fields_FWDDECL
#include <Modloader/app/structs/Behavior.h>
#include <Modloader/app/structs/Double__Array.h>
#include <Modloader/app/structs/Double__Array__Array.h>
#include <Modloader/app/structs/IPredicates.h>
#include <Modloader/app/structs/Mesh_1.h>
#endif
#undef IL2CPP_STRUCT_NewLocation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewLocation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NewLocation__Fields_FWDDECL)
#include <Modloader/app/structs/NewLocation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NewLocation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
