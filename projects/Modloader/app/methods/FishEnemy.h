#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FishEnemy.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::FishEnemy {
    IL2CPP_REGISTER_METHOD(0x012673D0, bool, CanBeOptimized, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01267410, float, get_BendValue, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012674D0, void, FixedUpdate, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01267950, bool, ShouldThrow, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01267AA0, void, OnBashed, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01267C40, bool, WasBashed, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01267D90, bool, HitGround, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01267FF0, void, Start, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126A6A0, void, ApplyGravity, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126A740, bool, PlayerIsTooFarFromStartPosition, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126A7A0, bool, InSwimDistance, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126A800, bool, InAttackDistance, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126A860, bool, OutOfSwimDistance, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126A8C0, bool, PlayerInWater, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126A9B0, bool, OutOfWater, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00875720, bool, InWater, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126A9C0, void, UpdateSpriteRotation, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126ABF0, app::Vector2, get_AngleAsVector, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126AC00, void, ApplySoftSpeed, (app::FishEnemy * this_ptr, app::Vector2 speed))
    IL2CPP_REGISTER_METHOD(0x0126ADB0, void, OnExitWater, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126AEA0, void, OnEnterWater, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126AF90, void, ctor, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126B0E0, bool, _Start_b__19_0, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126B190, bool, _Start_b__19_1, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126B260, bool, _Start_b__19_2, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126B310, bool, _Start_b__19_3, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126B3B0, bool, _Start_b__19_4, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126B400, bool, _Start_b__19_5, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126B460, bool, _Start_b__19_6, (app::FishEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126B4D0, bool, _Start_b__19_7, (app::FishEnemy * this_ptr))
} // namespace app::classes::FishEnemy
