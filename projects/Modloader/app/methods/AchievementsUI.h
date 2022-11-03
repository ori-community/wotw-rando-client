#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AchievementsUI {
    IL2CPP_REGISTER_METHOD(0x004BDC70, app::AchievementsUI*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x004BDD70, bool, get_Available, ())
    IL2CPP_REGISTER_METHOD(0x004BDE20, bool, get_Visible, ())
    IL2CPP_REGISTER_METHOD(0x004BDE50, void, set_Visible, (bool value))
    IL2CPP_REGISTER_METHOD(0x004BDF80, void, FixedUpdate, (app::AchievementsUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004BE040, app::Rect, PushDown, (app::Rect * rect, float offset))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AchievementsUI * this_ptr))
} // namespace app::classes::AchievementsUI
