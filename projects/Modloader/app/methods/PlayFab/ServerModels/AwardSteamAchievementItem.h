#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AwardSteamAchievementItem.h>

namespace app::classes::PlayFab::ServerModels::AwardSteamAchievementItem {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AwardSteamAchievementItem * this_ptr))
}
