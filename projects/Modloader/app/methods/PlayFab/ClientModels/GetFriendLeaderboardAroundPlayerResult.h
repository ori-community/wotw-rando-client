#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetFriendLeaderboardAroundPlayerResult.h>

namespace app::classes::PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetFriendLeaderboardAroundPlayerResult * this_ptr))
}
