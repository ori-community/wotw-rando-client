#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameInfo__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_ClientModels_GameInstanceState_.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_ClientModels_Region_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_PlayFab_ClientModels_GameInstanceState__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Int32__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_ClientModels_Region__DEFINED)
#define IL2CPP_STRUCT_GameInfo__Fields_DEFINED
struct String;
struct List_1_System_String_;
struct Dictionary_2_System_String_System_String_;
struct __declspec(align(8)) GameInfo__Fields {
    struct String* BuildVersion;
    struct String* GameMode;
    struct String* GameServerData;
    struct Nullable_1_PlayFab_ClientModels_GameInstanceState_ GameServerStateEnum;
    struct Nullable_1_DateTime_ LastHeartbeat;
    struct String* LobbyID;
    struct Nullable_1_Int32_ MaxPlayers;
    struct List_1_System_String_* PlayerUserIds;
    struct Nullable_1_PlayFab_ClientModels_Region_ Region_1;
    uint32_t RunTime;
    struct String* ServerIPV4Address;
    struct String* ServerIPV6Address;
    struct Nullable_1_Int32_ ServerPort;
    struct String* ServerPublicDNSName;
    struct String* StatisticName;
    struct Dictionary_2_System_String_System_String_* Tags;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameInfo__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GameInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameInfo__Fields_FWDDECL)
#include <Modloader/app/structs/GameInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
