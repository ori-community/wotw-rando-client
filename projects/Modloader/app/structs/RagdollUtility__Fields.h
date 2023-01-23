#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RagdollUtility__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RagdollUtility__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RagdollUtility__Fields_DEFINED)
#include <Modloader/app/structs/AnimatorUpdateMode__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_AnimatorUpdateMode__Enum_DEFINED)
#define IL2CPP_STRUCT_RagdollUtility__Fields_DEFINED
struct IK;
struct Animator;
struct RagdollUtility_Rigidbone__Array;
struct RagdollUtility_Child__Array;
struct IK__Array;
struct Boolean__Array;
struct RagdollUtility__Fields {
    struct MonoBehaviour__Fields _;
    struct IK* ik;
    float ragdollToAnimationTime;
    bool applyIkOnRagdoll;
    float applyVelocity;
    float applyAngularVelocity;
    struct Animator* animator;
    struct RagdollUtility_Rigidbone__Array* rigidbones;
    struct RagdollUtility_Child__Array* children;
    bool enableRagdollFlag;
    AnimatorUpdateMode__Enum animatorUpdateMode;

    struct IK__Array* allIKComponents;
    struct Boolean__Array* fixTransforms;
    float ragdollWeight;
    float ragdollWeightV;
    bool fixedFrame;
    struct Boolean__Array* disabledIKComponents;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RagdollUtility__Fields_FWDDECL)
#define IL2CPP_STRUCT_RagdollUtility__Fields_FWDDECL
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/IK.h>
#include <Modloader/app/structs/IK__Array.h>
#include <Modloader/app/structs/RagdollUtility_Child__Array.h>
#include <Modloader/app/structs/RagdollUtility_Rigidbone__Array.h>
#endif
#undef IL2CPP_STRUCT_RagdollUtility__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RagdollUtility__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RagdollUtility__Fields_FWDDECL)
#include <Modloader/app/structs/RagdollUtility__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RagdollUtility__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
