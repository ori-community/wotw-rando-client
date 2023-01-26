#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterLeaderboardEntry_1.h>

namespace app::classes::PlayFab::ServerModels::CharacterLeaderboardEntry {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CharacterLeaderboardEntry_1 * this_ptr))
}
