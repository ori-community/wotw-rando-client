#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::EntityPlatformingMovement {
    IL2CPP_REGISTER_METHOD(0x00C9E760, void, OnAwake, (app::EntityPlatformingMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C9E8D0, void, Start, (app::EntityPlatformingMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C9EB60, void, ApplyKickback, (app::EntityPlatformingMovement * this_ptr, float kickback_multiplier))
    IL2CPP_REGISTER_METHOD(0x00C9EBA0, void, ApplyKickup, (app::EntityPlatformingMovement * this_ptr, float strength))
    IL2CPP_REGISTER_METHOD(0x00C9EBE0, void, OnRecieveDamage, (app::EntityPlatformingMovement * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00C9ED50, void, OnCollisionEnter, (app::EntityPlatformingMovement * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x00C9ED50, void, OnCollisionStay, (app::EntityPlatformingMovement * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x00C9ED80, void, MovingGroundCollision, (app::EntityPlatformingMovement * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x00C9EF30, void, FixedUpdate, (app::EntityPlatformingMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C9F580, void, ctor, (app::EntityPlatformingMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, (app::EntityPlatformingMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, (app::EntityPlatformingMovement * this_ptr))
} // namespace app::classes::EntityPlatformingMovement
