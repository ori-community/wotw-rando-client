#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetCharacterLeaderboardResult_1.h>

namespace app::classes::PlayFab::ServerModels::GetCharacterLeaderboardResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetCharacterLeaderboardResult_1* this_ptr)
}
