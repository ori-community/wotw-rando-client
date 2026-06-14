#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameLobbyEndedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameLobbyEndedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameLobbyEndedEventData_DEFINED)
#include <Modloader/app/structs/GameLobbyEndedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_GameLobbyEndedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_GameLobbyEndedEventData_DEFINED
struct GameLobbyEndedEventData__Class;
struct GameLobbyEndedEventData {
    struct GameLobbyEndedEventData__Class* klass;
    MonitorData* monitor;
    struct GameLobbyEndedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameLobbyEndedEventData_FWDDECL)
#define IL2CPP_STRUCT_GameLobbyEndedEventData_FWDDECL
#include <Modloader/app/structs/GameLobbyEndedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_GameLobbyEndedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameLobbyEndedEventData_DEFINED) && !defined(IL2CPP_STRUCT_GameLobbyEndedEventData_FWDDECL)
#include <Modloader/app/structs/GameLobbyEndedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameLobbyEndedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
