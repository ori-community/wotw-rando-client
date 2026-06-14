#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XalAchievements_c_DisplayClass19_0.h>
#include <Modloader/app/structs/XalUserGetTokenAndSignatureData.h>

namespace app::classes::SystemIntegration::Synchronizer::Achievements::XalAchievements___c__DisplayClass19_0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::XalAchievements_c_DisplayClass19_0* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00532530, void, _AwardOnServer_b__0, app::XalAchievements_c_DisplayClass19_0* this_ptr, app::XalUserGetTokenAndSignatureData o)
    IL2CPP_REGISTER_METHOD(0x00532810, void, _AwardOnServer_b__2, app::XalAchievements_c_DisplayClass19_0* this_ptr, app::String* res)
    IL2CPP_REGISTER_METHOD(0x00532840, void, _AwardOnServer_b__1, app::XalAchievements_c_DisplayClass19_0* this_ptr, int32_t e)
} // namespace app::classes::SystemIntegration::Synchronizer::Achievements::XalAchievements___c__DisplayClass19_0
