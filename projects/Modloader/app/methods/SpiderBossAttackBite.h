#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpiderBossAttackBite {
    IL2CPP_REGISTER_METHOD(0x009652C0, void, OnEnter, (app::SpiderBossAttackBite * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x009655D0, app::BehaviourStatus__Enum, OnExecute, (app::SpiderBossAttackBite * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00965630, void, OnExit, (app::SpiderBossAttackBite * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00965930, void, InitializeCancellableController, (app::SpiderBossAttackBite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00965980, void, InitializeHitReactionController, (app::SpiderBossAttackBite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009659D0, void, ChangeState, (app::SpiderBossAttackBite * this_ptr, app::SpiderBossAttackBite_State__Enum new_state))
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, UpdateState, (app::SpiderBossAttackBite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00965A10, void, OnEnterTransition, (app::SpiderBossAttackBite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterShootAndEnd, (app::SpiderBossAttackBite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00965A40, void, OnTimelineEnded, (app::SpiderBossAttackBite * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047560E0, SpiderBossAttackBite_OnTimelineEnded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00965A60, void, Bite, (app::SpiderBossAttackBite * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478D458, SpiderBossAttackBite_Bite__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00966080, void, SpawnProjectile, (app::SpiderBossAttackBite * this_ptr, app::Vector2 shoot_point, app::Vector3 shoot_velocity))
    IL2CPP_REGISTER_METHOD(0x009664A0, void, OnProjectileCollision, (app::SpiderBossAttackBite * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHODINFO(0x04795F90, SpiderBossAttackBite_OnProjectileCollision__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009666A0, void, SpawnAcid, (app::SpiderBossAttackBite * this_ptr, app::GameObject* prefab, app::Vector3 position, app::Vector3 up, app::Transform* parent))
    IL2CPP_REGISTER_METHOD(0x009668D0, void, ctor, (app::SpiderBossAttackBite * this_ptr))
} // namespace app::classes::SpiderBossAttackBite
