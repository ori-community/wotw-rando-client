#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetGameServerInstanceStateRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetGameServerInstanceStateRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetGameServerInstanceStateRequest__Fields_DEFINED)
#include <Modloader/app/structs/GameInstanceState__Enum_1.h>
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_GameInstanceState__Enum_1_DEFINED)
#define IL2CPP_STRUCT_SetGameServerInstanceStateRequest__Fields_DEFINED
struct String;
struct SetGameServerInstanceStateRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String* LobbyId;
    GameInstanceState__Enum_1 State;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetGameServerInstanceStateRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_SetGameServerInstanceStateRequest__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SetGameServerInstanceStateRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetGameServerInstanceStateRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SetGameServerInstanceStateRequest__Fields_FWDDECL)
#include <Modloader/app/structs/SetGameServerInstanceStateRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetGameServerInstanceStateRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
