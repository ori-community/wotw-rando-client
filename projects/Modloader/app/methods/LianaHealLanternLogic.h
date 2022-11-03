#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LianaHealLanternLogic {
    IL2CPP_REGISTER_METHOD(0x0113DB90, void, Start, (app::LianaHealLanternLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0113DEA0, void, OnDestroy, (app::LianaHealLanternLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonSetupAnimator*, get_MoonSetupAnimator, (app::LianaHealLanternLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0113E1B0, void, set_MoonSetupAnimator, (app::LianaHealLanternLogic * this_ptr, app::IMoonSetupAnimator* value))
    IL2CPP_REGISTER_METHOD(0x0113E280, void, OnDamageRecieved, (app::LianaHealLanternLogic * this_ptr, app::DamageResult result))
    IL2CPP_REGISTER_METHODINFO(0x047021B0, LianaHealLanternLogic_OnDamageRecieved__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0113E3F0, void, Update, (app::LianaHealLanternLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0113E4C0, void, Respawn, (app::LianaHealLanternLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0113E520, void, OnRestoreCheckpoint, (app::LianaHealLanternLogic * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04744460, LianaHealLanternLogic_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0113E590, void, SetLineEnd, (app::LianaHealLanternLogic * this_ptr, app::FixedJoint* line_end))
    IL2CPP_REGISTER_METHOD(0x0113E860, void, EnableBulb, (app::LianaHealLanternLogic * this_ptr, bool enable))
    IL2CPP_REGISTER_METHOD(0x0113F070, bool, IsOnScreen, (app::LianaHealLanternLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0113F2A0, void, ctor, (app::LianaHealLanternLogic * this_ptr))
} // namespace app::classes::LianaHealLanternLogic
