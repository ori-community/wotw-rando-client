#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CacheData.h>
#include <Modloader/app/structs/SteamAchievements_c_DisplayClass15_0.h>

namespace app::classes::SystemIntegration::Synchronizer::Achievements::SteamAchievements___c__DisplayClass15_0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SteamAchievements_c_DisplayClass15_0* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052F700, bool, _OnAchievementStored_b__0, app::SteamAchievements_c_DisplayClass15_0* this_ptr, app::CacheData* o)
} // namespace app::classes::SystemIntegration::Synchronizer::Achievements::SteamAchievements___c__DisplayClass15_0
