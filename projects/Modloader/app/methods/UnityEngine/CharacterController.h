#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterController.h>
#include <Modloader/app/structs/CollisionFlags__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::UnityEngine::CharacterController {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::CharacterController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0309E7C0, bool, SimpleMove, app::CharacterController* this_ptr, app::Vector3 speed)
    IL2CPP_REGISTER_METHOD(0x0309E820, app::CollisionFlags__Enum, Move, app::CharacterController* this_ptr, app::Vector3 motion)
    IL2CPP_REGISTER_METHOD(0x0309E880, app::Vector3, get_velocity, app::CharacterController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0309E900, bool, get_isGrounded, app::CharacterController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0309E950, app::CollisionFlags__Enum, get_collisionFlags, app::CharacterController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0309E9A0, float, get_radius, app::CharacterController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0309E9F0, void, set_radius, app::CharacterController* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0309EA50, float, get_height, app::CharacterController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0309EAA0, void, set_height, app::CharacterController* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0309EB00, app::Vector3, get_center, app::CharacterController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0309EB80, void, set_center, app::CharacterController* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x0309EBE0, float, get_slopeLimit, app::CharacterController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0309EC30, void, set_slopeLimit, app::CharacterController* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0309EC90, float, get_stepOffset, app::CharacterController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0309ECE0, void, set_stepOffset, app::CharacterController* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0309ED40, float, get_skinWidth, app::CharacterController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0309ED90, void, set_skinWidth, app::CharacterController* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0309EDF0, float, get_minMoveDistance, app::CharacterController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0309EE40, void, set_minMoveDistance, app::CharacterController* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0309EEA0, bool, get_detectCollisions, app::CharacterController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0309EEF0, void, set_detectCollisions, app::CharacterController* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0309EF50, bool, get_enableOverlapRecovery, app::CharacterController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0309EFA0, void, set_enableOverlapRecovery, app::CharacterController* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0309F000, bool, SimpleMove_Injected, app::CharacterController* this_ptr, app::Vector3* speed)
    IL2CPP_REGISTER_METHOD(0x0309F060, app::CollisionFlags__Enum, Move_Injected, app::CharacterController* this_ptr, app::Vector3* motion)
    IL2CPP_REGISTER_METHOD(0x0309F0C0, void, get_velocity_Injected, app::CharacterController* this_ptr, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x0309F120, void, get_center_Injected, app::CharacterController* this_ptr, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x0309F180, void, set_center_Injected, app::CharacterController* this_ptr, app::Vector3* value)
} // namespace app::classes::UnityEngine::CharacterController
