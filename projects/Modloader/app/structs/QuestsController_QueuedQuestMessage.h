#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestsController_QueuedQuestMessage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestsController_QueuedQuestMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestsController_QueuedQuestMessage_DEFINED)
#include <Modloader/app/structs/QuestsController_QuestMessageType__Enum.h>
#if defined(IL2CPP_STRUCT_QuestsController_QuestMessageType__Enum_DEFINED)
#define IL2CPP_STRUCT_QuestsController_QueuedQuestMessage_DEFINED
struct Quest;
struct QuestsController_QueuedQuestMessage {
    struct Quest* Quest;
    QuestsController_QuestMessageType__Enum MessageType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestsController_QueuedQuestMessage_FWDDECL)
#define IL2CPP_STRUCT_QuestsController_QueuedQuestMessage_FWDDECL
#include <Modloader/app/structs/Quest.h>
#endif
#undef IL2CPP_STRUCT_QuestsController_QueuedQuestMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestsController_QueuedQuestMessage_DEFINED) && !defined(IL2CPP_STRUCT_QuestsController_QueuedQuestMessage_FWDDECL)
#include <Modloader/app/structs/QuestsController_QueuedQuestMessage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestsController_QueuedQuestMessage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
