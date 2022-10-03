#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Naru {
    IL2CPP_REGISTER_METHOD(0x008831D0, void, Awake, (app::Naru * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00883290, void, OnDestroy, (app::Naru * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008833C0, app::CharacterCapsuleController*, get_CapsuleController, (app::Naru * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::DamageOwner*, get_DamageOwner, (app::Naru * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_DamageOwner, (app::Naru * this_ptr, app::DamageOwner* value))
    IL2CPP_REGISTER_METHOD(0x008833E0, app::Vector3, get_Position, (app::Naru * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00883440, void, set_Position, (app::Naru * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00883490, app::Vector3, get_MapDisplayPosition, (app::Naru * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008835B0, app::Vector3, get_DeltaPosition, (app::Naru * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008612A0, void, Activate, (app::Naru * this_ptr, bool active))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, get_GameObject, (app::Naru * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00883720, bool, get_FaceLeft, (app::Naru * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00883750, void, set_FaceLeft, (app::Naru * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x008837A0, app::Vector3, get_Speed, (app::Naru * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008838A0, void, set_Speed, (app::Naru * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x008839A0, app::Vector2, get_PhysicsSpeed, (app::Naru * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, get_Transform, (app::Naru * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, get_CameraTarget, (app::Naru * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008839D0, bool, get_IsOnGround, (app::Naru * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsAlive, (app::Naru * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00883A10, bool, PlaceOnGround, (app::Naru * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::Naru * this_ptr))
} // namespace app::classes::Naru
