#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Projectile.h>
#include <Modloader/app/structs/ProjectileSpawner.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::ProjectileSpawner {
    IL2CPP_REGISTER_METHOD(0x00C7C010, app::Vector3, get_Position, (app::ProjectileSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00849480, float, get_TimeSinceLastShot, (app::ProjectileSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7C0A0, void, set_TimeSinceLastShot, (app::ProjectileSpawner * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FD490, int32_t, GetPrewarmAmount, (app::ProjectileSpawner * this_ptr, app::GameObject* entry))
    IL2CPP_REGISTER_METHOD(0x00C7C0B0, void, Awake, (app::ProjectileSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7C230, void, OnDestroy, (app::ProjectileSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7C2D0, void, Start, (app::ProjectileSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7C3C0, bool, get_TimerPaused, (app::ProjectileSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7C490, void, set_TimerPaused, (app::ProjectileSpawner * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00C7C560, void, OnEnable, (app::ProjectileSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7C570, void, OnDisable, (app::ProjectileSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7C5A0, void, SubscribeToTimelineTriggers, (app::ProjectileSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7C810, void, UnsubscribeToTimelineTriggers, (app::ProjectileSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7CA80, void, OnSpawnEvent, (app::ProjectileSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7CA80, void, OnTimedTrigger, (app::ProjectileSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7CA90, app::Projectile*, SpawnProjectile, (app::ProjectileSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7CE50, app::GameObject*, SpawnProjectileGameObject, (app::ProjectileSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7D2F0, void, AimAt, (app::ProjectileSpawner * this_ptr, app::Transform* target))
    IL2CPP_REGISTER_METHOD(0x00C7D540, void, FixedUpdate, (app::ProjectileSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B8960, bool, get_IsSuspended, (app::ProjectileSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B8970, void, set_IsSuspended, (app::ProjectileSpawner * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FFB70, app::SuspendableMask__Enum, get_Mask, (app::ProjectileSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7D760, void, set_Mask, (app::ProjectileSpawner * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00C7D820, bool, PhysicsReady, (app::ProjectileSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7D910, bool, ConditionMet, (app::ProjectileSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7D9F0, void, ctor, (app::ProjectileSpawner * this_ptr))
} // namespace app::classes::ProjectileSpawner
