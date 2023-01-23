#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SweepLine__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SweepLine__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SweepLine__Fields_DEFINED)
#define IL2CPP_STRUCT_SweepLine__Fields_DEFINED
struct IPredicates;
struct Mesh_1;
struct List_1_TriangleNet_Meshing_Algorithm_SweepLine_SplayNode_;
struct __declspec(align(8)) SweepLine__Fields {
    struct IPredicates* predicates;
    struct Mesh_1* mesh;
    double xminextreme;
    struct List_1_TriangleNet_Meshing_Algorithm_SweepLine_SplayNode_* splaynodes;
};
#endif
#if !defined(IL2CPP_STRUCT_SweepLine__Fields_FWDDECL)
#define IL2CPP_STRUCT_SweepLine__Fields_FWDDECL
#include <Modloader/app/structs/IPredicates.h>
#include <Modloader/app/structs/List_1_TriangleNet_Meshing_Algorithm_SweepLine_SplayNode_.h>
#include <Modloader/app/structs/Mesh_1.h>
#endif
#undef IL2CPP_STRUCT_SweepLine__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SweepLine__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SweepLine__Fields_FWDDECL)
#include <Modloader/app/structs/SweepLine__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SweepLine__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
