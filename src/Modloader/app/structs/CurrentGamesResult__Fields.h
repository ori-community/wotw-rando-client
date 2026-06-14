#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CurrentGamesResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CurrentGamesResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CurrentGamesResult__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_CurrentGamesResult__Fields_DEFINED
struct List_1_PlayFab_ClientModels_GameInfo_;
struct CurrentGamesResult__Fields {
    struct PlayFabResultCommon__Fields _;
    int32_t GameCount;
    struct List_1_PlayFab_ClientModels_GameInfo_* Games;
    int32_t PlayerCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CurrentGamesResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_CurrentGamesResult__Fields_FWDDECL
#include <Modloader/app/structs/List_1_PlayFab_ClientModels_GameInfo_.h>
#endif
#undef IL2CPP_STRUCT_CurrentGamesResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CurrentGamesResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CurrentGamesResult__Fields_FWDDECL)
#include <Modloader/app/structs/CurrentGamesResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CurrentGamesResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
