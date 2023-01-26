#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BreakingWall.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::BreakingWall {
    IL2CPP_REGISTER_METHOD(0x00505C70, void, Awake, (app::BreakingWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D50D30, void, Start, (app::BreakingWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D50F60, void, OnRecieveDamage, (app::BreakingWall * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00D50FE0, void, BreakWall, (app::BreakingWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::BreakingWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, (app::BreakingWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, (app::BreakingWall * this_ptr))
} // namespace app::classes::BreakingWall
