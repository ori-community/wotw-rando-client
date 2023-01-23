#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationPlayer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationPlayer__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/AnimationPlayer_StopBehaviourType__Enum.h>
#include <Modloader/app/structs/Nullable_1_Moon_MoonAnimatorLayerName_.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_AnimationPlayer_StopBehaviourType__Enum_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Moon_MoonAnimatorLayerName__DEFINED)
#define IL2CPP_STRUCT_AnimationPlayer__Fields_DEFINED
struct MoonReference_1_MoonAnimator_;
struct MoonAnimation;
struct MoonReference_1_MoonAnimation_;
struct MoonFloat;
struct GameObject;
struct MoonAnimator;
struct Func_1_Boolean_;
struct AnimationPlayer__Fields {
    struct TimelineEntity__Fields _;
    AnimationPlayer_StopBehaviourType__Enum StopBehaviour;

    struct MoonReference_1_MoonAnimator_* Animator;
    struct MoonAnimation* Animation;
    struct MoonReference_1_MoonAnimation_* MoonAnimation;
    int32_t Priority;
    float Speed;
    struct MoonFloat* AdditiveWeight;
    bool ClipIsStartingPositionForPreview;
    bool IsRecordingPlayback;
    struct GameObject* PreviewRig;
    struct MoonAnimator* m_animator;
    struct MoonAnimation* m_animation;
    struct ActiveAnimationHandle m_activeAnimation;
    bool m_listeningToAnimatorEnableCallback;
    bool _ApplyRootMotionForPreview_k__BackingField;
    bool m_delayedAnimation;
    float m_time;
    struct Nullable_1_Moon_MoonAnimatorLayerName_ m_layerName;
    float m_additiveStrengthMultiplier;
    struct Func_1_Boolean_* m_continueCondition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationPlayer__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimationPlayer__Fields_FWDDECL
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonReference_1_MoonAnimation_.h>
#include <Modloader/app/structs/MoonReference_1_MoonAnimator_.h>
#endif
#undef IL2CPP_STRUCT_AnimationPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationPlayer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimationPlayer__Fields_FWDDECL)
#include <Modloader/app/structs/AnimationPlayer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationPlayer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
