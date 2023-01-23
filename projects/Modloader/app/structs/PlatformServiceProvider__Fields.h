#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlatformServiceProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlatformServiceProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformServiceProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_PlatformServiceProvider__Fields_DEFINED
struct ISignInProvider;
struct IDataProvider;
struct PlayFabSignInProvider;
struct PlayFabStatistics;
struct ITelemetryProvider;
struct INetworkConnectivityChecker;
struct List_1_System_Action_;
struct PlayFabRaceServiceProvider;
struct __declspec(align(8)) PlatformServiceProvider__Fields {
    float m_timeSinceLastReset;
    float m_nextUpdateTime;
    bool m_playFabWasSignedIn;
    struct ISignInProvider* m_primarySignInProvider;
    struct IDataProvider* m_primaryAchievementProvider;
    struct ISignInProvider* m_secondarySignInProvider;
    struct IDataProvider* m_secondaryAchievementProvider;
    struct PlayFabSignInProvider* m_playFabSignInProvider;
    struct IDataProvider* m_playFabAchievementProvider;
    struct PlayFabStatistics* m_playFabStatistics;
    struct IDataProvider* m_playFabStatisticsProvider;
    struct ITelemetryProvider* m_playFabTelemetryDataProvider;
    struct INetworkConnectivityChecker* m_connectivityChecker;
    struct IDataProvider* m_primaryAndPlayFabProvider;
    struct IDataProvider* m_secondaryAndPlayFabProvider;
    struct List_1_System_Action_* m_onUserChanged;
    bool m_offlinePlayfabAchievementsCacheBuilt;
    struct PlayFabRaceServiceProvider* _RaceServiceProvider_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_PlatformServiceProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlatformServiceProvider__Fields_FWDDECL
#include <Modloader/app/structs/IDataProvider.h>
#include <Modloader/app/structs/INetworkConnectivityChecker.h>
#include <Modloader/app/structs/ISignInProvider.h>
#include <Modloader/app/structs/ITelemetryProvider.h>
#include <Modloader/app/structs/List_1_System_Action_.h>
#include <Modloader/app/structs/PlayFabRaceServiceProvider.h>
#include <Modloader/app/structs/PlayFabSignInProvider.h>
#include <Modloader/app/structs/PlayFabStatistics.h>
#endif
#undef IL2CPP_STRUCT_PlatformServiceProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformServiceProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlatformServiceProvider__Fields_FWDDECL)
#include <Modloader/app/structs/PlatformServiceProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlatformServiceProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
