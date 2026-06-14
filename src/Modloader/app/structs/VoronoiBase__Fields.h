#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VoronoiBase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VoronoiBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VoronoiBase__Fields_DEFINED)
#include <Modloader/app/structs/DcelMesh__Fields.h>
#if defined(IL2CPP_STRUCT_DcelMesh__Fields_DEFINED)
#define IL2CPP_STRUCT_VoronoiBase__Fields_DEFINED
struct IPredicates;
struct IVoronoiFactory;
struct List_1_TriangleNet_Topology_DCEL_HalfEdge_;
struct VoronoiBase__Fields {
    struct DcelMesh__Fields _;
    struct IPredicates* predicates;
    struct IVoronoiFactory* factory;
    struct List_1_TriangleNet_Topology_DCEL_HalfEdge_* rays;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VoronoiBase__Fields_FWDDECL)
#define IL2CPP_STRUCT_VoronoiBase__Fields_FWDDECL
#include <Modloader/app/structs/IPredicates.h>
#include <Modloader/app/structs/IVoronoiFactory.h>
#include <Modloader/app/structs/List_1_TriangleNet_Topology_DCEL_HalfEdge_.h>
#endif
#undef IL2CPP_STRUCT_VoronoiBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VoronoiBase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VoronoiBase__Fields_FWDDECL)
#include <Modloader/app/structs/VoronoiBase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VoronoiBase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
