#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerJoinedLobbyEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerJoinedLobbyEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerJoinedLobbyEventData_DEFINED)
#include <Modloader/app/structs/PlayerJoinedLobbyEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerJoinedLobbyEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerJoinedLobbyEventData_DEFINED
struct PlayerJoinedLobbyEventData__Class;
struct PlayerJoinedLobbyEventData {
    struct PlayerJoinedLobbyEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerJoinedLobbyEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerJoinedLobbyEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerJoinedLobbyEventData_FWDDECL
#include <Modloader/app/structs/PlayerJoinedLobbyEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerJoinedLobbyEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerJoinedLobbyEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerJoinedLobbyEventData_FWDDECL)
#include <Modloader/app/structs/PlayerJoinedLobbyEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerJoinedLobbyEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
