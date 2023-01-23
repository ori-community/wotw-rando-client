#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeletonAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeletonAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeletonAnimator__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_SkeletonAnimator__Fields_DEFINED
struct ClipAnimation;
struct GameObject;
struct MoonAnimator;
struct SkeletonAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct ClipAnimation* ClipAnimation;
    struct GameObject* AnimatedObject;
    float Length;
    struct MoonAnimator* m_moonAnimator;
    bool m_started;
    struct ActiveAnimationHandle m_animationState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeletonAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkeletonAnimator__Fields_FWDDECL
#include <Modloader/app/structs/ClipAnimation.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimator.h>
#endif
#undef IL2CPP_STRUCT_SkeletonAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeletonAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkeletonAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/SkeletonAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeletonAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
