#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSolverTrigonometric__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSolverTrigonometric__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverTrigonometric__Fields_DEFINED)
#include <Modloader/app/structs/IKSolver__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_IKSolver__Fields_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_IKSolverTrigonometric__Fields_DEFINED
struct Transform;
struct IKSolverTrigonometric_TrigonometricBone;
struct IKSolverTrigonometric__Fields {
    struct IKSolver__Fields _;
    struct Transform* target;
    float IKRotationWeight;
    struct Quaternion IKRotation;
    struct Vector3 bendNormal;
    struct IKSolverTrigonometric_TrigonometricBone* bone1;
    struct IKSolverTrigonometric_TrigonometricBone* bone2;
    struct IKSolverTrigonometric_TrigonometricBone* bone3;
    bool freezeBone1;
    struct Vector3 weightIKPosition;
    bool directHierarchy;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKSolverTrigonometric__Fields_FWDDECL)
#define IL2CPP_STRUCT_IKSolverTrigonometric__Fields_FWDDECL
#include <Modloader/app/structs/IKSolverTrigonometric_TrigonometricBone.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_IKSolverTrigonometric__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverTrigonometric__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IKSolverTrigonometric__Fields_FWDDECL)
#include <Modloader/app/structs/IKSolverTrigonometric__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSolverTrigonometric__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
