#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatisticianInteractionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatisticianInteractionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticianInteractionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#include <Modloader/app/structs/StatisticianInteractionBehaviour_InteractionStates__Enum.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_StatisticianInteractionBehaviour_InteractionStates__Enum_DEFINED)
#define IL2CPP_STRUCT_StatisticianInteractionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct MoonReference_1_IDialogCallbackNotifier_;
struct IDialogCallbackNotifier;
struct NPCEntity;
struct StatisticianInteractionBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonTimeline* BushToFrontIdle;
    struct MoonTimeline* FrontIdleA;
    struct MoonTimeline* FrontTalkA;
    struct MoonTimeline* TalkAtoB;
    struct MoonTimeline* FrontIdleB;
    struct MoonTimeline* FrontTalkB;
    struct MoonTimeline* FrontToBush;
    struct MoonReference_1_IDialogCallbackNotifier_* ShowStatsDialogNode;
    struct MoonReference_1_IDialogCallbackNotifier_* FarewellDialogNode;
    struct MoonReference_1_IDialogCallbackNotifier_* OfferStatsDialogNode;
    struct MoonTimeline* m_currentTimeline;
    StatisticianInteractionBehaviour_InteractionStates__Enum m_currentState;

    struct IDialogCallbackNotifier* m_resolvedShowStatsNode;
    struct IDialogCallbackNotifier* m_resolvedFarewellNode;
    struct IDialogCallbackNotifier* m_resolvedOfferStatsNode;
    struct NPCEntity* m_npcEntity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatisticianInteractionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_StatisticianInteractionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/IDialogCallbackNotifier.h>
#include <Modloader/app/structs/MoonReference_1_IDialogCallbackNotifier_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/NPCEntity.h>
#endif
#undef IL2CPP_STRUCT_StatisticianInteractionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticianInteractionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StatisticianInteractionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/StatisticianInteractionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatisticianInteractionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
