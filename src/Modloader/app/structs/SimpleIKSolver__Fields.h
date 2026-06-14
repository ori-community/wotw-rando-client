#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleIKSolver__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleIKSolver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleIKSolver__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SimpleIKSolver__Fields_DEFINED
struct SimpleIKSolver_JointEntity__Array;
struct SimpleIKSolver__Fields {
    struct MonoBehaviour__Fields _;
    bool IsActive;
    struct Vector3 TargetPosition;
    struct SimpleIKSolver_JointEntity__Array* JointEntities;
    bool IsDamping;
    float DampingMax;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleIKSolver__Fields_FWDDECL)
#define IL2CPP_STRUCT_SimpleIKSolver__Fields_FWDDECL
#include <Modloader/app/structs/SimpleIKSolver_JointEntity__Array.h>
#endif
#undef IL2CPP_STRUCT_SimpleIKSolver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleIKSolver__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SimpleIKSolver__Fields_FWDDECL)
#include <Modloader/app/structs/SimpleIKSolver__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleIKSolver__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
