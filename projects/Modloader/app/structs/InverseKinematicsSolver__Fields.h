#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InverseKinematicsSolver__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InverseKinematicsSolver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InverseKinematicsSolver__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_InverseKinematicsSolver__Fields_DEFINED
struct List_1_Moon_InverseKinematicsSolver_JointEntity_;
struct __declspec(align(8)) InverseKinematicsSolver__Fields {
    struct Vector3 Target;
    struct List_1_Moon_InverseKinematicsSolver_JointEntity_* JointEntities;
    bool IsDamping;
    float DampingMax;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InverseKinematicsSolver__Fields_FWDDECL)
#define IL2CPP_STRUCT_InverseKinematicsSolver__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_InverseKinematicsSolver_JointEntity_.h>
#endif
#undef IL2CPP_STRUCT_InverseKinematicsSolver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InverseKinematicsSolver__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InverseKinematicsSolver__Fields_FWDDECL)
#include <Modloader/app/structs/InverseKinematicsSolver__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InverseKinematicsSolver__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
