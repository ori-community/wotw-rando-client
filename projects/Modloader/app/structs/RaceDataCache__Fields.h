#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceDataCache__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceDataCache__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceDataCache__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceDataCache__Fields_DEFINED
struct String;
struct IPlatformStorageEventHandler;
struct Dictionary_2_System_String_SystemIntegration_Races_RaceEntry_;
struct List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_;
struct __declspec(align(8)) RaceDataCache__Fields {
    struct String* m_ownerId;
    struct IPlatformStorageEventHandler* m_platformStorageEventHandler;
    struct Dictionary_2_System_String_SystemIntegration_Races_RaceEntry_* m_cache;
    struct String* m_raceKey;
    struct List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_* m_lastMasterLeaderBoardSync;
};
#endif
#if !defined(IL2CPP_STRUCT_RaceDataCache__Fields_FWDDECL)
#define IL2CPP_STRUCT_RaceDataCache__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_SystemIntegration_Races_RaceEntry_.h>
#include <Modloader/app/structs/IPlatformStorageEventHandler.h>
#include <Modloader/app/structs/List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RaceDataCache__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceDataCache__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RaceDataCache__Fields_FWDDECL)
#include <Modloader/app/structs/RaceDataCache__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceDataCache__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
