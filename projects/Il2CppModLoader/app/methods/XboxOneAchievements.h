#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::XboxOneAchievements {
    IL2CPP_REGISTER_METHOD(0x00597000, app::Action_1_Achievement_*, get_OnAchievementUnlocked, ())
    IL2CPP_REGISTER_METHOD(0x005970A0, void, set_OnAchievementUnlocked, (app::Action_1_Achievement_ * value))
    IL2CPP_REGISTER_METHOD(0x00597150, app::Action_1_Challenge_*, get_OnChallengeUnlocked, ())
    IL2CPP_REGISTER_METHOD(0x005971F0, void, set_OnChallengeUnlocked, (app::Action_1_Challenge_ * value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AchievementsFetched, ())
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ReadOnlyCollection_1_Achievement_*, get_UnlockedAchievements, ())
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ReadOnlyCollection_1_Achievement_*, get_LockedAchievements, ())
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ReadOnlyCollection_1_Achievement_*, get_SecretAchievements, ())
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ReadOnlyCollection_1_Challenge_*, get_UnlockedChallenges, ())
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ReadOnlyCollection_1_Challenge_*, get_LockedChallenges, ())
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ReadOnlyCollection_1_Challenge_*, get_SecretChallenges, ())
    IL2CPP_REGISTER_METHOD(0x005972A0, bool, get_EnableAchievements, ())
    IL2CPP_REGISTER_METHOD(0x00597340, void, set_EnableAchievements, (bool value))
    IL2CPP_REGISTER_METHOD(0x005973F0, bool, UpdateAchievements, (app::Action * success, app::Action* failure))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, AwardAchievement, (app::String * achievement_id, app::Action* success, app::Action* failure))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XboxOneAchievements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597480, void, cctor, ())
} // namespace app::classes::XboxOneAchievements
