#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScaleTweenAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScaleTweenAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScaleTweenAnimator__Fields_DEFINED)
#include <Modloader/app/structs/TransformAnimatorEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TransformAnimatorEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_ScaleTweenAnimator__Fields_DEFINED
struct MoonReference_1_UnityEngine_Transform_;
struct MoonFloat;
struct MoonReference_1_ITweenSpeedProvider_;
struct ITweenSpeedProvider;
struct MoveTowardsFloatTweenable;
struct ScaleTweenAnimator__Fields {
    struct TransformAnimatorEntity__Fields _;
    struct MoonReference_1_UnityEngine_Transform_* TargetTransform;
    struct MoonFloat* LocalStartUniformScale;
    struct MoonFloat* LocalEndUniformScale;
    struct MoonReference_1_ITweenSpeedProvider_* TweenSpeedProvider;
    struct ITweenSpeedProvider* m_tweenSpeed;
    float m_CurrentLocalStartScale;
    float m_CurrentLocalEndScale;
    float m_CurrentLocalScale;
    float m_time;
    bool m_isFinished;
    struct MoveTowardsFloatTweenable* m_tweenScale;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScaleTweenAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScaleTweenAnimator__Fields_FWDDECL
#include <Modloader/app/structs/ITweenSpeedProvider.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonReference_1_ITweenSpeedProvider_.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/MoveTowardsFloatTweenable.h>
#endif
#undef IL2CPP_STRUCT_ScaleTweenAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScaleTweenAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScaleTweenAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/ScaleTweenAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScaleTweenAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
