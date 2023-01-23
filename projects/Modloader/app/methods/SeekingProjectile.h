#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/SeekingProjectile.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/IDamageReciever.h>

namespace app::classes::SeekingProjectile {
    IL2CPP_REGISTER_METHOD(0x0106CF40, app::Vector3, get_TargetPosition, (app::SeekingProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0106D0E0, bool, get_IsNearTarget, (app::SeekingProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0106D1B0, void, Awake, (app::SeekingProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0106D250, void, OnEnable, (app::SeekingProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0106D280, void, OnBashed, (app::SeekingProjectile * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x0106D440, void, FixedUpdate, (app::SeekingProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0106DAB0, void, Launch, (app::SeekingProjectile * this_ptr, float speed, app::Vector3 direction, float gravity, app::GameObject* owner, app::DamageOwner* damage_owner))
    IL2CPP_REGISTER_METHOD(0x0106DCE0, void, UpdateKinematics, (app::SeekingProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0106DFD0, void, HandleGravity, (app::SeekingProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0106E160, void, UpdateDesiredDirection, (app::SeekingProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0106E670, void, ExplodeProjectile, (app::SeekingProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0106EAD0, void, SetTarget, (app::SeekingProjectile * this_ptr, app::Transform* target, app::IDamageReciever* target_damage_receiver))
    IL2CPP_REGISTER_METHOD(0x0106EAE0, void, ctor, (app::SeekingProjectile * this_ptr))
} // namespace app::classes::SeekingProjectile
