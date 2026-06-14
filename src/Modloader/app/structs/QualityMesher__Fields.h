#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QualityMesher__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QualityMesher__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QualityMesher__Fields_DEFINED)
#define IL2CPP_STRUCT_QualityMesher__Fields_DEFINED
struct IPredicates;
struct Queue_1_TriangleNet_Meshing_Data_BadSubseg_;
struct BadTriQueue;
struct Mesh_1;
struct Behavior;
struct NewLocation;
struct ILog_1_LogItem_;
struct Triangle;
struct __declspec(align(8)) QualityMesher__Fields {
    struct IPredicates* predicates;
    struct Queue_1_TriangleNet_Meshing_Data_BadSubseg_* badsubsegs;
    struct BadTriQueue* queue;
    struct Mesh_1* mesh;
    struct Behavior* behavior;
    struct NewLocation* newLocation;
    struct ILog_1_LogItem_* logger;
    struct Triangle* newvertex_tri;
};
#endif
#if !defined(IL2CPP_STRUCT_QualityMesher__Fields_FWDDECL)
#define IL2CPP_STRUCT_QualityMesher__Fields_FWDDECL
#include <Modloader/app/structs/BadTriQueue.h>
#include <Modloader/app/structs/Behavior.h>
#include <Modloader/app/structs/ILog_1_LogItem_.h>
#include <Modloader/app/structs/IPredicates.h>
#include <Modloader/app/structs/Mesh_1.h>
#include <Modloader/app/structs/NewLocation.h>
#include <Modloader/app/structs/Queue_1_TriangleNet_Meshing_Data_BadSubseg_.h>
#include <Modloader/app/structs/Triangle.h>
#endif
#undef IL2CPP_STRUCT_QualityMesher__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QualityMesher__Fields_DEFINED) && !defined(IL2CPP_STRUCT_QualityMesher__Fields_FWDDECL)
#include <Modloader/app/structs/QualityMesher__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QualityMesher__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
