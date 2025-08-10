#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/Enum.h>
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/KwolokBossCannonBehaviour.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Projectile.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::KwolokBossCannonBehaviour {
    IL2CPP_REGISTER_METHOD(0x0124C3F0, app::Vector3, get_ProjectedShootPoint, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsLocomotionFollowAllowed, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsLocomotionStayAtRangeAllowed, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0124C560, void, OnDestroy, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0124C6F0, void, OnEntityInitialized, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0124C870, void, OnEnter, app::KwolokBossCannonBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0124D5C0, app::BehaviourStatus__Enum, OnExecute, app::KwolokBossCannonBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0124D750, void, OnExit, app::KwolokBossCannonBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0124DF20, float, ComputeUtility, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanAccumulateHits, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanHitReact, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0124E170, void, ModifyAcceleration, app::KwolokBossCannonBehaviour* this_ptr, float* acceleration, float* deceleration)
    IL2CPP_REGISTER_METHOD(0x0124E210, void, ModifyMaxMovementSpeed, app::KwolokBossCannonBehaviour* this_ptr, float* speed)
    IL2CPP_REGISTER_METHOD(0x0124E220, void, ModifyDesiredLookAngle, app::KwolokBossCannonBehaviour* this_ptr, float* angle)
    IL2CPP_REGISTER_METHOD(0x0124E3C0, void, OnDamageReceivedCallback, app::KwolokBossCannonBehaviour* this_ptr, app::DamageResult result)
    IL2CPP_REGISTER_METHOD(0x0124E5F0, void, CacheTarget, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0124E8C0, void, Shoot, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0124EA10, void, FixedUpdate, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0124EB40, void, ProjectileCollision, app::KwolokBossCannonBehaviour* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x0124EEC0, bool, CanSpawnCreep, app::KwolokBossCannonBehaviour* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(
        0x0124F070,
        void,
        SpawnCreep,
        app::KwolokBossCannonBehaviour* this_ptr,
        app::Vector3 position,
        app::Vector3 up,
        app::Transform* parent
    )
    IL2CPP_REGISTER_METHOD(
        0x0124F3D0,
        app::Projectile*,
        SpawnProjectile,
        app::KwolokBossCannonBehaviour* this_ptr,
        app::Vector2 shoot_point,
        app::Vector3 shoot_velocity
    )
    IL2CPP_REGISTER_METHOD(0x0124F820, void, OnShootEvent, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0124F840, void, InitializeCancellableController, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0124F8D0, void, InitializeHitReactionController, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0124F960, void, OnCanFinishEnd, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0124F970, void, OnCanFinishStart, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0124F980, void, PlayTimeline, app::KwolokBossCannonBehaviour* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x0124FA80, void, PlayStart, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0124FB60, void, OnStartEnded, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0124FB70, void, PlayShoot, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0124FC50, void, OnShootEnded, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0124FE00, void, PlayEnd, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0124FEE0, void, OnEndEnded, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0124FEF0, void, UpdateState, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01250010, void, PositionOnSide, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012503B0, void, ClearMoveRequest, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01250410, bool, RepositionIfNeeded, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01250690, app::Enum__Array*, GetEntries, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01250730, app::Enum, Evaluate, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, app::KwolokBossCannonBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012507F0, void, ctor, app::KwolokBossCannonBehaviour* this_ptr)
} // namespace app::classes::KwolokBossCannonBehaviour
