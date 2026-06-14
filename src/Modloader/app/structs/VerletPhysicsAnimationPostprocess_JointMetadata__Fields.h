#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess_JointMetadata__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess_JointMetadata__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess_JointMetadata__Fields_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess_JointMetadata__Fields_DEFINED
struct Transform;
struct __declspec(align(8)) VerletPhysicsAnimationPostprocess_JointMetadata__Fields {
    struct Transform* InstanceTransform;
    bool HasInstanceTransform;
    struct Vector3 InstancePosition;
    struct Vector3 InstanceRootLocalPosition;
    struct Quaternion AnimationOutputJointRotation;
    struct Vector3 AnimationOutputJointPosition;
    struct Quaternion ResultLocalRotation;
    struct Quaternion CachedLocalRotation;
    struct Quaternion PreviousLocalRotation;
    int32_t VerletPointIndex;
    int32_t VerletLinkIndex;
    struct Vector3 Axis;
    struct Vector3 OriginalLocalPosition;
    struct Quaternion OriginalLocalRotation;
    float TurbulenceOffset;
    struct Vector3 AxisDirection;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess_JointMetadata__Fields_FWDDECL)
#define IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess_JointMetadata__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess_JointMetadata__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess_JointMetadata__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VerletPhysicsAnimationPostprocess_JointMetadata__Fields_FWDDECL)
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess_JointMetadata__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletPhysicsAnimationPostprocess_JointMetadata__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
