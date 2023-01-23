#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DeadBatEnemy.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/DeadBatEnemy_State__Enum.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::DeadBatEnemy {
    IL2CPP_REGISTER_METHOD(0x00DD66F0, void, OnReceiveContext, (app::DeadBatEnemy * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00DD68F0, void, OnRecieveDamage, (app::DeadBatEnemy * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00601090, bool, get_IsSuspended, (app::DeadBatEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0041DB70, void, set_IsSuspended, (app::DeadBatEnemy * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FFCE0, app::SuspendableMask__Enum, get_Mask, (app::DeadBatEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DD6A10, void, set_Mask, (app::DeadBatEnemy * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00DD6AD0, void, ChangeState, (app::DeadBatEnemy * this_ptr, app::DeadBatEnemy_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00DD6D70, void, UpdateState, (app::DeadBatEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DD71C0, void, OnCollisionEnter, (app::DeadBatEnemy * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x00DD71C0, void, OnCollisionStay, (app::DeadBatEnemy * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x00DD7380, void, OnHitFloor, (app::DeadBatEnemy * this_ptr, app::Vector3 normal))
    IL2CPP_REGISTER_METHOD(0x00DD7740, void, Awake, (app::DeadBatEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DD7950, void, Start, (app::DeadBatEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DD7960, void, OnDestroy, (app::DeadBatEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DD7A00, void, FixedUpdate, (app::DeadBatEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DD7B60, void, ctor, (app::DeadBatEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, (app::DeadBatEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, (app::DeadBatEnemy * this_ptr))
} // namespace app::classes::DeadBatEnemy
