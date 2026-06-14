#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabRaceServiceProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabRaceServiceProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabRaceServiceProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabRaceServiceProvider__Fields_DEFINED
struct IDataProvider;
struct PlayFabSignInProvider;
struct Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache_;
struct Dictionary_2_System_String_System_Double_;
struct HashSet_1_System_String_;
struct __declspec(align(8)) PlayFabRaceServiceProvider__Fields {
    struct IDataProvider* m_playFabStatisticsProvider;
    struct PlayFabSignInProvider* m_playFabSignInProvider;
    struct Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache_* m_cache;
    struct Dictionary_2_System_String_System_Double_* m_lastSyncTime;
    struct HashSet_1_System_String_* m_raceStringCacheToLoad;
    float m_checkStorageTimer;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayFabRaceServiceProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayFabRaceServiceProvider__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_SystemIntegration_Races_RaceDataCache_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Double_.h>
#include <Modloader/app/structs/HashSet_1_System_String_.h>
#include <Modloader/app/structs/IDataProvider.h>
#include <Modloader/app/structs/PlayFabSignInProvider.h>
#endif
#undef IL2CPP_STRUCT_PlayFabRaceServiceProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabRaceServiceProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabRaceServiceProvider__Fields_FWDDECL)
#include <Modloader/app/structs/PlayFabRaceServiceProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabRaceServiceProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
