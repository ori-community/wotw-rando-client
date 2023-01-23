#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BipedIKvsAnimatorIK__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BipedIKvsAnimatorIK__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BipedIKvsAnimatorIK__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_BipedIKvsAnimatorIK__Fields_DEFINED
struct Animator;
struct BipedIK;
struct Transform;
struct BipedIKvsAnimatorIK__Fields {
    struct MonoBehaviour__Fields _;
    struct Animator* animator;
    struct BipedIK* bipedIK;
    struct Transform* lookAtTargetBiped;
    struct Transform* lookAtTargetAnimator;
    float lookAtWeight;
    float lookAtBodyWeight;
    float lookAtHeadWeight;
    float lookAtEyesWeight;
    float lookAtClampWeight;
    float lookAtClampWeightHead;
    float lookAtClampWeightEyes;
    struct Transform* footTargetBiped;
    struct Transform* footTargetAnimator;
    float footPositionWeight;
    float footRotationWeight;
    struct Transform* handTargetBiped;
    struct Transform* handTargetAnimator;
    float handPositionWeight;
    float handRotationWeight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BipedIKvsAnimatorIK__Fields_FWDDECL)
#define IL2CPP_STRUCT_BipedIKvsAnimatorIK__Fields_FWDDECL
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/BipedIK.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_BipedIKvsAnimatorIK__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BipedIKvsAnimatorIK__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BipedIKvsAnimatorIK__Fields_FWDDECL)
#include <Modloader/app/structs/BipedIKvsAnimatorIK__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BipedIKvsAnimatorIK__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
