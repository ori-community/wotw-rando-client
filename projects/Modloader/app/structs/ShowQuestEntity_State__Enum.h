#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowQuestEntity_State__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowQuestEntity_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowQuestEntity_State__Enum_DEFINED)
#define IL2CPP_STRUCT_ShowQuestEntity_State__Enum_DEFINED
enum class ShowQuestEntity_State__Enum : int32_t {
    NotStarted = 0x00000000,
    WaitingForMenu = 0x00000001,
    Started = 0x00000002,
    ShowingPlayer = 0x00000003,
    MovingToQuest = 0x00000004,
    ShowingQuest = 0x00000005,
    WaitingForExit = 0x00000006,
    Finished = 0x00000007,
};
#endif
#if !defined(IL2CPP_STRUCT_ShowQuestEntity_State__Enum_FWDDECL)
#define IL2CPP_STRUCT_ShowQuestEntity_State__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ShowQuestEntity_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowQuestEntity_State__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ShowQuestEntity_State__Enum_FWDDECL)
#include <Modloader/app/structs/ShowQuestEntity_State__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowQuestEntity_State__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
