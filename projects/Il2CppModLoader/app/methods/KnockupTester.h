#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::KnockupTester {
    IL2CPP_REGISTER_METHOD(0x01229AF0, void, Update, (app::KnockupTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01229D50, void, DamageAllEnemies, (app::KnockupTester * this_ptr, float amount, app::Vector2 force, app::DamageWeight__Enum weight))
    IL2CPP_REGISTER_METHOD(0x0122A100, void, ctor, (app::KnockupTester * this_ptr))
} // namespace app::classes::KnockupTester
