#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayerLeaderboardEntry_1.h>

namespace app::classes::PlayFab::ServerModels::PlayerLeaderboardEntry {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerLeaderboardEntry_1 * this_ptr))
}
