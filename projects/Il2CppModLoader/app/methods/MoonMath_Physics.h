#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MoonMath_Physics {
    IL2CPP_REGISTER_METHOD(0x025771C0, float, SpeedFromHeightAndGravity, (float gravity, float height))
    IL2CPP_REGISTER_METHOD(0x02577280, void, MoveBody_1, (app::Rigidbody * rigid_body, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x02577550, void, MoveBodyGetForceTorque, (app::Rigidbody * rigid_body, app::Vector3 rb_pos, float rb_euler_z, app::Vector3 rb_velocity, app::Vector3 rb_ang_velocity, app::Vector3 position, float angle, app::Vector3* force, app::Vector3* torque, float amount_position, float amount_rotation))
    IL2CPP_REGISTER_METHOD(0x02577B20, void, MoveBody_2, (app::Rigidbody * rigid_body, app::Vector3 rb_pos, float rb_euler_z, app::Vector3 rb_velocity, app::Vector3 position, float angle, float amount_position, float amount_rotation))
    IL2CPP_REGISTER_METHOD(0x025781B0, void, MoveBody_3, (app::Rigidbody * rigid_body, app::Vector3 position, float angle, float amount_position, float amount_rotation))
    IL2CPP_REGISTER_METHOD(0x02578390, void, MoveBody3D, (app::Rigidbody * rigid_body, app::Vector3 position, app::Quaternion rotation, float amount_position, float amount_rotation))
    IL2CPP_REGISTER_METHOD(0x02578AF0, void, SetBodyVelocityByPosition_1, (app::Rigidbody * rigid_body, app::Vector3 old_position))
    IL2CPP_REGISTER_METHOD(0x02578D10, void, SetBodyVelocityByPosition_2, (app::Rigidbody * rigid_body, app::Vector3 old_position, app::Quaternion old_rotation))
} // namespace app::classes::MoonMath_Physics
