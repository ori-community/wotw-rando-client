#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayerLeaderboardEntry.h>

namespace app::classes::PlayFab::ClientModels::PlayerLeaderboardEntry {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerLeaderboardEntry * this_ptr))
}
