#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_2_String_Boolean_.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_Race_LeaderBoardEntry_.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/RaceContentType__Enum.h>
#include <Modloader/app/structs/RaceLeaderboardEntry.h>
#include <Modloader/app/structs/RaceLeaderboardScreen.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::RaceLeaderboardScreen {
    IL2CPP_REGISTER_METHOD(0x00E9FCC0, app::RaceLeaderboardEntry*, get_SelectedEntry, app::RaceLeaderboardScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FBC0, app::Action_2_String_Boolean_*, get_OnSelected, app::RaceLeaderboardScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FBD0, void, set_OnSelected, app::RaceLeaderboardScreen* this_ptr, app::Action_2_String_Boolean_* value)
    IL2CPP_REGISTER_METHOD(0x0065FBE0, app::Action*, get_OnCancelDownload, app::RaceLeaderboardScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FBF0, void, set_OnCancelDownload, app::RaceLeaderboardScreen* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x00E9FDE0, app::CleverMenuItemSelectionManager*, get_SelectionManager, app::RaceLeaderboardScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E9FEC0, void, Awake, app::RaceLeaderboardScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EA01A0, void, OnDestroy, app::RaceLeaderboardScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EA04E0, void, OnCancelDownloadPressed, app::RaceLeaderboardScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EA05F0, void, SetSyncing, app::RaceLeaderboardScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00EA0600,
        void,
        Setup_1,
        app::RaceLeaderboardScreen* this_ptr,
        app::IEnumerable_1_Moon_Race_LeaderBoardEntry_* leaderboard,
        app::RaceContentType__Enum race_content_type
    )
    IL2CPP_REGISTER_METHOD(
        0x00EA08B0,
        void,
        Setup_2,
        app::RaceLeaderboardScreen* this_ptr,
        app::IEnumerable_1_Moon_Race_LeaderBoardEntry_* leaderboard,
        app::RaceContentType__Enum race_content_type,
        int32_t* entries_count
    )
    IL2CPP_REGISTER_METHOD(0x00EA0970, void, SetTitle, app::RaceLeaderboardScreen* this_ptr, app::MessageProvider* message_provider)
    IL2CPP_REGISTER_METHOD(0x00EA0A60, void, CreateEntries, app::RaceLeaderboardScreen* this_ptr, int32_t amount)
    IL2CPP_REGISTER_METHOD(0x00EA0E70, void, ClearEntries, app::RaceLeaderboardScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EA11B0, void, SetDownloadingPopup, app::RaceLeaderboardScreen* this_ptr, bool state)
    IL2CPP_REGISTER_METHOD(0x00EA1320, void, OnPressed, app::RaceLeaderboardScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EA1470, void, OnSpectatePressed, app::RaceLeaderboardScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EA15C0, void, OnViewCardPressed, app::RaceLeaderboardScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EA16B0, void, SetupEntries, app::RaceLeaderboardScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EA2260, void, RefreshLegendCaptions, app::RaceLeaderboardScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EA2770, void, EnableGhostInputs, app::RaceLeaderboardScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EA2AC0, void, DisableGhostInputs, app::RaceLeaderboardScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EA2E10, app::MessageProvider*, GetLeaderboardToggleMessage, app::RaceLeaderboardScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EA2F30, app::MessageProvider*, GetLeaderboardFocusMessage, app::RaceLeaderboardScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ShowScoreCard, app::RaceLeaderboardScreen* this_ptr, app::String* user_i_d)
    IL2CPP_REGISTER_METHOD(0x00EA3050, bool, CanShowScoreCard, app::RaceLeaderboardScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EA3130, void, RefreshShowScoreCardLegend, app::RaceLeaderboardScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EA3310, void, ctor, app::RaceLeaderboardScreen* this_ptr)
} // namespace app::classes::RaceLeaderboardScreen
