#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AchievementAsset.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/PlayFabAchievements_c.h>
#include <Modloader/app/structs/PlayFabError.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SystemIntegration::Synchronizer::Achievements::PlayFabAchievements___c {
    IL2CPP_REGISTER_METHOD(0x0052DD90, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayFabAchievements_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052DED0, void, _AwardOnServer_b__16_1, app::PlayFabAchievements_c* this_ptr, app::PlayFabError* error)
    IL2CPP_REGISTER_METHOD(0x0052DFA0, app::String*, _UpdateFromServer_b__18_0, app::PlayFabAchievements_c* this_ptr, app::AchievementAsset* o)
    IL2CPP_REGISTER_METHOD(0x0052DFC0, int32_t, _UpdateFromServer_b__18_1, app::PlayFabAchievements_c* this_ptr, app::List_1_System_String_* t)
    IL2CPP_REGISTER_METHOD(0x0052E040, bool, _UpdateFromServer_b__18_4, app::PlayFabAchievements_c* this_ptr, bool o)
} // namespace app::classes::SystemIntegration::Synchronizer::Achievements::PlayFabAchievements___c
