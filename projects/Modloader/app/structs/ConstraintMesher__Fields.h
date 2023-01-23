#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConstraintMesher__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConstraintMesher__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintMesher__Fields_DEFINED)
#define IL2CPP_STRUCT_ConstraintMesher__Fields_DEFINED
struct IPredicates;
struct Mesh_1;
struct Behavior;
struct TriangleLocator;
struct List_1_TriangleNet_Topology_Triangle_;
struct ILog_1_LogItem_;
struct __declspec(align(8)) ConstraintMesher__Fields {
    struct IPredicates* predicates;
    struct Mesh_1* mesh;
    struct Behavior* behavior;
    struct TriangleLocator* locator;
    struct List_1_TriangleNet_Topology_Triangle_* viri;
    struct ILog_1_LogItem_* logger;
};
#endif
#if !defined(IL2CPP_STRUCT_ConstraintMesher__Fields_FWDDECL)
#define IL2CPP_STRUCT_ConstraintMesher__Fields_FWDDECL
#include <Modloader/app/structs/Behavior.h>
#include <Modloader/app/structs/ILog_1_LogItem_.h>
#include <Modloader/app/structs/IPredicates.h>
#include <Modloader/app/structs/List_1_TriangleNet_Topology_Triangle_.h>
#include <Modloader/app/structs/Mesh_1.h>
#include <Modloader/app/structs/TriangleLocator.h>
#endif
#undef IL2CPP_STRUCT_ConstraintMesher__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConstraintMesher__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConstraintMesher__Fields_FWDDECL)
#include <Modloader/app/structs/ConstraintMesher__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConstraintMesher__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
