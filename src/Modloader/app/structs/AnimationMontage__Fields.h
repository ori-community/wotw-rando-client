#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationMontage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationMontage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationMontage__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_AnimationMontage__Fields_DEFINED
struct MoonAnimation;
struct GameObject;
struct String;
struct List_1_Moon_AnimationMontage_Entry_;
struct MoonAnimator;
struct Action;
struct List_1_SoundPlayer_;
struct Dictionary_2_System_String_Moon_MoonAnimator_;
struct Dictionary_2_System_String_List_1_Moon_IAnimatedValueListener_;
struct Dictionary_2_System_String_IMontageEventProvider_;
struct List_1_Moon_AnimationMontage_TimelineEventSubscription_;
struct Transform;
struct AnimationMontage__Fields {
    struct BaseAnimator__Fields _;
    struct MoonAnimation* Animation;
    struct GameObject* PreviewRig;
    struct String* ParentedMontageSocketPath;
    struct GameObject* EventHandlerObject;
    int32_t AnimationPriority;
    struct List_1_Moon_AnimationMontage_Entry_* m_entries;
    struct MoonAnimator* m_currentTarget;
    struct ActiveAnimationHandle m_currentAnimationState;
    struct Action* m_currentStopPlayingAction;
    bool m_animationPlaying;
    float m_currentTime;
    struct List_1_SoundPlayer_* m_activeSoundPlayers;
    struct Dictionary_2_System_String_Moon_MoonAnimator_* m_subMontagesByName;
    struct Dictionary_2_System_String_List_1_Moon_IAnimatedValueListener_* m_animatedValueListeners;
    struct Dictionary_2_System_String_IMontageEventProvider_* m_eventProviders;
    struct List_1_Moon_AnimationMontage_TimelineEventSubscription_* m_eventSubscriptions;
    bool m_isParented;
    struct Transform* m_initialTargetParent;
    struct Vector3 m_initialTargetScale;
    struct Vector3 m_initialTargetPosition;
    struct Quaternion m_initialTargetRotation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationMontage__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimationMontage__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Dictionary_2_System_String_IMontageEventProvider_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_List_1_Moon_IAnimatedValueListener_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_Moon_MoonAnimator_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_Moon_AnimationMontage_Entry_.h>
#include <Modloader/app/structs/List_1_Moon_AnimationMontage_TimelineEventSubscription_.h>
#include <Modloader/app/structs/List_1_SoundPlayer_.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_AnimationMontage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationMontage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimationMontage__Fields_FWDDECL)
#include <Modloader/app/structs/AnimationMontage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationMontage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
