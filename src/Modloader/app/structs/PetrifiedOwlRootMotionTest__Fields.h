#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlRootMotionTest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlRootMotionTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlRootMotionTest__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlRootMotionTest__Fields_DEFINED
struct Animator;
struct MoonAnimator;
struct MoonAnimation;
struct PetrifiedOwlRootMotionTest__Fields {
    struct MonoBehaviour__Fields _;
    struct Animator* UnityAnimator;
    struct MoonAnimator* MoonAnimator;
    struct MoonAnimation* AnimationToPlay;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlRootMotionTest__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlRootMotionTest__Fields_FWDDECL
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimator.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlRootMotionTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlRootMotionTest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlRootMotionTest__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlRootMotionTest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlRootMotionTest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
