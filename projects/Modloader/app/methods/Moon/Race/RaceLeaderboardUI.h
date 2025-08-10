#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_Race_LeaderBoardEntry_.h>
#include <Modloader/app/structs/RaceLeaderboardUI.h>

namespace app::classes::Moon::Race::RaceLeaderboardUI {
    IL2CPP_REGISTER_METHOD(0x00C48C10, void, Show, app::RaceLeaderboardUI* this_ptr, app::List_1_Moon_Race_LeaderBoardEntry_* entries)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::RaceLeaderboardUI* this_ptr)
} // namespace app::classes::Moon::Race::RaceLeaderboardUI
