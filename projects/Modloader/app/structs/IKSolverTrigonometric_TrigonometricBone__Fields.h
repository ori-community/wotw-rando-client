#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSolverTrigonometric_TrigonometricBone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSolverTrigonometric_TrigonometricBone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverTrigonometric_TrigonometricBone__Fields_DEFINED)
#include <Modloader/app/structs/IKSolver_Bone__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_IKSolver_Bone__Fields_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_IKSolverTrigonometric_TrigonometricBone__Fields_DEFINED
struct IKSolverTrigonometric_TrigonometricBone__Fields {
    struct IKSolver_Bone__Fields _;
    struct Quaternion targetToLocalSpace;
    struct Vector3 defaultLocalBendNormal;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKSolverTrigonometric_TrigonometricBone__Fields_FWDDECL)
#define IL2CPP_STRUCT_IKSolverTrigonometric_TrigonometricBone__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_IKSolverTrigonometric_TrigonometricBone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverTrigonometric_TrigonometricBone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IKSolverTrigonometric_TrigonometricBone__Fields_FWDDECL)
#include <Modloader/app/structs/IKSolverTrigonometric_TrigonometricBone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSolverTrigonometric_TrigonometricBone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
