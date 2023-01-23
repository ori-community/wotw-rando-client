#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WindCollision.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/AnimationCurve.h>

namespace app::classes::WindCollision {
    IL2CPP_REGISTER_METHOD(0x00575560, void, Awake, (app::WindCollision * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005756C0, void, OnEnable, (app::WindCollision * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00575770, void, OnTriggerEnter, (app::WindCollision * this_ptr, app::Collider* col))
    IL2CPP_REGISTER_METHOD(0x00575CD0, void, PerformKnockback, (app::WindCollision * this_ptr, app::GameObject* go, app::DamageOwner* damage_owner, app::AnimationCurve* distance_to_knockback))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::WindCollision * this_ptr))
} // namespace app::classes::WindCollision
