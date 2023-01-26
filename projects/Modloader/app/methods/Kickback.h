#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Kickback.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::Kickback {
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_TimeRemaining, (app::Kickback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E71150, float, get_KickbackDuration, (app::Kickback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00573170, float, get_KickbackMultiplier, (app::Kickback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E71230, app::Vector2, get_KickbackDirection, (app::Kickback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E71250, void, set_KickbackDirection, (app::Kickback * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x00E71270, float, get_CurrentKickbackSpeed, (app::Kickback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E712D0, app::Vector2, get_KickbackVector, (app::Kickback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E713F0, void, ApplyKickback_1, (app::Kickback * this_ptr, float kickback_multiplier))
    IL2CPP_REGISTER_METHOD(0x00E71410, void, ApplyKickback_2, (app::Kickback * this_ptr, float kickback_multiplier, app::Vector2 kickback_direction))
    IL2CPP_REGISTER_METHOD(0x00E71470, void, AdvanceTime, (app::Kickback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008001B0, void, Stop, (app::Kickback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Kickback * this_ptr))
} // namespace app::classes::Kickback
