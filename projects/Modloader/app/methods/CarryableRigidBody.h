#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/CarryableRigidBody.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::CarryableRigidBody {
    IL2CPP_REGISTER_METHOD(0x00B26440, void, add_OnAnyCarryablePickedUpAction, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x00B26580, void, remove_OnAnyCarryablePickedUpAction, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x00B266C0, void, Start, app::CarryableRigidBody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B26760, app::Vector3, get_Position, app::CarryableRigidBody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B267F0, void, set_Position, app::CarryableRigidBody* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x00B26870, void, Awake, app::CarryableRigidBody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B26A60, void, OnEnable, app::CarryableRigidBody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B26B20, void, OnDisable, app::CarryableRigidBody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B26C00, void, Serialize, app::CarryableRigidBody* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x00B26E30, bool, CanBeCarried, app::CarryableRigidBody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B270B0, bool, get_IsCarried, app::CarryableRigidBody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B270C0, void, Pickup, app::CarryableRigidBody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B27460, void, SetToCarryMode, app::CarryableRigidBody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B27960, void, SetToDropMode, app::CarryableRigidBody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B27BE0, void, Drop, app::CarryableRigidBody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B280E0, void, Throw, app::CarryableRigidBody* this_ptr, app::Vector3 target)
    IL2CPP_REGISTER_METHOD(0x00B26760, app::Vector3, get_CarryablePosition, app::CarryableRigidBody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B28180, void, add_OnDropEvent, app::CarryableRigidBody* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x00B28270, void, remove_OnDropEvent, app::CarryableRigidBody* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x00B28360, void, ExplodeAndRespawn, app::CarryableRigidBody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B286C0, void, FixedUpdate, app::CarryableRigidBody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B28C60, void, OnCollisionEnter, app::CarryableRigidBody* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x00B29060, void, OnCollisionStay, app::CarryableRigidBody* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x00B29250, void, OnRecieveDamage, app::CarryableRigidBody* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00B295C0, void, ctor, app::CarryableRigidBody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B297B0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, app::CarryableRigidBody* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, app::CarryableRigidBody* this_ptr)
} // namespace app::classes::CarryableRigidBody
