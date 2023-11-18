#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BabyWormSand_c.h>
#include <Modloader/app/structs/Collider.h>

namespace app::classes::BabyWormSand___c {
    IL2CPP_REGISTER_METHOD(0x00F809B0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BabyWormSand_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F80AF0, bool, _ResetCollisionWithSandState_b__6_0, (app::BabyWormSand_c * this_ptr, app::Collider* col))
} // namespace app::classes::BabyWormSand___c
