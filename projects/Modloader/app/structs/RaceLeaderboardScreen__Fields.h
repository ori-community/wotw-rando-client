#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceLeaderboardScreen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceLeaderboardScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceLeaderboardScreen__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/RaceContentType__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_RaceContentType__Enum_DEFINED)
#define IL2CPP_STRUCT_RaceLeaderboardScreen__Fields_DEFINED
struct RaceLeaderboardEntry;
struct Transform;
struct MessageProvider;
struct MessageBox;
struct CleverMenuItemSelectionManager;
struct LegacyTransparencyAnimator;
struct List_1_RaceLeaderboardEntry_;
struct List_1_Moon_Race_LeaderBoardEntry_;
struct Action_2_String_Boolean_;
struct Action;
struct RaceLeaderboardScreen__Fields {
    struct MonoBehaviour__Fields _;
    struct RaceLeaderboardEntry* m_leaderboardEntryPrefab;
    struct RaceLeaderboardEntry* m_personalEntry;
    struct Transform* m_pivot;
    struct MessageProvider* m_toggleMessageProvider;
    struct MessageProvider* m_toggleMyScoreMessageProvider;
    struct MessageProvider* m_toggleHighScoreMessageProvider;
    struct MessageProvider* m_leaderboardFilterFriendsMessageProvider;
    struct MessageProvider* m_leaderboardFilterGlobalMessageProvider;
    struct MessageBox* m_toggleMessageBox;
    struct MessageBox* m_toggleMessageBoxForXbox;
    struct MessageBox* m_toggleMessageBoxForSwitch;
    struct MessageProvider* m_leaderboardFilterMessageProvider;
    struct MessageBox* m_leaderboardToggleMessageBox;
    struct MessageBox* m_leaderboardToggleMessageBoxForXbox;
    struct MessageBox* m_titleMessageBox;
    struct MessageProvider* DebugOldGhostMessage;
    struct CleverMenuItemSelectionManager* m_downloadingPopup;
    struct LegacyTransparencyAnimator* m_selectTransparencyAnimator;
    struct LegacyTransparencyAnimator* m_watchTransparencyAnimator;
    struct LegacyTransparencyAnimator* m_selectXboxTransparencyAnimator;
    struct LegacyTransparencyAnimator* m_watchXboxTransparencyAnimator;
    struct LegacyTransparencyAnimator* m_selectSwitchTransparencyAnimator;
    struct LegacyTransparencyAnimator* m_watchSwitchTransparencyAnimator;
    struct LegacyTransparencyAnimator* m_showCardXboxTransparencyAnimator;
    struct List_1_RaceLeaderboardEntry_* m_entries;
    struct List_1_Moon_Race_LeaderBoardEntry_* m_leaderboard;
    RaceContentType__Enum m_raceContentType;

    struct CleverMenuItemSelectionManager* m_selectionManager;
    struct Action_2_String_Boolean_* m_onSelected;
    struct Action* m_onCancelDownload;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceLeaderboardScreen__Fields_FWDDECL)
#define IL2CPP_STRUCT_RaceLeaderboardScreen__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_2_String_Boolean_.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/List_1_Moon_Race_LeaderBoardEntry_.h>
#include <Modloader/app/structs/List_1_RaceLeaderboardEntry_.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/RaceLeaderboardEntry.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_RaceLeaderboardScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceLeaderboardScreen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RaceLeaderboardScreen__Fields_FWDDECL)
#include <Modloader/app/structs/RaceLeaderboardScreen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceLeaderboardScreen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
