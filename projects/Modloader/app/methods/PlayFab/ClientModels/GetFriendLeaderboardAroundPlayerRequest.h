#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetFriendLeaderboardAroundPlayerRequest.h>

namespace app::classes::PlayFab::ClientModels::GetFriendLeaderboardAroundPlayerRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetFriendLeaderboardAroundPlayerRequest * this_ptr))
}
