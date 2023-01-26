#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArmouredRammingEnemy_c.h>
#include <Modloader/app/structs/LegacyEntity.h>

namespace app::classes::ArmouredRammingEnemy___c {
    IL2CPP_REGISTER_METHOD(0x0083FBF0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ArmouredRammingEnemy_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__4_0, (app::ArmouredRammingEnemy_c * this_ptr, app::LegacyEntity* _p0_))
} // namespace app::classes::ArmouredRammingEnemy___c
