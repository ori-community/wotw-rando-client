#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowQuest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowQuest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowQuest__Fields_DEFINED)
#include <Modloader/app/structs/PerformingAction__Fields.h>
#include <Modloader/app/structs/ShowQuest_State__Enum.h>
#if defined(IL2CPP_STRUCT_PerformingAction__Fields_DEFINED) && defined(IL2CPP_STRUCT_ShowQuest_State__Enum_DEFINED)
#define IL2CPP_STRUCT_ShowQuest__Fields_DEFINED
struct Quest;
struct GameObject;
struct ShowQuest__Fields {
    struct PerformingAction__Fields _;
    struct Quest* Quest;
    float FocusingOnPlayerDuration;
    float TimeToScrollMap;
    float AppearEffectDelay;
    float ShowingQuestDuration;
    bool ShouldAssignQuest;
    ShowQuest_State__Enum CurrentState;

    float m_stateTime;
    struct GameObject* m_appearEffect;
    bool m_killThisHackShouldChangeState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowQuest__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShowQuest__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Quest.h>
#endif
#undef IL2CPP_STRUCT_ShowQuest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowQuest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShowQuest__Fields_FWDDECL)
#include <Modloader/app/structs/ShowQuest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowQuest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
