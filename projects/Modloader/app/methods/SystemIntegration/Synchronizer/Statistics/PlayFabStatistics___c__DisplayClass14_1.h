#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetFriendLeaderboardAroundPlayerResult.h>
#include <Modloader/app/structs/PlayFabStatistics_c_DisplayClass14_1.h>

namespace app::classes::SystemIntegration::Synchronizer::Statistics::PlayFabStatistics___c__DisplayClass14_1 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayFabStatistics_c_DisplayClass14_1* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0053AA30,
        void,
        _GetStatistics_b__11,
        app::PlayFabStatistics_c_DisplayClass14_1* this_ptr,
        app::GetFriendLeaderboardAroundPlayerResult* player_entry_result
    )
} // namespace app::classes::SystemIntegration::Synchronizer::Statistics::PlayFabStatistics___c__DisplayClass14_1
