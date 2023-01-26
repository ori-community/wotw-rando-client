#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiderBossSpitBehaviour.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MirroredTimelineSet.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SpiderBossSpitBehaviour {
    IL2CPP_REGISTER_METHOD(0x011B7500, int32_t, get_NumShots, (app::SpiderBossSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B75C0, float, get_ShootSpeedMultiplier, (app::SpiderBossSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldPauseLocomotionIsConstant, (app::SpiderBossSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B7680, bool, ShouldPauseLocomotion, (app::SpiderBossSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B7690, void, CacheTarget, (app::SpiderBossSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B78E0, void, Shoot, (app::SpiderBossSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B7B90, void, FixedUpdate, (app::SpiderBossSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B7CC0, void, ProjectileCollision, (app::SpiderBossSpitBehaviour * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x011B8040, bool, CanSpawnCreep, (app::SpiderBossSpitBehaviour * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x011B81F0, void, SpawnCreep, (app::SpiderBossSpitBehaviour * this_ptr, app::Vector3 position, app::Vector3 up, app::Transform* parent))
    IL2CPP_REGISTER_METHOD(0x011B8530, void, SpawnProjectile, (app::SpiderBossSpitBehaviour * this_ptr, app::Vector2 shoot_point, app::Vector3 shoot_velocity))
    IL2CPP_REGISTER_METHOD(0x011B8950, void, OnShootEvent, (app::SpiderBossSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B8970, void, InitializeCancellableController, (app::SpiderBossSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B8A00, void, InitializeHitReactionController, (app::SpiderBossSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B8A90, void, OnCanFinishEnd, (app::SpiderBossSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B8AA0, void, OnCanFinishStart, (app::SpiderBossSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B8AB0, app::MoonTimeline*, GetTimeline, (app::SpiderBossSpitBehaviour * this_ptr, app::MirroredTimelineSet* set))
    IL2CPP_REGISTER_METHOD(0x011B8B90, void, PlayTimeline, (app::SpiderBossSpitBehaviour * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x011B8C90, void, PlayStart, (app::SpiderBossSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B8D80, void, OnStartEnded, (app::SpiderBossSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B8D90, void, PlayShoot, (app::SpiderBossSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B8E70, void, OnShootEnded, (app::SpiderBossSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B9030, void, PlayEnd, (app::SpiderBossSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B9110, void, OnEndEnded, (app::SpiderBossSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B9120, void, OnProcessRootMotion, (app::SpiderBossSpitBehaviour * this_ptr, app::Vector3 root_velocity))
    IL2CPP_REGISTER_METHOD(0x011B91F0, void, OnEnter, (app::SpiderBossSpitBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011B9D90, app::BehaviourStatus__Enum, OnExecute, (app::SpiderBossSpitBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011B9ED0, void, OnExit, (app::SpiderBossSpitBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011BA470, void, UpdateState, (app::SpiderBossSpitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011BA6B0, void, ctor, (app::SpiderBossSpitBehaviour * this_ptr))
} // namespace app::classes::SpiderBossSpitBehaviour
