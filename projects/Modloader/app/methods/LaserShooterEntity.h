#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/LaserShooterEntity.h>

namespace app::classes::LaserShooterEntity {
    IL2CPP_REGISTER_METHOD(0x00F13770, bool, LaserEnabled, app::LaserShooterEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F13780, bool, ProjectilesEnabled, app::LaserShooterEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsFlyingEnemy, app::LaserShooterEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F13790, void, OnAwake, app::LaserShooterEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F137F0, void, OnDied, app::LaserShooterEntity* this_ptr, app::DamageResult result)
    IL2CPP_REGISTER_METHOD(0x00F13AF0, void, ctor, app::LaserShooterEntity* this_ptr)
} // namespace app::classes::LaserShooterEntity
