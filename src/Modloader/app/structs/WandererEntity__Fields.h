#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WandererEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WandererEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererEntity__Fields_DEFINED)
#include <Modloader/app/structs/NPCEntity__Fields.h>
#include <Modloader/app/structs/TokkInteractionSpot__Enum.h>
#include <Modloader/app/structs/WandererEntity_TokkTurningPattern__Enum.h>
#if defined(IL2CPP_STRUCT_NPCEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_TokkInteractionSpot__Enum_DEFINED) && defined(IL2CPP_STRUCT_WandererEntity_TokkTurningPattern__Enum_DEFINED)
#define IL2CPP_STRUCT_WandererEntity__Fields_DEFINED
struct MessageProvider;
struct TalkVariant;
struct MoonTimeline;
struct GroundEntityLocomotion;
struct WandererIdleBehaviour;
struct SerializedIntUberState;
struct SerializedByteUberState;
struct EventTriggerAnimator;
struct WandererEntity__Fields {
    struct NPCEntity__Fields _;
    struct MessageProvider* m_lastFlavour;
    struct TalkVariant* m_lastIdleBreakup;
    TokkInteractionSpot__Enum InteractionSpot;

    WandererEntity_TokkTurningPattern__Enum TurningPattern;

    float DefaultDirection;
    struct MoonTimeline* SadToHappyRight;
    struct MoonTimeline* SadToHappyLeft;
    struct GroundEntityLocomotion* m_locomotion;
    struct WandererIdleBehaviour* m_idleBehaviour;
    struct TalkVariant* SadTalkVariantA;
    struct TalkVariant* SadTalkVariantB;
    struct TalkVariant* SadIdleBreakupA;
    struct TalkVariant* SadIdleBreakupB;
    struct TalkVariant* IdleBreakupA;
    struct TalkVariant* IdleBreakupB;
    struct TalkVariant* IdleA;
    struct TalkVariant* PresentIn;
    struct TalkVariant* PresentIdle;
    struct TalkVariant* PresentOut;
    struct SerializedIntUberState* NeedleQuestState;
    struct SerializedIntUberState* KeystoneQuestState;
    struct SerializedByteUberState* TokkState;
    struct EventTriggerAnimator* m_showRewardTrigger;
    struct EventTriggerAnimator* m_throwRewardTrigger;
    struct EventTriggerAnimator* m_collectRewardTrigger;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WandererEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_WandererEntity__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SerializedByteUberState.h>
#include <Modloader/app/structs/SerializedIntUberState.h>
#include <Modloader/app/structs/TalkVariant.h>
#include <Modloader/app/structs/WandererIdleBehaviour.h>
#endif
#undef IL2CPP_STRUCT_WandererEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WandererEntity__Fields_FWDDECL)
#include <Modloader/app/structs/WandererEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WandererEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
