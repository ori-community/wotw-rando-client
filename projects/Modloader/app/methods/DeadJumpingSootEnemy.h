#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DeadJumpingSootEnemy {
    IL2CPP_REGISTER_METHOD(0x00DDB010, void, OnReceiveContext, (app::DeadJumpingSootEnemy * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00DDB260, void, OnRecieveDamage, (app::DeadJumpingSootEnemy * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x003FFD00, bool, get_IsSuspended, (app::DeadJumpingSootEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFD10, void, set_IsSuspended, (app::DeadJumpingSootEnemy * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x006515B0, app::SuspendableMask__Enum, get_Mask, (app::DeadJumpingSootEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DDB3E0, void, set_Mask, (app::DeadJumpingSootEnemy * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00DDB4A0, void, ChangeState, (app::DeadJumpingSootEnemy * this_ptr, app::DeadJumpingSootEnemy_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00DDB6B0, void, UpdateState, (app::DeadJumpingSootEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DDBAD0, void, OnCollisionEnter, (app::DeadJumpingSootEnemy * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x00DDBAD0, void, OnCollisionStay, (app::DeadJumpingSootEnemy * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x00DDBC90, void, OnHitFloor, (app::DeadJumpingSootEnemy * this_ptr, app::Vector3 normal))
    IL2CPP_REGISTER_METHOD(0x00DDC050, void, Awake, (app::DeadJumpingSootEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DDC260, void, Start, (app::DeadJumpingSootEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DDC270, void, OnDestroy, (app::DeadJumpingSootEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DDC310, void, FixedUpdate, (app::DeadJumpingSootEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DDC470, void, ctor, (app::DeadJumpingSootEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, (app::DeadJumpingSootEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, (app::DeadJumpingSootEnemy * this_ptr))
} // namespace app::classes::DeadJumpingSootEnemy
