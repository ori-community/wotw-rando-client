#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestReward_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestReward_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestReward_DEFINED)
#include <Modloader/app/structs/QuestReward__Fields.h>
#if defined(IL2CPP_STRUCT_QuestReward__Fields_DEFINED)
#define IL2CPP_STRUCT_QuestReward_DEFINED
struct QuestReward__Class;
struct QuestReward {
    struct QuestReward__Class* klass;
    MonitorData* monitor;
    struct QuestReward__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestReward_FWDDECL)
#define IL2CPP_STRUCT_QuestReward_FWDDECL
#include <Modloader/app/structs/QuestReward__Class.h>
#endif
#undef IL2CPP_STRUCT_QuestReward_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestReward_DEFINED) && !defined(IL2CPP_STRUCT_QuestReward_FWDDECL)
#include <Modloader/app/structs/QuestReward.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestReward.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
