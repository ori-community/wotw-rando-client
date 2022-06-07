#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SystemIntegration::Synchronizer::Achievements::PlayFabAchievements___c {
    IL2CPP_REGISTER_METHOD(0x0052DD90, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayFabAchievements_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052DED0, void, _AwardOnServer_b__16_1, (app::PlayFabAchievements_c * this_ptr, app::PlayFabError * error))
    IL2CPP_REGISTER_METHODINFO(0x0470B848, PlayFabAchievements_c__AwardOnServer_b__16_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0052DFA0, app::String *, _UpdateFromServer_b__18_0, (app::PlayFabAchievements_c * this_ptr, app::AchievementAsset * o))
    IL2CPP_REGISTER_METHODINFO(0x0478A388, PlayFabAchievements_c__UpdateFromServer_b__18_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0052DFC0, int32_t, _UpdateFromServer_b__18_1, (app::PlayFabAchievements_c * this_ptr, app::List_1_System_String_ * t))
    IL2CPP_REGISTER_METHODINFO(0x0470EEC8, PlayFabAchievements_c__UpdateFromServer_b__18_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0052E040, bool, _UpdateFromServer_b__18_4, (app::PlayFabAchievements_c * this_ptr, bool o))
    IL2CPP_REGISTER_METHODINFO(0x04734980, PlayFabAchievements_c__UpdateFromServer_b__18_4__MethodInfo)
}
