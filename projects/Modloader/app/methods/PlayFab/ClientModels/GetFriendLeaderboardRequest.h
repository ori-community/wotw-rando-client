#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetFriendLeaderboardRequest.h>

namespace app::classes::PlayFab::ClientModels::GetFriendLeaderboardRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetFriendLeaderboardRequest* this_ptr)
}
