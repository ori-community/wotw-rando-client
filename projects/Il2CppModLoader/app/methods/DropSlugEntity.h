#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::DropSlugEntity {
    IL2CPP_REGISTER_METHOD(0x00BE3E30, float, get_ExposedFallRange, (app::DropSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UsesHealthbar, (app::DropSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BE3E40, void, OnUpdate, (app::DropSlugEntity * this_ptr, float time_delta))
    IL2CPP_REGISTER_METHOD(0x00B68B50, app::Vector3, ModifyKickbackForce, (app::DropSlugEntity * this_ptr, app::Vector3 force, app::Damage* damage, bool is_on_ground))
    IL2CPP_REGISTER_METHOD(0x00BE3EB0, void, ResolveDamage, (app::DropSlugEntity * this_ptr, app::DamageResult* damage_result))
    IL2CPP_REGISTER_METHOD(0x00BE3ED0, void, ctor, (app::DropSlugEntity * this_ptr))
} // namespace app::classes::DropSlugEntity
