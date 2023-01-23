#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBossEscapeBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBossEscapeBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossEscapeBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/EntityTask__Fields.h>
#include <Modloader/app/structs/SpiderBossEscapeBehaviour_State__Enum.h>
#if defined(IL2CPP_STRUCT_EntityTask__Fields_DEFINED) && defined(IL2CPP_STRUCT_BehaviourStatus__Enum_DEFINED) && defined(IL2CPP_STRUCT_SpiderBossEscapeBehaviour_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SpiderBossEscapeBehaviour__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct NewSetupStateController;
struct Condition_1;
struct RubberBandedValueProvider;
struct Transform;
struct List_1_Moon_ScalableAnimationPlayer_;
struct SpiderBossAttackCallMinions;
struct SpiderBossEntity;
struct SpiderBossEscapeBehaviour__Fields {
    struct EntityTask__Fields _;
    struct MoonTimeline* SpiderArena1EndTransitionTimeline;
    struct MoonTimeline* SpiderArena1EndTimeline;
    struct MoonTimeline* SpiderEscapeToMidTimeline;
    struct MoonTimeline* SpiderEscapeToTopTimeline;
    struct EventTriggerAnimator* CollapseArenaEvent;
    struct MoonTimeline* CollapseArenaTimeline;
    struct NewSetupStateController* CollapseArenaSetup;
    struct Condition_1* PlayerStartedEscapeCondition;
    struct Condition_1* PlayerEnteringTopTrunkCondition;
    struct EventTriggerAnimator* CollapseMidTrunkEvent;
    struct MoonTimeline* CollapseMidTrunkTimeline;
    struct NewSetupStateController* CollapseMidTrunkSetup;
    struct EventTriggerAnimator* CollapseTopTrunkEvent;
    struct MoonTimeline* CollapseTopTrunkTimeline;
    struct NewSetupStateController* CollapseTopTrunkSetup;
    struct RubberBandedValueProvider* RubberBanding;
    struct Transform* SpiderRubberBandPoint;
    struct List_1_Moon_ScalableAnimationPlayer_* m_scalableAnimations;
    bool PauseLocomotion;
    BehaviourStatus__Enum StatusWhileRunning;

    struct SpiderBossAttackCallMinions* SpiderBossAttackCallMinions;
    SpiderBossEscapeBehaviour_State__Enum m_state;

    struct SpiderBossEntity* m_spider;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBossEscapeBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBossEscapeBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/List_1_Moon_ScalableAnimationPlayer_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/NewSetupStateController.h>
#include <Modloader/app/structs/RubberBandedValueProvider.h>
#include <Modloader/app/structs/SpiderBossAttackCallMinions.h>
#include <Modloader/app/structs/SpiderBossEntity.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpiderBossEscapeBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossEscapeBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBossEscapeBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBossEscapeBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBossEscapeBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
