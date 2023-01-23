#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestNodeWisps__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestNodeWisps__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestNodeWisps__Fields_DEFINED)
#include <Modloader/app/structs/InteractionNode__Fields.h>
#if defined(IL2CPP_STRUCT_InteractionNode__Fields_DEFINED)
#define IL2CPP_STRUCT_QuestNodeWisps__Fields_DEFINED
struct QuestNodeSetup;
struct MoonTimeline;
struct NPCEventTriggerAnimator;
struct NPCEntity;
struct QuestNodeSetup_QuestInteractionSetup;
struct QuestNodeSetup_QuestInteractionSet;
struct QuestNodeSetup_QuestInteraction;
struct QuestReward;
struct QuestNodeWisps__Fields {
    struct InteractionNode__Fields _;
    struct QuestNodeSetup* QuestSetup;
    struct MoonTimeline* _IntroTimeline_k__BackingField;
    struct MoonTimeline* _TalkTimeline_k__BackingField;
    struct MoonTimeline* _RewardTimeline_k__BackingField;
    struct NPCEventTriggerAnimator* _ShowRewardTrigger_k__BackingField;
    struct NPCEventTriggerAnimator* _ThrowRewardTrigger_k__BackingField;
    struct NPCEventTriggerAnimator* _CollectRewardTrigger_k__BackingField;
    struct NPCEntity* _NpcEntity_k__BackingField;
    struct MoonTimeline* m_currentTimeline;
    struct QuestNodeSetup_QuestInteractionSetup* m_currentQuestInteractionSetup;
    struct QuestNodeSetup_QuestInteractionSet* m_currentQuestInteractionSet;
    struct QuestNodeSetup_QuestInteraction* m_currentQuestInteraction;
    bool m_hasReward;
    struct QuestReward* m_selectedQuestReward;
    struct QuestNodeSetup_QuestInteractionSetup* m_selectedQuestInteractionSetup;
    struct QuestNodeSetup_QuestInteraction* m_selectedQuestInteraction;
    struct QuestNodeSetup_QuestInteraction* m_previousQuestInteraction;
    bool m_waitingForRewardMessage;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestNodeWisps__Fields_FWDDECL)
#define IL2CPP_STRUCT_QuestNodeWisps__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/NPCEntity.h>
#include <Modloader/app/structs/NPCEventTriggerAnimator.h>
#include <Modloader/app/structs/QuestNodeSetup.h>
#include <Modloader/app/structs/QuestNodeSetup_QuestInteraction.h>
#include <Modloader/app/structs/QuestNodeSetup_QuestInteractionSet.h>
#include <Modloader/app/structs/QuestNodeSetup_QuestInteractionSetup.h>
#include <Modloader/app/structs/QuestReward.h>
#endif
#undef IL2CPP_STRUCT_QuestNodeWisps__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestNodeWisps__Fields_DEFINED) && !defined(IL2CPP_STRUCT_QuestNodeWisps__Fields_FWDDECL)
#include <Modloader/app/structs/QuestNodeWisps__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestNodeWisps__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
