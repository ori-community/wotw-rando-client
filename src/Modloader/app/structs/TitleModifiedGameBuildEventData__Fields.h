#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleModifiedGameBuildEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleModifiedGameBuildEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleModifiedGameBuildEventData__Fields_DEFINED)
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED)
#define IL2CPP_STRUCT_TitleModifiedGameBuildEventData__Fields_DEFINED
struct String;
struct List_1_PlayFab_PlayStreamModels_Region_;
struct TitleModifiedGameBuildEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String* BuildId;
    struct String* DeveloperId;
    int32_t MaxGamesPerHost;
    int32_t MinFreeGameSlots;
    struct List_1_PlayFab_PlayStreamModels_Region_* Regions;
    struct String* UserId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleModifiedGameBuildEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_TitleModifiedGameBuildEventData__Fields_FWDDECL
#include <Modloader/app/structs/List_1_PlayFab_PlayStreamModels_Region_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TitleModifiedGameBuildEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleModifiedGameBuildEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TitleModifiedGameBuildEventData__Fields_FWDDECL)
#include <Modloader/app/structs/TitleModifiedGameBuildEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleModifiedGameBuildEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
