#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BombableSolidWallEntity.h>
#include <Modloader/app/structs/DamageResult.h>

namespace app::classes::BombableSolidWallEntity {
    IL2CPP_REGISTER_METHOD(0x00D387B0, void, ResolveDamage, (app::BombableSolidWallEntity * this_ptr, app::DamageResult* damage_result))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetEntity, (app::BombableSolidWallEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D387E0, void, ctor, (app::BombableSolidWallEntity * this_ptr))
} // namespace app::classes::BombableSolidWallEntity
