#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LeaderBoardService.h>
#include <Modloader/app/structs/LeaderboardFilter__Enum.h>
#include <Modloader/app/structs/RaceLeaderboardsTitlescreenController.h>
#include <Modloader/app/structs/RaceLeaderboardsTitlescreenController_OnlineHandlerState__Enum.h>
#include <Modloader/app/structs/RaceSettings.h>

namespace app::classes::RaceLeaderboardsTitlescreenController {
    IL2CPP_REGISTER_METHOD(0x00EA5A70, app::LeaderBoardService*, get_m_leaderBoardService, app::RaceLeaderboardsTitlescreenController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EA5B10, app::LeaderboardFilter__Enum, get_m_currentFilter, app::RaceLeaderboardsTitlescreenController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EA5BF0, void, OnEnable, app::RaceLeaderboardsTitlescreenController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EA5FA0, void, FixedUpdate, app::RaceLeaderboardsTitlescreenController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EA6370, void, UpdateStatus, app::RaceLeaderboardsTitlescreenController* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00EA6610,
        void,
        SetState,
        app::RaceLeaderboardsTitlescreenController* this_ptr,
        app::RaceLeaderboardsTitlescreenController_OnlineHandlerState__Enum state
    )
    IL2CPP_REGISTER_METHOD(0x00EA6780, void, HandleInput, app::RaceLeaderboardsTitlescreenController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EA6AB0, void, ShowRaceLeaderboard, app::RaceLeaderboardsTitlescreenController* this_ptr, app::RaceSettings* race_settings)
    IL2CPP_REGISTER_METHOD(0x00EA6CB0, void, UpdateNotification, app::RaceLeaderboardsTitlescreenController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EA6E50, void, HideTable, app::RaceLeaderboardsTitlescreenController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EA6F40, void, ShowTable, app::RaceLeaderboardsTitlescreenController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EA7000, void, ctor, app::RaceLeaderboardsTitlescreenController* this_ptr)
} // namespace app::classes::RaceLeaderboardsTitlescreenController
