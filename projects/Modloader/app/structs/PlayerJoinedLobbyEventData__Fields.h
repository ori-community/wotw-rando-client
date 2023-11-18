#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerJoinedLobbyEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerJoinedLobbyEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerJoinedLobbyEventData__Fields_DEFINED)
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerJoinedLobbyEventData__Fields_DEFINED
struct String;
struct PlayerJoinedLobbyEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String* GameMode;
    struct String* LobbyId;
    struct String* Region_1;
    struct String* ServerBuildVersion;
    struct String* ServerHost;
    struct String* ServerHostInstanceId;
    struct String* ServerIPV4Address;
    struct String* ServerIPV6Address;
    uint32_t ServerPort;
    struct String* TitleId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerJoinedLobbyEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerJoinedLobbyEventData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayerJoinedLobbyEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerJoinedLobbyEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerJoinedLobbyEventData__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerJoinedLobbyEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerJoinedLobbyEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
