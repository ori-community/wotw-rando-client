#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerRespawnTrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerRespawnTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerRespawnTrigger_DEFINED)
#include <Modloader/app/structs/PlayerRespawnTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerRespawnTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerRespawnTrigger_DEFINED
struct PlayerRespawnTrigger__Class;
struct PlayerRespawnTrigger {
    struct PlayerRespawnTrigger__Class* klass;
    MonitorData* monitor;
    struct PlayerRespawnTrigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerRespawnTrigger_FWDDECL)
#define IL2CPP_STRUCT_PlayerRespawnTrigger_FWDDECL
#include <Modloader/app/structs/PlayerRespawnTrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerRespawnTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerRespawnTrigger_DEFINED) && !defined(IL2CPP_STRUCT_PlayerRespawnTrigger_FWDDECL)
#include <Modloader/app/structs/PlayerRespawnTrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerRespawnTrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
