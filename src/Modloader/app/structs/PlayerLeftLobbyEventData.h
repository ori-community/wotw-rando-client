#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerLeftLobbyEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerLeftLobbyEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLeftLobbyEventData_DEFINED)
#include <Modloader/app/structs/PlayerLeftLobbyEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerLeftLobbyEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerLeftLobbyEventData_DEFINED
struct PlayerLeftLobbyEventData__Class;
struct PlayerLeftLobbyEventData {
    struct PlayerLeftLobbyEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerLeftLobbyEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerLeftLobbyEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerLeftLobbyEventData_FWDDECL
#include <Modloader/app/structs/PlayerLeftLobbyEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerLeftLobbyEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLeftLobbyEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerLeftLobbyEventData_FWDDECL)
#include <Modloader/app/structs/PlayerLeftLobbyEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerLeftLobbyEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
