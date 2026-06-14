#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SpiderBossAcidAttack.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SpiderBossAcidAttack {
    IL2CPP_REGISTER_METHOD(0x009628E0, bool, get_IsAttacking, app::SpiderBossAcidAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009628F0, void, OnEnter, app::SpiderBossAcidAttack* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00962D30, void, StartAttack, app::SpiderBossAcidAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00963400, void, StopAttack, app::SpiderBossAcidAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009634D0, app::BehaviourStatus__Enum, OnExecute, app::SpiderBossAcidAttack* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00963920, void, Shoot, app::SpiderBossAcidAttack* this_ptr, app::Vector3 start_pos, app::Vector3 target_pos)
    IL2CPP_REGISTER_METHOD(0x00963B60, void, ProjectileCollision, app::SpiderBossAcidAttack* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x00963EE0, void, SpawnProjectile, app::SpiderBossAcidAttack* this_ptr, app::Vector2 shoot_point, app::Vector3 shoot_velocity)
    IL2CPP_REGISTER_METHOD(0x009645D0, bool, CanSpawnCreep, app::SpiderBossAcidAttack* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00964780, void, SpawnCreep, app::SpiderBossAcidAttack* this_ptr, app::Vector3 position, app::Vector3 up, app::Transform* parent)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LateUpdate, app::SpiderBossAcidAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00964A10, void, OnExit, app::SpiderBossAcidAttack* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00964DE0, void, OnDrawGizmos, app::SpiderBossAcidAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00964E80, void, ctor, app::SpiderBossAcidAttack* this_ptr)
} // namespace app::classes::SpiderBossAcidAttack
