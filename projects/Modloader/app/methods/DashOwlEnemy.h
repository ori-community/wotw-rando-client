#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DashOwlEnemy {
    IL2CPP_REGISTER_METHOD(0x00DCD570, bool, CanBeOptimized, (app::DashOwlEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DCD5B0, void, Awake, (app::DashOwlEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DCFBC0, void, Start, (app::DashOwlEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BE3440, void, FixedUpdate, (app::DashOwlEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashBounce, (app::DashOwlEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047822B8, DashOwlEnemy_OnBashBounce__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00A1FC00, bool, CurrentStateTimeGreaterThan, (app::DashOwlEnemy * this_ptr, float duration))
    IL2CPP_REGISTER_METHOD(0x00DCFC10, bool, NearPlayer, (app::DashOwlEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DCFC10, bool, PlayerInAggressiveRange, (app::DashOwlEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DCFC30, bool, PlayerOutsideAggressiveRange, (app::DashOwlEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DCFC60, bool, PlayerInDashRange, (app::DashOwlEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04723118, DashOwlEnemy_PlayerInDashRange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DCFD30, bool, IsWithinDistanceFromStartPosition, (app::DashOwlEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DCFD90, bool, DamageTypeIsBash, (app::DashOwlEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04759E70, DashOwlEnemy_DamageTypeIsBash__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DCFEE0, bool, DamageTypeIsHurt, (app::DashOwlEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04756640, DashOwlEnemy_DamageTypeIsHurt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DD0030, void, ctor, (app::DashOwlEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C40F0, bool, _Awake_b__8_1, (app::DashOwlEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04742CB8, DashOwlEnemy__Awake_b__8_1__MethodInfo)
} // namespace app::classes::DashOwlEnemy
