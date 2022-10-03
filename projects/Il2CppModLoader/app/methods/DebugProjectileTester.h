#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::DebugProjectileTester {
    IL2CPP_REGISTER_METHOD(0x00DFDD30, void, Shoot, (app::DebugProjectileTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DFE2C0, void, SpawnProjectile, (app::DebugProjectileTester * this_ptr, app::Vector2 shoot_point, app::Vector3 shoot_velocity))
    IL2CPP_REGISTER_METHOD(0x00DFE5B0, void, Update, (app::DebugProjectileTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FixedUpdate, (app::DebugProjectileTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DFE800, bool, get_IsSuspended, (app::DebugProjectileTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DFE810, void, set_IsSuspended, (app::DebugProjectileTester * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FF2B0, app::SuspendableMask__Enum, get_Mask, (app::DebugProjectileTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DFE820, void, set_Mask, (app::DebugProjectileTester * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00DFE8D0, void, ctor, (app::DebugProjectileTester * this_ptr))
} // namespace app::classes::DebugProjectileTester
