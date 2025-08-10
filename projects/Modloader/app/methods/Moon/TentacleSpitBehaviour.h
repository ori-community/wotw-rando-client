#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Projectile.h>
#include <Modloader/app/structs/TentacleSpitBehaviour.h>

namespace app::classes::Moon::TentacleSpitBehaviour {
    IL2CPP_REGISTER_METHOD(0x010B5B10, app::GameObject*, get_CreepPrefab, app::TentacleSpitBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010B5BC0, app::GameObject*, get_ProjectilePrefab, app::TentacleSpitBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010B5C70, int32_t, GetPrewarmAmount, app::TentacleSpitBehaviour* this_ptr, app::GameObject* entry)
    IL2CPP_REGISTER_METHOD(0x010B5C80, int32_t, GetPrewarmAmountForCreep, app::TentacleSpitBehaviour* this_ptr, app::GameObject* entry)
    IL2CPP_REGISTER_METHOD(0x010B5C90, void, OnEnter, app::TentacleSpitBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(
        0x010B5DF0,
        void,
        PlayTimeline,
        app::TentacleSpitBehaviour* this_ptr,
        app::MoonTimeline* timeline,
        app::EventTriggerAnimator* spit_trigger
    )
    IL2CPP_REGISTER_METHOD(0x010B5FA0, void, StartShooting, app::TentacleSpitBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010B5FC0, app::BehaviourStatus__Enum, OnExecute, app::TentacleSpitBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x010B6330, void, OnExit, app::TentacleSpitBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x010B6400, void, Shoot, app::TentacleSpitBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010B64A0, void, SpawnProjectile, app::TentacleSpitBehaviour* this_ptr, float shot_angle)
    IL2CPP_REGISTER_METHOD(0x010B6DB0, void, ProjectileBash, app::TentacleSpitBehaviour* this_ptr, app::Projectile* projectile)
    IL2CPP_REGISTER_METHOD(0x010B6DB0, void, ProjectileReflect, app::TentacleSpitBehaviour* this_ptr, app::Projectile* projectile)
    IL2CPP_REGISTER_METHOD(0x010B6DC0, void, IgnoreProjectileCollisions, app::TentacleSpitBehaviour* this_ptr, app::Projectile* projectile, bool ignore)
    IL2CPP_REGISTER_METHOD(0x010B6FA0, void, OnProjectileCollision, app::TentacleSpitBehaviour* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, app::TentacleSpitBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010B7680, void, ctor, app::TentacleSpitBehaviour* this_ptr)
} // namespace app::classes::Moon::TentacleSpitBehaviour
