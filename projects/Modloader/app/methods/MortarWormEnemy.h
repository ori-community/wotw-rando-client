#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MortarWormEnemy.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::MortarWormEnemy {
    IL2CPP_REGISTER_METHOD(0x01480330, bool, CanBeOptimized, (app::MortarWormEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01480370, bool, IgnoreDamage, (app::MortarWormEnemy * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x014803E0, bool, ShouldHide, (app::MortarWormEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01480470, bool, ShouldEmerge, (app::MortarWormEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01480550, bool, ShouldCharge, (app::MortarWormEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintDebugText, (app::MortarWormEnemy * this_ptr, app::String* param))
    IL2CPP_REGISTER_METHOD(0x01480330, bool, get_IsHidden, (app::MortarWormEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014805E0, void, Start, (app::MortarWormEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01481C80, void, ForceEmerge, (app::MortarWormEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01481CD0, void, Awake, (app::MortarWormEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01481E30, void, OnDestroy, (app::MortarWormEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01481FF0, void, FixedUpdate, (app::MortarWormEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01482210, void, UpdateMortarTrajectoryPeriodically, (app::MortarWormEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014822D0, void, ctor, (app::MortarWormEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01482420, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x014825B0, bool, _Start_b__28_0, (app::MortarWormEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014825E0, bool, _Start_b__28_1, (app::MortarWormEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01482630, bool, _Start_b__28_2, (app::MortarWormEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01482680, bool, _Start_b__28_3, (app::MortarWormEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014827B0, void, _Start_b__28_4, (app::MortarWormEnemy * this_ptr))
} // namespace app::classes::MortarWormEnemy
