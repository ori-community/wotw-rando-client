#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/CacheData.h>
#include <Modloader/app/structs/CacheData__Array.h>
#include <Modloader/app/structs/XboxOneAchievements_1.h>

namespace app::classes::SystemIntegration::Synchronizer::Achievements::XboxOneAchievements {
    IL2CPP_REGISTER_METHOD(0x00532FC0, bool, get_Disable, ())
    IL2CPP_REGISTER_METHOD(0x00533040, void, set_Disable, (bool value))
    IL2CPP_REGISTER_METHOD(0x005330D0, app::String*, get_Name, (app::XboxOneAchievements_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsSynchronising, (app::XboxOneAchievements_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_IsSynchronising, (app::XboxOneAchievements_1 * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00533160, bool, get_HasSynchronised, (app::XboxOneAchievements_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00533170, void, set_HasSynchronised, (app::XboxOneAchievements_1 * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::CacheData__Array*, AwardedOnServer, (app::XboxOneAchievements_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, AwardOnServer, (app::XboxOneAchievements_1 * this_ptr, app::CacheData* data))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateFromServer, (app::XboxOneAchievements_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00533180, void, Clear, (app::XboxOneAchievements_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00533210, void, ctor, (app::XboxOneAchievements_1 * this_ptr))
} // namespace app::classes::SystemIntegration::Synchronizer::Achievements::XboxOneAchievements
