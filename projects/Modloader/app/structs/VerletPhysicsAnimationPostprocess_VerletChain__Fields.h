#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess_VerletChain__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess_VerletChain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess_VerletChain__Fields_DEFINED)
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED) && defined(IL2CPP_STRUCT_Matrix4x4_DEFINED)
#define IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess_VerletChain__Fields_DEFINED
struct VerletBodyIndexed;
struct List_1_Moon_VerletPhysicsAnimationPostprocess_JointMetadata_;
struct __declspec(align(8)) VerletPhysicsAnimationPostprocess_VerletChain__Fields {
    struct Vector3 TurbulenceForce;
    bool HasTurbulenceForce;
    struct Quaternion RootParentRotation;
    struct Quaternion RootWorldRotation;
    struct Matrix4x4 RootWorldMatrix;
    struct Matrix4x4 RootLocalMatrix;
    struct VerletBodyIndexed* Body;
    struct List_1_Moon_VerletPhysicsAnimationPostprocess_JointMetadata_* Joints;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess_VerletChain__Fields_FWDDECL)
#define IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess_VerletChain__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_VerletPhysicsAnimationPostprocess_JointMetadata_.h>
#include <Modloader/app/structs/VerletBodyIndexed.h>
#endif
#undef IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess_VerletChain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess_VerletChain__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess_VerletChain__Fields_FWDDECL)
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess_VerletChain__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess_VerletChain__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
