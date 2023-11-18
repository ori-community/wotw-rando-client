#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetLeaderboardAroundUserRequest.h>

namespace app::classes::PlayFab::ServerModels::GetLeaderboardAroundUserRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetLeaderboardAroundUserRequest * this_ptr))
}
