#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_Leaderboard_LeaderboardData_.h>
#include <Modloader/app/structs/LeaderboardData.h>
#include <Modloader/app/structs/Leaderboard__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Leaderboard_LeaderboardData_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_Leaderboard_LeaderboardData_ * this_ptr, app::Leaderboard__Enum key))
    IL2CPP_REGISTER_METHOD(0x02C35530, app::LeaderboardData*, get_Item, (app::Dictionary_2_Leaderboard_LeaderboardData_ * this_ptr, app::Leaderboard__Enum key))
    IL2CPP_REGISTER_METHOD(0x02C36CB0, bool, Remove, (app::Dictionary_2_Leaderboard_LeaderboardData_ * this_ptr, app::Leaderboard__Enum key))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_Leaderboard_LeaderboardData_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Leaderboard_LeaderboardData_
