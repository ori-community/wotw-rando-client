#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/SpitterEnemy.h>

namespace app::classes::SpitterEnemy {
    IL2CPP_REGISTER_METHOD(0x0099B6F0, app::Vector2, get_ThrownDirection, (app::SpitterEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099B710, void, set_ThrownDirection, (app::SpitterEnemy * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x0099B740, bool, CanBeOptimized, (app::SpitterEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099B7A0, bool, WilhelmScreamZoneRectanglesContain, (app::SpitterEnemy * this_ptr, app::Vector2 position))
    IL2CPP_REGISTER_METHOD(0x0099BA70, void, Start, (app::SpitterEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00728F70, bool, IsOnGround, (app::SpitterEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099E0F0, bool, HasHitWall, (app::SpitterEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099E120, void, TurnAround, (app::SpitterEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099E190, bool, CanSeePlayer, (app::SpitterEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099E210, bool, FurtherThanMinChargeDistance, (app::SpitterEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099E270, bool, CloserThanMinChargeDistance, (app::SpitterEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099E2D0, void, FixedUpdate, (app::SpitterEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099E8D0, void, UpdateRotation, (app::SpitterEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099EBC0, bool, ShouldThrow, (app::SpitterEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099ECF0, bool, ShouldStomped, (app::SpitterEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099EE30, bool, ShouldStun, (app::SpitterEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099EF70, bool, IsLightAttackDamage, (app::SpitterEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099F0A0, void, ctor, (app::SpitterEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099F1F0, bool, _Start_b__21_0, (app::SpitterEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099F260, bool, _Start_b__21_1, (app::SpitterEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099F2D0, bool, _Start_b__21_2, (app::SpitterEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099F2F0, bool, _Start_b__21_3, (app::SpitterEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099F310, bool, _Start_b__21_4, (app::SpitterEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099F360, bool, _Start_b__21_5, (app::SpitterEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099F3D0, bool, _Start_b__21_6, (app::SpitterEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099F480, bool, _Start_b__21_7, (app::SpitterEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099F520, bool, _Start_b__21_8, (app::SpitterEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099F570, bool, _Start_b__21_9, (app::SpitterEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C40F0, bool, _Start_b__21_10, (app::SpitterEnemy * this_ptr))
} // namespace app::classes::SpitterEnemy
