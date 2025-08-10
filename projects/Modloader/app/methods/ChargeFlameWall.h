#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ChargeFlameWall.h>
#include <Modloader/app/structs/Damage.h>

namespace app::classes::ChargeFlameWall {
    IL2CPP_REGISTER_METHOD(0x01319670, void, Awake, app::ChargeFlameWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01319930, void, OnDestroy, app::ChargeFlameWall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01319C10, void, OnModifyDamage, app::ChargeFlameWall* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x0090CE60, void, OnDeathCallback, app::ChargeFlameWall* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00443680, void, ctor, app::ChargeFlameWall* this_ptr)
} // namespace app::classes::ChargeFlameWall
