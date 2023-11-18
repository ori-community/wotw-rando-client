#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerInteractionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerInteractionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerInteractionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#include <Modloader/app/structs/MinerInteractionBehaviour_InteractionStates__Enum.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_MinerInteractionBehaviour_InteractionStates__Enum_DEFINED)
#define IL2CPP_STRUCT_MinerInteractionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct List_1_Moon_MoonReference_1__10;
struct MoonReference_1_IDialogCallbackNotifier_;
struct SetWorldEventAction;
struct IDialogCallbackNotifier;
struct List_1_IDialogCallbackNotifier_;
struct NPCEntity;
struct MinerInteractionBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonTimeline* IdleTimeline;
    struct MoonTimeline* IntroTimeline;
    struct MoonTimeline* FarewellTimeline;
    struct MoonTimeline* TransitionFromIdleTimeline;
    struct MoonTimeline* TransitionFromTalkTimeline;
    struct MoonTimeline* TransitionIdleToTalk;
    struct MoonTimeline* TransitionTalkToIdle;
    float TransitionInDuration;
    struct List_1_Moon_MoonReference_1__10* TalkDialogNodes;
    struct MoonReference_1_IDialogCallbackNotifier_* FarewellDialogNode;
    struct MoonReference_1_IDialogCallbackNotifier_* AgreedToMoveToNewSpotDialogNode;
    struct SetWorldEventAction* SetWorldEventToMoveToNewSpot;
    struct MoonTimeline* m_currentTimeline;
    MinerInteractionBehaviour_InteractionStates__Enum m_currentState;

    struct IDialogCallbackNotifier* m_resolvedFarewellNode;
    struct IDialogCallbackNotifier* m_resolvedAgreedToMoveToNewSpotNode;
    struct List_1_IDialogCallbackNotifier_* m_resolvedTalkNodes;
    MinerInteractionBehaviour_InteractionStates__Enum m_newState;

    struct NPCEntity* m_npcEntity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerInteractionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_MinerInteractionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/IDialogCallbackNotifier.h>
#include <Modloader/app/structs/List_1_IDialogCallbackNotifier_.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__10.h>
#include <Modloader/app/structs/MoonReference_1_IDialogCallbackNotifier_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/NPCEntity.h>
#include <Modloader/app/structs/SetWorldEventAction.h>
#endif
#undef IL2CPP_STRUCT_MinerInteractionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerInteractionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MinerInteractionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/MinerInteractionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerInteractionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
