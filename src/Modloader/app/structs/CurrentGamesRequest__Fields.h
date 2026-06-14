#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CurrentGamesRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CurrentGamesRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CurrentGamesRequest__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_PlayFab_ClientModels_Region_.h>
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_ClientModels_Region__DEFINED)
#define IL2CPP_STRUCT_CurrentGamesRequest__Fields_DEFINED
struct String;
struct CollectionFilter;
struct CurrentGamesRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String* BuildVersion;
    struct String* GameMode;
    struct Nullable_1_PlayFab_ClientModels_Region_ Region_1;
    struct String* StatisticName;
    struct CollectionFilter* TagFilter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CurrentGamesRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_CurrentGamesRequest__Fields_FWDDECL
#include <Modloader/app/structs/CollectionFilter.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CurrentGamesRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CurrentGamesRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CurrentGamesRequest__Fields_FWDDECL)
#include <Modloader/app/structs/CurrentGamesRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CurrentGamesRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
