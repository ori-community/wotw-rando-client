#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetLeaderboardAroundUserResult.h>

namespace app::classes::PlayFab::ServerModels::GetLeaderboardAroundUserResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetLeaderboardAroundUserResult * this_ptr))
}
