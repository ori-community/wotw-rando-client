#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetLeaderboardAroundCharacterRequest.h>

namespace app::classes::PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetLeaderboardAroundCharacterRequest * this_ptr))
}
