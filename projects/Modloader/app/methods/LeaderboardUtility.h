#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LeaderboardUtility {
    IL2CPP_REGISTER_METHOD(0x015BA090, app::Leaderboard__Enum, LeaderboardBToLeaderboard, (app::LeaderboardB__Enum table))
    IL2CPP_REGISTER_METHOD(0x015BA0B0, app::LeaderboardB__Enum, LeaderboardToLeaderboardB, (app::Leaderboard__Enum table, app::DifficultyMode__Enum difficulty_mode))
} // namespace app::classes::LeaderboardUtility
