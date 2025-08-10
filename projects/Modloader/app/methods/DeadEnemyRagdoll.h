#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DeadEnemyRagdoll.h>
#include <Modloader/app/structs/DeadEnemyRagdoll_State__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::DeadEnemyRagdoll {
    IL2CPP_REGISTER_METHOD(0x00DD7B80, void, OnReceiveContext, app::DeadEnemyRagdoll* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00DD7C80, void, OnRecieveDamage, app::DeadEnemyRagdoll* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x007DE870, bool, get_IsSuspended, app::DeadEnemyRagdoll* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007DE880, void, set_IsSuspended, app::DeadEnemyRagdoll* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x006B90B0, app::SuspendableMask__Enum, get_Mask, app::DeadEnemyRagdoll* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DD82E0, void, set_Mask, app::DeadEnemyRagdoll* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00DD83A0, void, ChangeState, app::DeadEnemyRagdoll* this_ptr, app::DeadEnemyRagdoll_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterBounce, app::DeadEnemyRagdoll* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DD8420, void, OnEnterDrown, app::DeadEnemyRagdoll* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DD8430, void, OnEnterPlumit, app::DeadEnemyRagdoll* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DD8480, void, OnEnterFlatLand, app::DeadEnemyRagdoll* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DD8630, void, UpdatePlummit, app::DeadEnemyRagdoll* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DD8E70, void, UpdateBounce, app::DeadEnemyRagdoll* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DD90E0, void, UpdateLand, app::DeadEnemyRagdoll* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DD9330, void, UpdateDrown, app::DeadEnemyRagdoll* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DD9600, void, UpdateState, app::DeadEnemyRagdoll* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DD96B0, void, OnCollisionEnter, app::DeadEnemyRagdoll* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x00DD96B0, void, OnCollisionStay, app::DeadEnemyRagdoll* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x00DD96C0, void, OnCollision, app::DeadEnemyRagdoll* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x00DD9910, void, Explode, app::DeadEnemyRagdoll* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DD9B50, void, OnHitFloor, app::DeadEnemyRagdoll* this_ptr, app::Vector3 normal, app::GameObject* target_game_object)
    IL2CPP_REGISTER_METHOD(0x00DDA980, void, Awake, app::DeadEnemyRagdoll* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DDAB40, void, Start, app::DeadEnemyRagdoll* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DDABF0, void, OnDestroy, app::DeadEnemyRagdoll* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DDAC90, void, FixedUpdate, app::DeadEnemyRagdoll* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DDAF60, void, ctor, app::DeadEnemyRagdoll* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, app::DeadEnemyRagdoll* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, app::DeadEnemyRagdoll* this_ptr)
} // namespace app::classes::DeadEnemyRagdoll
