#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_Leaderboard_LeaderboardData_.h>
#include <Modloader/app/structs/Leaderboard__Enum.h>
#include <Modloader/app/structs/LeaderboardData.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Leaderboard_LeaderboardData_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_Leaderboard_LeaderboardData_ * this_ptr, app::Leaderboard__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x047701A0, Dictionary_2_Leaderboard_LeaderboardData__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C35530, app::LeaderboardData*, get_Item, (app::Dictionary_2_Leaderboard_LeaderboardData_ * this_ptr, app::Leaderboard__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x0476A8D8, Dictionary_2_Leaderboard_LeaderboardData__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C36CB0, bool, Remove, (app::Dictionary_2_Leaderboard_LeaderboardData_ * this_ptr, app::Leaderboard__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x047033C8, Dictionary_2_Leaderboard_LeaderboardData__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_Leaderboard_LeaderboardData_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04705F48, Dictionary_2_Leaderboard_LeaderboardData___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Leaderboard_LeaderboardData_
