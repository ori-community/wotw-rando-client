#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetLeaderboardRequest_1.h>

namespace app::classes::PlayFab::ServerModels::GetLeaderboardRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetLeaderboardRequest_1* this_ptr)
}
