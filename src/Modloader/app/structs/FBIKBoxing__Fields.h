#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FBIKBoxing__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FBIKBoxing__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FBIKBoxing__Fields_DEFINED)
#include <Modloader/app/structs/FullBodyBipedEffector__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_FullBodyBipedEffector__Enum_DEFINED)
#define IL2CPP_STRUCT_FBIKBoxing__Fields_DEFINED
struct Transform;
struct FullBodyBipedIK;
struct AimIK;
struct AnimationCurve;
struct Animator;
struct FBIKBoxing__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* target;
    struct Transform* pin;
    struct FullBodyBipedIK* ik;
    struct AimIK* aim;
    float weight;
    FullBodyBipedEffector__Enum effector;

    struct AnimationCurve* aimWeight;
    struct Animator* animator;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FBIKBoxing__Fields_FWDDECL)
#define IL2CPP_STRUCT_FBIKBoxing__Fields_FWDDECL
#include <Modloader/app/structs/AimIK.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/FullBodyBipedIK.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_FBIKBoxing__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FBIKBoxing__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FBIKBoxing__Fields_FWDDECL)
#include <Modloader/app/structs/FBIKBoxing__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FBIKBoxing__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
