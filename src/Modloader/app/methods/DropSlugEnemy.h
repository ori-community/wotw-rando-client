#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DropSlugEnemy.h>

namespace app::classes::DropSlugEnemy {
    IL2CPP_REGISTER_METHOD(0x00BE1310, bool, CanBeOptimized, app::DropSlugEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00954540, void, OnTimedRespawn, app::DropSlugEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE1350, void, Start, app::DropSlugEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE2B20, bool, ShouldThrow, app::DropSlugEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE2C40, bool, ShouldThrow2, app::DropSlugEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE2D70, void, OnThrow, app::DropSlugEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE2EE0, bool, ShouldFall, app::DropSlugEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE3020, bool, ShouldAlert, app::DropSlugEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE3120, bool, ShouldNotAlert, app::DropSlugEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE3220, bool, HasHitGround, app::DropSlugEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE3440, void, FixedUpdate, app::DropSlugEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE34E0, void, ctor, app::DropSlugEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE3630, void, _Start_b__13_0, app::DropSlugEnemy* this_ptr)
} // namespace app::classes::DropSlugEnemy
