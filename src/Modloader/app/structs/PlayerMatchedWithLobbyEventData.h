#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerMatchedWithLobbyEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerMatchedWithLobbyEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerMatchedWithLobbyEventData_DEFINED)
#include <Modloader/app/structs/PlayerMatchedWithLobbyEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerMatchedWithLobbyEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerMatchedWithLobbyEventData_DEFINED
struct PlayerMatchedWithLobbyEventData__Class;
struct PlayerMatchedWithLobbyEventData {
    struct PlayerMatchedWithLobbyEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerMatchedWithLobbyEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerMatchedWithLobbyEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerMatchedWithLobbyEventData_FWDDECL
#include <Modloader/app/structs/PlayerMatchedWithLobbyEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerMatchedWithLobbyEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerMatchedWithLobbyEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerMatchedWithLobbyEventData_FWDDECL)
#include <Modloader/app/structs/PlayerMatchedWithLobbyEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerMatchedWithLobbyEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
