#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowQuestEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowQuestEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowQuestEntity__Fields_DEFINED)
#include <Modloader/app/structs/ShowQuestEntity_State__Enum.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_ShowQuestEntity_State__Enum_DEFINED)
#define IL2CPP_STRUCT_ShowQuestEntity__Fields_DEFINED
struct Quest;
struct ShowQuestEntity__Fields {
    struct TimelineEntity__Fields _;
    struct Quest* Quest;
    float FocusingOnPlayerDuration;
    float TimeToScrollMap;
    float AppearEffectDelay;
    bool ShouldAssignQuest;
    bool IncrementAlreadyActiveQuest;
    bool Pause;
    ShowQuestEntity_State__Enum CurrentState;

    float m_stateTime;
    bool m_killThisHackShouldChangeState;
    bool m_contentEndPost;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowQuestEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShowQuestEntity__Fields_FWDDECL
#include <Modloader/app/structs/Quest.h>
#endif
#undef IL2CPP_STRUCT_ShowQuestEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowQuestEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShowQuestEntity__Fields_FWDDECL)
#include <Modloader/app/structs/ShowQuestEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowQuestEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
