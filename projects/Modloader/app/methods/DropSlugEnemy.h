#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DropSlugEnemy {
    IL2CPP_REGISTER_METHOD(0x00BE1310, bool, CanBeOptimized, (app::DropSlugEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00954540, void, OnTimedRespawn, (app::DropSlugEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BE1350, void, Start, (app::DropSlugEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BE2B20, bool, ShouldThrow, (app::DropSlugEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04789850, DropSlugEnemy_ShouldThrow__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00BE2C40, bool, ShouldThrow2, (app::DropSlugEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04752438, DropSlugEnemy_ShouldThrow2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00BE2D70, void, OnThrow, (app::DropSlugEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04791250, DropSlugEnemy_OnThrow__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00BE2EE0, bool, ShouldFall, (app::DropSlugEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473E898, DropSlugEnemy_ShouldFall__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00BE3020, bool, ShouldAlert, (app::DropSlugEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04748BE0, DropSlugEnemy_ShouldAlert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00BE3120, bool, ShouldNotAlert, (app::DropSlugEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04739368, DropSlugEnemy_ShouldNotAlert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00BE3220, bool, HasHitGround, (app::DropSlugEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474CB78, DropSlugEnemy_HasHitGround__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00BE3440, void, FixedUpdate, (app::DropSlugEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BE34E0, void, ctor, (app::DropSlugEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BE3630, void, _Start_b__13_0, (app::DropSlugEnemy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478B3A0, DropSlugEnemy__Start_b__13_0__MethodInfo)
} // namespace app::classes::DropSlugEnemy
