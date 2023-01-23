#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_Moon_Race_LeaderBoardEntry_.h>
#include <Modloader/app/structs/IEnumerable_1_Moon_Race_LeaderBoardEntry_.h>

namespace app::classes::Moon::Race::MatchmakingExtensions {
    IL2CPP_REGISTER_METHOD(0x00C44530, app::List_1_Moon_Race_LeaderBoardEntry_*, GetEntriesInRange, (app::List_1_Moon_Race_LeaderBoardEntry_ * leaderboard, int32_t amount, int32_t pivot_slot, int32_t* started_range_index))
    IL2CPP_REGISTER_METHOD(0x00C44BE0, app::IEnumerable_1_Moon_Race_LeaderBoardEntry_*, GetRaceEntries, (app::List_1_Moon_Race_LeaderBoardEntry_ * leaderboard))
    IL2CPP_REGISTER_METHOD(0x00C45170, app::IEnumerable_1_Moon_Race_LeaderBoardEntry_*, GetSpectatorEntries, (app::List_1_Moon_Race_LeaderBoardEntry_ * leaderboard))
    IL2CPP_REGISTER_METHOD(0x00C451A0, app::IEnumerable_1_Moon_Race_LeaderBoardEntry_*, GetEntries, (app::List_1_Moon_Race_LeaderBoardEntry_ * entries, int32_t start_index, int32_t max_count))
} // namespace app::classes::Moon::Race::MatchmakingExtensions
