#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageControllerB__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageControllerB__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageControllerB__Fields_DEFINED)
#include <Modloader/app/structs/MessageControllerB_NpcMessageStyle__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_MessageControllerB_NpcMessageStyle__Enum_DEFINED) && defined(IL2CPP_STRUCT_SpiritShardType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_MessageControllerB__Fields_DEFINED
struct GameObject;
struct List_1_UnityEngine_GameObject_;
struct MessageBox;
struct MessageBox__Array;
struct Dictionary_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_;
struct Quest;
struct MessageControllerB__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* AreaMessage;
    struct GameObject* AbilityMessage;
    struct GameObject* HintMessage;
    struct GameObject* HintSmallMessage;
    struct GameObject* BottomHintMessage;
    struct GameObject* PickupMessage;
    struct GameObject* StoryMessage;
    struct GameObject* HelpMessage;
    struct GameObject* SpiritTreeText;
    struct GameObject* QuestMessage;
    struct GameObject* CompleteQuestMessage;
    struct GameObject* UpdatedQuestMessage;
    struct GameObject* RaceFinishMessage;
    struct GameObject* AchievementMessage;
    struct GameObject* WispMessage;
    struct GameObject* CinematicStoryMessage;
    struct GameObject* CinematicMessageScreen;
    struct GameObject* NPCStoryMessage;
    struct GameObject* NPCMessageScreen;
    struct GameObject* NPCInteractionMessage;
    struct List_1_UnityEngine_GameObject_* NPCSideStoryMessages;
    struct List_1_UnityEngine_GameObject_* NPCSideMessageScreens;
    struct GameObject* UrlAndCodeMessage;
    struct MessageBox* m_currentMessageBox;
    struct MessageBox* m_lastActiveNpcMessageScreen;
    struct MessageBox__Array* m_activeNpcMessageScreens;
    struct MessageBox__Array* m_activeNpcMessages;
    struct Dictionary_2_MessageControllerB_NpcMessageStyle_Moon_Timeline_ShowFixedTimeTextEntity_TextVisuals_* DefaultVisuals;
    MessageControllerB_NpcMessageStyle__Enum m_currentNpcMessageStyle;

    bool _LastMessageWasShard_k__BackingField;
    bool _LastMessageWasQuest_k__BackingField;
    struct Quest* _LastQuest_k__BackingField;
    SpiritShardType__Enum _LastShard_k__BackingField;

    struct MessageBox* m_lastWindow;
    struct Vector2 spellMessageLocation;
    struct Vector2 areaMessageLocation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MessageControllerB__Fields_FWDDECL)
#define IL2CPP_STRUCT_MessageControllerB__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_MessageController_NpcMessageStyl_Moo_Timelin_ShowFixedTimeTextEnti_TextVisua_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageBox__Array.h>
#include <Modloader/app/structs/Quest.h>
#endif
#undef IL2CPP_STRUCT_MessageControllerB__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageControllerB__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MessageControllerB__Fields_FWDDECL)
#include <Modloader/app/structs/MessageControllerB__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageControllerB__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
