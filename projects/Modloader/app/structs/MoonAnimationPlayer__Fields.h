#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimationPlayer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimationPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimationPlayer__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/MoonAnimationPlayer_StopBehaviourType__Enum.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_MoonAnimationPlayer_StopBehaviourType__Enum_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_MoonAnimationPlayer__Fields_DEFINED
struct MoonReference_1_MoonAnimator_;
struct MoonReference_1_MoonAnimation_;
struct GameObject;
struct MoonAnimator;
struct MoonAnimationPlayer__Fields {
    struct TimelineEntity__Fields _;
    MoonAnimationPlayer_StopBehaviourType__Enum StopBehaviour;

    struct MoonReference_1_MoonAnimator_* Animator;
    struct MoonReference_1_MoonAnimation_* Animation;
    int32_t Priority;
    float Speed;
    struct GameObject* PreviewRig;
    struct MoonAnimator* m_animator;
    struct ActiveAnimationHandle m_activeAnimation;
    float m_additiveStrengthMultiplier;
    bool m_delayedAnimation;
    float m_time;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimationPlayer__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimationPlayer__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonReference_1_MoonAnimation_.h>
#include <Modloader/app/structs/MoonReference_1_MoonAnimator_.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimationPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimationPlayer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimationPlayer__Fields_FWDDECL)
#include <Modloader/app/structs/MoonAnimationPlayer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimationPlayer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
