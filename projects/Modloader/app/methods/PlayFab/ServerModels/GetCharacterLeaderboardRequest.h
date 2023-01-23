#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GetCharacterLeaderboardRequest_1.h>

namespace app::classes::PlayFab::ServerModels::GetCharacterLeaderboardRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetCharacterLeaderboardRequest_1 * this_ptr))
}
