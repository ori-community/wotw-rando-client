#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceLeaderboardsTitlescreenController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceLeaderboardsTitlescreenController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceLeaderboardsTitlescreenController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/RaceLeaderboardsTitlescreenController_OnlineHandlerState__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_RaceLeaderboardsTitlescreenController_OnlineHandlerState__Enum_DEFINED)
#define IL2CPP_STRUCT_RaceLeaderboardsTitlescreenController__Fields_DEFINED
struct RaceLeaderboardScreen;
struct RaceSettings;
struct String;
struct LegacyTransparencyAnimator;
struct GameObject;
struct INetworkConnectivityChecker;
struct RaceLeaderboardsTitlescreenController__Fields {
    struct MonoBehaviour__Fields _;
    struct RaceLeaderboardScreen* RaceLeaderboardScreen;
    bool m_isSyncing;
    int32_t m_entriesCount;
    struct RaceSettings* m_raceSettings;
    struct String* m_raceName;
    float m_inactiveTime;
    struct LegacyTransparencyAnimator* FadeAnimator;
    struct GameObject* DownloadingPopup;
    struct GameObject* NoEntriesText;
    struct GameObject* NoFriendsText;
    struct INetworkConnectivityChecker* m_netConnectivityChecker;
    struct GameObject* NotConnected;
    struct GameObject* Connecting;
    struct GameObject* TryAgain;
    struct GameObject* ConnectedNoNsaId;
    RaceLeaderboardsTitlescreenController_OnlineHandlerState__Enum m_handlerState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceLeaderboardsTitlescreenController__Fields_FWDDECL)
#define IL2CPP_STRUCT_RaceLeaderboardsTitlescreenController__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/INetworkConnectivityChecker.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/RaceLeaderboardScreen.h>
#include <Modloader/app/structs/RaceSettings.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RaceLeaderboardsTitlescreenController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceLeaderboardsTitlescreenController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RaceLeaderboardsTitlescreenController__Fields_FWDDECL)
#include <Modloader/app/structs/RaceLeaderboardsTitlescreenController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceLeaderboardsTitlescreenController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
