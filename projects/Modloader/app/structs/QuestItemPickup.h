#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestItemPickup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestItemPickup_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestItemPickup_DEFINED)
#include <Modloader/app/structs/QuestItemPickup__Fields.h>
#if defined(IL2CPP_STRUCT_QuestItemPickup__Fields_DEFINED)
#define IL2CPP_STRUCT_QuestItemPickup_DEFINED
struct QuestItemPickup__Class;
struct QuestItemPickup {
    struct QuestItemPickup__Class* klass;
    MonitorData* monitor;
    struct QuestItemPickup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestItemPickup_FWDDECL)
#define IL2CPP_STRUCT_QuestItemPickup_FWDDECL
#include <Modloader/app/structs/QuestItemPickup__Class.h>
#endif
#undef IL2CPP_STRUCT_QuestItemPickup_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestItemPickup_DEFINED) && !defined(IL2CPP_STRUCT_QuestItemPickup_FWDDECL)
#include <Modloader/app/structs/QuestItemPickup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestItemPickup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
