#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/PlayFabAchievements.h>
#include <Modloader/app/structs/CacheData__Array.h>
#include <Modloader/app/structs/CacheData.h>

namespace app::classes::SystemIntegration::Synchronizer::Achievements::PlayFabAchievements {
    IL2CPP_REGISTER_METHOD(0x0052C5D0, app::String*, get_Name, (app::PlayFabAchievements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsSynchronising, (app::PlayFabAchievements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_IsSynchronising, (app::PlayFabAchievements * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00504D80, bool, get_HasSynchronised, (app::PlayFabAchievements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C660, void, set_HasSynchronised, (app::PlayFabAchievements * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0052C670, bool, get_Disable, ())
    IL2CPP_REGISTER_METHOD(0x0052C6F0, void, set_Disable, (bool value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::CacheData__Array*, AwardedOnServer, (app::PlayFabAchievements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C780, void, AwardOnServer, (app::PlayFabAchievements * this_ptr, app::CacheData* data))
    IL2CPP_REGISTER_METHOD(0x0052CE00, void, CompletedAward, (app::PlayFabAchievements * this_ptr, app::CacheData* data))
    IL2CPP_REGISTER_METHOD(0x0052D060, void, UpdateFromServer, (app::PlayFabAchievements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052DC70, void, Clear, (app::PlayFabAchievements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052DD00, void, ctor, (app::PlayFabAchievements * this_ptr))
} // namespace app::classes::SystemIntegration::Synchronizer::Achievements::PlayFabAchievements
