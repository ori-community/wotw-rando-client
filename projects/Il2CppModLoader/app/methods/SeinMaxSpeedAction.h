#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinMaxSpeedAction {
    IL2CPP_REGISTER_METHOD(0x008A2DD0, void, OnHorizontalInputCalculate, (app::SeinMaxSpeedAction * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047645E8, SeinMaxSpeedAction_OnHorizontalInputCalculate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008A2F50, void, OnEnable, (app::SeinMaxSpeedAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A3130, void, OnDisable, (app::SeinMaxSpeedAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A3310, void, Perform, (app::SeinMaxSpeedAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x008A3320, void, FixedUpdate, (app::SeinMaxSpeedAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A34B0, void, Stop, (app::SeinMaxSpeedAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00446590, bool, get_IsPerforming, (app::SeinMaxSpeedAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A34C0, float, get_Duration, (app::SeinMaxSpeedAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A34D0, void, set_Duration, (app::SeinMaxSpeedAction * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0043BB90, void, ctor, (app::SeinMaxSpeedAction * this_ptr))
}
