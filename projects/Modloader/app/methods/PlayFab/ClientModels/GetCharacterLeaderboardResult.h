#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetCharacterLeaderboardResult.h>

namespace app::classes::PlayFab::ClientModels::GetCharacterLeaderboardResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetCharacterLeaderboardResult * this_ptr))
}
