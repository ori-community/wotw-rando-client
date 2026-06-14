#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StartGameResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StartGameResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartGameResult__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Int32__DEFINED)
#define IL2CPP_STRUCT_StartGameResult__Fields_DEFINED
struct String;
struct StartGameResult__Fields {
    struct PlayFabResultCommon__Fields _;
    struct String* Expires;
    struct String* LobbyID;
    struct String* Password;
    struct String* ServerIPV4Address;
    struct String* ServerIPV6Address;
    struct Nullable_1_Int32_ ServerPort;
    struct String* ServerPublicDNSName;
    struct String* Ticket;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StartGameResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_StartGameResult__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_StartGameResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartGameResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StartGameResult__Fields_FWDDECL)
#include <Modloader/app/structs/StartGameResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StartGameResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
