#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/CacheData.h>
#include <Modloader/app/structs/CacheData__Array.h>
#include <Modloader/app/structs/SteamAchievements.h>
#include <Modloader/app/structs/UserAchievementStored_t.h>
#include <Modloader/app/structs/UserStatsReceived_t.h>
#include <Modloader/app/structs/UserStatsStored_t.h>

namespace app::classes::SystemIntegration::Synchronizer::Achievements::SteamAchievements {
    IL2CPP_REGISTER_METHOD(0x0052E6A0, app::String*, get_Name, (app::SteamAchievements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronising, (app::SteamAchievements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_HasSynchronised, (app::SteamAchievements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_HasSynchronised, (app::SteamAchievements * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0052E720, bool, get_Disable, ())
    IL2CPP_REGISTER_METHOD(0x0052E7A0, void, set_Disable, (bool value))
    IL2CPP_REGISTER_METHOD(0x0052E830, void, ctor, (app::SteamAchievements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052EBB0, void, OnAchievementStored, (app::SteamAchievements * this_ptr, app::UserAchievementStored_t param))
    IL2CPP_REGISTER_METHOD(0x0052EE20, void, OnUserStatsStored, (app::SteamAchievements * this_ptr, app::UserStatsStored_t param))
    IL2CPP_REGISTER_METHOD(0x0052F0C0, void, OnUserStatsReceived, (app::SteamAchievements * this_ptr, app::UserStatsReceived_t param))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::CacheData__Array*, AwardedOnServer, (app::SteamAchievements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052F3F0, void, AwardOnServer, (app::SteamAchievements * this_ptr, app::CacheData* data))
    IL2CPP_REGISTER_METHOD(0x0052F660, void, UpdateFromServer, (app::SteamAchievements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052F670, void, Clear, (app::SteamAchievements * this_ptr))
} // namespace app::classes::SystemIntegration::Synchronizer::Achievements::SteamAchievements
