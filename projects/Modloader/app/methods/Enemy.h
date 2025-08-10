#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/Enemy.h>

namespace app::classes::Enemy {
    IL2CPP_REGISTER_METHOD(0x00BFDBE0, float, ScaleHealth, float health)
    IL2CPP_REGISTER_METHOD(0x00BFDCB0, void, Awake, app::Enemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BFDE40, void, OnDestroy, app::Enemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BFDFF0, void, OnDeathEvent, app::Enemy* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00BFE000, void, HandleLifeShard, app::Enemy* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00443680, void, ctor, app::Enemy* this_ptr)
} // namespace app::classes::Enemy
