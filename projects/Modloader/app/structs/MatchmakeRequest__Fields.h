#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchmakeRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchmakeRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakeRequest__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_ClientModels_Region_.h>
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_ClientModels_Region__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED)
#define IL2CPP_STRUCT_MatchmakeRequest__Fields_DEFINED
struct String;
struct CollectionFilter;
struct MatchmakeRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String* BuildVersion;
    struct String* CharacterId;
    struct String* GameMode;
    struct String* LobbyId;
    struct Nullable_1_PlayFab_ClientModels_Region_ Region_1;
    struct Nullable_1_Boolean_ StartNewIfNoneFound;
    struct String* StatisticName;
    struct CollectionFilter* TagFilter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MatchmakeRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_MatchmakeRequest__Fields_FWDDECL
#include <Modloader/app/structs/CollectionFilter.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MatchmakeRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakeRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MatchmakeRequest__Fields_FWDDECL)
#include <Modloader/app/structs/MatchmakeRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchmakeRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
