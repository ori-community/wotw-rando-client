#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArmouredRammingEnemy.h>
#include <Modloader/app/structs/Damage.h>

namespace app::classes::ArmouredRammingEnemy {
    IL2CPP_REGISTER_METHOD(0x0083F0C0, void, OnModifyDamage, app::ArmouredRammingEnemy* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x0083F8E0, void, ctor, app::ArmouredRammingEnemy* this_ptr)
} // namespace app::classes::ArmouredRammingEnemy
