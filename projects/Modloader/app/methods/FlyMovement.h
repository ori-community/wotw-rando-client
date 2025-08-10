#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/FlyMovement.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::FlyMovement {
    IL2CPP_REGISTER_METHOD(0x0127A650, float, get_Speed, app::FlyMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0127A660, void, set_Speed, app::FlyMovement* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0127A750, float, get_Angle, app::FlyMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0127A770, void, set_Angle, app::FlyMovement* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0127A850, app::Vector2, get_VelocityAsDelta, app::FlyMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0127A960, void, set_VelocityAsDelta, app::FlyMovement* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Rigidbody*, get_Rigidbody, app::FlyMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0127AB10, void, Awake, app::FlyMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0127ACC0, void, OnDestroy, app::FlyMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, app::FlyMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0127AD60, void, FixedUpdate, app::FlyMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0127AFC0, void, OnRecieveDamage, app::FlyMovement* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00724040, float, get_VelocityX, app::FlyMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00724050, void, set_VelocityX, app::FlyMovement* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x006B5650, float, get_VelocityY, app::FlyMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0098F5E0, void, set_VelocityY, app::FlyMovement* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0127B080, void, Serialize, app::FlyMovement* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsSuspended, app::FlyMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00585320, void, set_IsSuspended, app::FlyMovement* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FF2B0, app::SuspendableMask__Enum, get_Mask, app::FlyMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0127B470, void, set_Mask, app::FlyMovement* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x0127B520, void, ctor, app::FlyMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, app::FlyMovement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, app::FlyMovement* this_ptr)
} // namespace app::classes::FlyMovement
