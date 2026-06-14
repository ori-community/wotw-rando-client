#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameLobbyStartedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameLobbyStartedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameLobbyStartedEventData_DEFINED)
#include <Modloader/app/structs/GameLobbyStartedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_GameLobbyStartedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_GameLobbyStartedEventData_DEFINED
struct GameLobbyStartedEventData__Class;
struct GameLobbyStartedEventData {
    struct GameLobbyStartedEventData__Class* klass;
    MonitorData* monitor;
    struct GameLobbyStartedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameLobbyStartedEventData_FWDDECL)
#define IL2CPP_STRUCT_GameLobbyStartedEventData_FWDDECL
#include <Modloader/app/structs/GameLobbyStartedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_GameLobbyStartedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameLobbyStartedEventData_DEFINED) && !defined(IL2CPP_STRUCT_GameLobbyStartedEventData_FWDDECL)
#include <Modloader/app/structs/GameLobbyStartedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameLobbyStartedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
