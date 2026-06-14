#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerQuestItems_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerQuestItems_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerQuestItems_DEFINED)
#include <Modloader/app/structs/PlayerQuestItems__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerQuestItems__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerQuestItems_DEFINED
struct PlayerQuestItems__Class;
struct PlayerQuestItems {
    struct PlayerQuestItems__Class* klass;
    MonitorData* monitor;
    struct PlayerQuestItems__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerQuestItems_FWDDECL)
#define IL2CPP_STRUCT_PlayerQuestItems_FWDDECL
#include <Modloader/app/structs/PlayerQuestItems__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerQuestItems_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerQuestItems_DEFINED) && !defined(IL2CPP_STRUCT_PlayerQuestItems_FWDDECL)
#include <Modloader/app/structs/PlayerQuestItems.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerQuestItems.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
