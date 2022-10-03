#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AchievementsController {
    IL2CPP_REGISTER_METHOD(0x004B4190, app::ReadOnlyCollection_1_Achievement_*, get_UnlockedAchievements, ())
    IL2CPP_REGISTER_METHOD(0x004B43B0, app::ReadOnlyCollection_1_Achievement_*, get_LockedAchievements, ())
    IL2CPP_REGISTER_METHOD(0x004B45D0, app::ReadOnlyCollection_1_Achievement_*, get_SecretAchievements, ())
    IL2CPP_REGISTER_METHOD(0x004B47F0, app::ReadOnlyCollection_1_Challenge_*, get_UnlockedChallenges, ())
    IL2CPP_REGISTER_METHOD(0x004B4A10, app::ReadOnlyCollection_1_Challenge_*, get_LockedChallenges, ())
    IL2CPP_REGISTER_METHOD(0x004B4C30, app::ReadOnlyCollection_1_Challenge_*, get_SecretChallenges, ())
    IL2CPP_REGISTER_METHOD(0x004B4E50, void, FixedUpdate, (app::AchievementsController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Destroy, (app::AchievementsController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004B53A0, void, AwardAchievement, (app::AchievementAsset * achievement))
    IL2CPP_REGISTER_METHOD(0x004B5CE0, void, UpdateAchievementProgress, (app::AchievementAsset * achievement, int32_t progress))
    IL2CPP_REGISTER_METHOD(0x004B5E90, void, AddAchievementToDisplay, (app::String * text, app::Texture* icon))
    IL2CPP_REGISTER_METHOD(0x004B6010, void, ClearAchievementsQueue, ())
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AchievementsController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004B6130, void, cctor, ())
} // namespace app::classes::AchievementsController
