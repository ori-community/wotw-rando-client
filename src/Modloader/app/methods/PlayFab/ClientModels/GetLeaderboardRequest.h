#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetLeaderboardRequest.h>

namespace app::classes::PlayFab::ClientModels::GetLeaderboardRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetLeaderboardRequest* this_ptr)
}
