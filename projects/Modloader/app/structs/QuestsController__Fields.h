#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestsController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestsController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestsController__Fields_DEFINED)
#include <Modloader/app/structs/GuidOwner__Fields.h>
#if defined(IL2CPP_STRUCT_GuidOwner__Fields_DEFINED)
#define IL2CPP_STRUCT_QuestsController__Fields_DEFINED
struct List_1_Quest_;
struct SoundProvider;
struct MoonTimeline;
struct ShowInteractiveTextEntity;
struct Event_1;
struct List_1_QuestsController_QuestStateToIndexRemap_;
struct Dictionary_2_MoonGuid_RuntimeQuest_;
struct Dictionary_2_Moon_IGenericUberState_Quest_;
struct RuntimeQuest;
struct Quest;
struct MessageBox;
struct Dictionary_2_Moon_SerializedIntUberState_QuestsController_QuestStateToIndexRemap_;
struct Queue_1_QuestsController_QueuedQuestMessage_;
struct IUberState__Array;
struct QuestsController__Fields {
    struct GuidOwner__Fields _;
    struct List_1_Quest_* Quests;
    struct SoundProvider* SetActiveQuestSoundProvider;
    struct MoonTimeline* QuestItemRewardTimeline;
    struct ShowInteractiveTextEntity* QuestItemRewardTextEntity;
    struct Event_1* AssignSoundEvent;
    struct Event_1* UpdateSoundEvent;
    struct Event_1* CompleteSoundEvent;
    struct List_1_QuestsController_QuestStateToIndexRemap_* StateToQuestIndexMap;
    struct Dictionary_2_MoonGuid_RuntimeQuest_* m_quests;
    struct Dictionary_2_Moon_IGenericUberState_Quest_* m_questRoots;
    struct RuntimeQuest* m_activeQuest;
    struct Quest* m_quest;
    struct MessageBox* m_currentMessageBox;
    bool m_showingMessage;
    struct Dictionary_2_Moon_SerializedIntUberState_QuestsController_QuestStateToIndexRemap_* m_indexMap;
    float m_showUITime;
    bool RestoredCheckpoint;
    struct Queue_1_QuestsController_QueuedQuestMessage_* m_queuedQuestMessages;
    struct IUberState__Array* m_affectingUberStates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestsController__Fields_FWDDECL)
#define IL2CPP_STRUCT_QuestsController__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_MoonGuid_RuntimeQuest_.h>
#include <Modloader/app/structs/Dictionary_2_Moon_IGenericUberState_Quest_.h>
#include <Modloader/app/structs/Dictionary_2_Moon_SerializedIntUberState_QuestsController_QuestStateToIndexRemap_.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_Quest_.h>
#include <Modloader/app/structs/List_1_QuestsController_QuestStateToIndexRemap_.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Quest.h>
#include <Modloader/app/structs/Queue_1_QuestsController_QueuedQuestMessage_.h>
#include <Modloader/app/structs/RuntimeQuest.h>
#include <Modloader/app/structs/ShowInteractiveTextEntity.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_QuestsController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestsController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_QuestsController__Fields_FWDDECL)
#include <Modloader/app/structs/QuestsController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestsController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
