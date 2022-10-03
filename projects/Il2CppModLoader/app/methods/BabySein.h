#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::BabySein {
    IL2CPP_REGISTER_METHOD(0x00860D50, void, Awake, (app::BabySein * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00860E10, void, OnDestroy, (app::BabySein * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00860F40, app::CharacterCapsuleController*, get_CapsuleController, (app::BabySein * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::DamageOwner*, get_DamageOwner, (app::BabySein * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_DamageOwner, (app::BabySein * this_ptr, app::DamageOwner* value))
    IL2CPP_REGISTER_METHOD(0x00860F60, app::Vector3, get_Position, (app::BabySein * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00860FC0, void, set_Position, (app::BabySein * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00861010, app::Vector3, get_MapDisplayPosition, (app::BabySein * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00861130, app::Vector3, get_DeltaPosition, (app::BabySein * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008612A0, void, Activate, (app::BabySein * this_ptr, bool active))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, get_GameObject, (app::BabySein * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00861360, bool, get_FaceLeft, (app::BabySein * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00861390, void, set_FaceLeft, (app::BabySein * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x008613E0, app::Vector3, get_Speed, (app::BabySein * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008614E0, void, set_Speed, (app::BabySein * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x008615E0, app::Vector2, get_PhysicsSpeed, (app::BabySein * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, get_Transform, (app::BabySein * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, get_CameraTarget, (app::BabySein * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00861610, bool, get_IsOnGround, (app::BabySein * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsAlive, (app::BabySein * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00861650, bool, PlaceOnGround, (app::BabySein * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::BabySein * this_ptr))
} // namespace app::classes::BabySein
