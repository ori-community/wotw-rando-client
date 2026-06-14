#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestItemReward_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestItemReward_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestItemReward_DEFINED)
#include <Modloader/app/structs/QuestItemReward__Fields.h>
#if defined(IL2CPP_STRUCT_QuestItemReward__Fields_DEFINED)
#define IL2CPP_STRUCT_QuestItemReward_DEFINED
struct QuestItemReward__Class;
struct QuestItemReward {
    struct QuestItemReward__Class* klass;
    MonitorData* monitor;
    struct QuestItemReward__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestItemReward_FWDDECL)
#define IL2CPP_STRUCT_QuestItemReward_FWDDECL
#include <Modloader/app/structs/QuestItemReward__Class.h>
#endif
#undef IL2CPP_STRUCT_QuestItemReward_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestItemReward_DEFINED) && !defined(IL2CPP_STRUCT_QuestItemReward_FWDDECL)
#include <Modloader/app/structs/QuestItemReward.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestItemReward.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
