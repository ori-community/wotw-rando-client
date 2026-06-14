#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MotionAbsorbCharacter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MotionAbsorbCharacter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MotionAbsorbCharacter__Fields_DEFINED)
#include <Modloader/app/structs/AnimatorStateInfo.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_AnimatorStateInfo_DEFINED)
#define IL2CPP_STRUCT_MotionAbsorbCharacter__Fields_DEFINED
struct Animator;
struct MotionAbsorb;
struct Transform;
struct AnimationCurve;
struct Rigidbody;
struct MotionAbsorbCharacter__Fields {
    struct MonoBehaviour__Fields _;
    struct Animator* animator;
    struct MotionAbsorb* motionAbsorb;
    struct Transform* cube;
    float cubeRandomPosition;
    struct AnimationCurve* motionAbsorbWeight;
    struct Vector3 cubeDefaultPosition;
    struct AnimatorStateInfo info;
    struct Rigidbody* cubeRigidbody;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MotionAbsorbCharacter__Fields_FWDDECL)
#define IL2CPP_STRUCT_MotionAbsorbCharacter__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/MotionAbsorb.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MotionAbsorbCharacter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MotionAbsorbCharacter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MotionAbsorbCharacter__Fields_FWDDECL)
#include <Modloader/app/structs/MotionAbsorbCharacter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MotionAbsorbCharacter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
