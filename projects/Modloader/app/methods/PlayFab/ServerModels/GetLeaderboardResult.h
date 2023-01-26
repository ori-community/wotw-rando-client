#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetLeaderboardResult_1.h>

namespace app::classes::PlayFab::ServerModels::GetLeaderboardResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetLeaderboardResult_1 * this_ptr))
}
