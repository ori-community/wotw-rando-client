#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AwardSteamAchievementResult.h>

namespace app::classes::PlayFab::ServerModels::AwardSteamAchievementResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AwardSteamAchievementResult* this_ptr)
}
