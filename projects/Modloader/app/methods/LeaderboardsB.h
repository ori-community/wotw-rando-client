#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CleverMenuItemGroup.h>
#include <Modloader/app/structs/DifficultyMode__Enum.h>
#include <Modloader/app/structs/LeaderboardB__Enum.h>
#include <Modloader/app/structs/LeaderboardData.h>
#include <Modloader/app/structs/LeaderboardFilter__Enum.h>
#include <Modloader/app/structs/LeaderboardRowUI.h>
#include <Modloader/app/structs/Leaderboard__Enum.h>
#include <Modloader/app/structs/LeaderboardsB.h>
#include <Modloader/app/structs/LeaderboardsB_LeaderboardQueryState__Enum.h>
#include <Modloader/app/structs/List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_.h>

namespace app::classes::LeaderboardsB {
    IL2CPP_REGISTER_METHOD(0x015BA0C0, app::LeaderboardFilter__Enum, get_m_currentFilter, app::LeaderboardsB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015BA160, void, set_m_currentFilter, app::LeaderboardsB* this_ptr, app::LeaderboardFilter__Enum value)
    IL2CPP_REGISTER_METHOD(0x015BA200, app::LeaderboardRowUI*, get_CurrentRowUI, app::LeaderboardsB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0085E270, bool, get_IsVisible, app::LeaderboardsB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015BA230, void, set_IsVisible, app::LeaderboardsB* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanBeEntered, app::LeaderboardsB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015BA590, void, OnEnable, app::LeaderboardsB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015BA900, void, OnOnlineStateChanged, app::LeaderboardsB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015BA940, void, OnDisable, app::LeaderboardsB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DB59E0, bool, get_IsActive, app::LeaderboardsB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015BABF0, void, set_IsActive, app::LeaderboardsB* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x015BAC00, void, UpdateHighlight, app::LeaderboardsB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D2CDF0, bool, get_IsHighlightVisible, app::LeaderboardsB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015BAC10, void, set_IsHighlightVisible, app::LeaderboardsB* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x015BADB0, void, Awake, app::LeaderboardsB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015BAE40, void, EnterInGroup, app::LeaderboardsB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015BAE60, bool, OnMenuItemChangedInGroup, app::LeaderboardsB* this_ptr, app::CleverMenuItemGroup* group)
    IL2CPP_REGISTER_METHOD(0x015BAF40, bool, get_Available, )
    IL2CPP_REGISTER_METHOD(0x015BAFF0, app::LeaderboardData*, GetLeaderboard, app::LeaderboardB__Enum leaderboard)
    IL2CPP_REGISTER_METHOD(0x015BB1A0, app::LeaderboardData*, get_CurrentLeaderboardData, )
    IL2CPP_REGISTER_METHOD(0x015BB240, void, ClearTableUI, )
    IL2CPP_REGISTER_METHOD(
        0x015BB2E0,
        bool,
        UpdateLeaderboard,
        app::Leaderboard__Enum leaderboard,
        app::LeaderboardFilter__Enum filter,
        app::DifficultyMode__Enum difficulty
    )
    IL2CPP_REGISTER_METHOD(
        0x015BB660,
        void,
        LeaderboardResultsObtained,
        app::List_1_PlayFab_ClientModels_PlayerLeaderboardEntry_* list,
        app::Leaderboard__Enum leaderboard,
        app::DifficultyMode__Enum difficulty,
        app::LeaderboardFilter__Enum filter
    )
    IL2CPP_REGISTER_METHOD(0x015BC4D0, void, ChangeState, app::LeaderboardsB_LeaderboardQueryState__Enum new_state)
    IL2CPP_REGISTER_METHOD(0x015BC5A0, void, OnReadyEnter, )
    IL2CPP_REGISTER_METHOD(0x015BC830, void, OnFetchingDataEnter, )
    IL2CPP_REGISTER_METHOD(0x015BCAC0, void, ShowScoreCard, app::LeaderboardsB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanShowScoreCard, app::LeaderboardsB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015BCB30, void, RefreshShowScoreCardLegend, app::LeaderboardsB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015BCC50, void, HandleMouseMove, app::LeaderboardsB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015BCFE0, void, FixedUpdate, app::LeaderboardsB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015BDD40, void, NextLeaderboard, app::LeaderboardsB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015BDE60, void, NextDifficulty, app::LeaderboardsB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015BDF90, void, PreviousDifficulty, app::LeaderboardsB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015BE0B0, void, RefreshTableUI, )
    IL2CPP_REGISTER_METHOD(0x015BE190, void, RefreshRowIndex, app::LeaderboardsB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015BE430, void, RefreshUIStrings, )
    IL2CPP_REGISTER_METHOD(0x015BEC00, void, PreviousLeaderboard, app::LeaderboardsB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015BED20, void, RowDown, app::LeaderboardsB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015BF050, void, RowUp, app::LeaderboardsB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015BF380, void, NextFilter, app::LeaderboardsB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015BA900, void, DoDelayedLeaderboardGet, app::LeaderboardsB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015BF470, void, ctor, app::LeaderboardsB* this_ptr)
} // namespace app::classes::LeaderboardsB
