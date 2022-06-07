#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::EnemyPlatformMovement {
    IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_OnGroundSpeedTreshold, (app::EnemyPlatformMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C82460, app::Vector2, get_WorldSpeed, (app::EnemyPlatformMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C82570, void, set_WorldSpeed, (app::EnemyPlatformMovement * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x00C826A0, app::Vector2, get_LocalSpeed, (app::EnemyPlatformMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C826E0, void, set_LocalSpeed, (app::EnemyPlatformMovement * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x00C82720, float, get_LocalSpeedX, (app::EnemyPlatformMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C82750, void, set_LocalSpeedX, (app::EnemyPlatformMovement * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00C827B0, float, get_LocalSpeedY, (app::EnemyPlatformMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C827E0, void, set_LocalSpeedY, (app::EnemyPlatformMovement * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00C82840, void, OnPrewarm, (app::EnemyPlatformMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C829B0, bool, OnUpdate, (app::EnemyPlatformMovement * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ScheduleJobs, (app::EnemyPlatformMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CompleteUpdate, (app::EnemyPlatformMovement * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00C82E30, void, OnLateFrameUpdate, (app::EnemyPlatformMovement * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00C83050, void, OnAwake, (app::EnemyPlatformMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C833A0, void, OnDestroy, (app::EnemyPlatformMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C836C0, void, OnGroundUpdate, (app::EnemyPlatformMovement * this_ptr, app::Vector3 local_normal, app::Collider * collider))
    IL2CPP_REGISTER_METHODINFO(0x047566D8, EnemyPlatformMovement_OnGroundUpdate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C838B0, void, OnCollisionWallLeftUpdate, (app::EnemyPlatformMovement * this_ptr, app::Vector3 local_normal, app::Collider * collider))
    IL2CPP_REGISTER_METHODINFO(0x0471DDB8, EnemyPlatformMovement_OnCollisionWallLeftUpdate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C838D0, void, OnCollisionWallRightUpdate, (app::EnemyPlatformMovement * this_ptr, app::Vector3 local_normal, app::Collider * collider))
    IL2CPP_REGISTER_METHODINFO(0x047833A8, EnemyPlatformMovement_OnCollisionWallRightUpdate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0095E530, void, ctor, (app::EnemyPlatformMovement * this_ptr))
}
