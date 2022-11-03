#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SystemIntegration::Synchronizer::Achievements::GrdkAchievements {
    IL2CPP_REGISTER_METHOD(0x0052BB80, app::String*, get_Name, (app::GrdkAchievements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052BC00, bool, get_IsSynchronising, (app::GrdkAchievements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052BCA0, bool, get_HasSynchronised, (app::GrdkAchievements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052BD40, bool, get_Disable, ())
    IL2CPP_REGISTER_METHOD(0x0052BDC0, void, set_Disable, (bool value))
    IL2CPP_REGISTER_METHOD(0x0052BE50, app::CacheData__Array*, AwardedOnServer, (app::GrdkAchievements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C2C0, void, AwardOnServer, (app::GrdkAchievements * this_ptr, app::CacheData* data))
    IL2CPP_REGISTER_METHOD(0x0052C3C0, void, UpdateFromServer, (app::GrdkAchievements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C490, void, Clear, (app::GrdkAchievements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GrdkAchievements * this_ptr))
} // namespace app::classes::SystemIntegration::Synchronizer::Achievements::GrdkAchievements
