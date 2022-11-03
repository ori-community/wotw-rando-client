#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TraceGroundMovement {
    IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_Speed, (app::TraceGroundMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00449EB0, void, set_Speed, (app::TraceGroundMovement * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00B009B0, void, Awake, (app::TraceGroundMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B00B60, void, OnDestroy, (app::TraceGroundMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B00C00, app::Vector3, get_Right, (app::TraceGroundMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B00D50, app::Vector3, get_Left, (app::TraceGroundMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B00E50, app::Vector3, get_Up, (app::TraceGroundMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B00E70, app::Vector3, get_Down, (app::TraceGroundMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B00F60, void, OnCollisionEnter, (app::TraceGroundMovement * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x00B00F60, void, OnCollisionStay, (app::TraceGroundMovement * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x00B00F70, void, OnCollision, (app::TraceGroundMovement * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x00B01090, void, FixedUpdate, (app::TraceGroundMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B01910, void, ApplyKickback, (app::TraceGroundMovement * this_ptr, float kickback_multiplier))
    IL2CPP_REGISTER_METHOD(0x00B01940, void, OnRecieveDamage, (app::TraceGroundMovement * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00B01AE0, void, Serialize, (app::TraceGroundMovement * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x0074AB10, bool, get_IsSuspended, (app::TraceGroundMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074AB20, void, set_IsSuspended, (app::TraceGroundMovement * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FF8B0, app::SuspendableMask__Enum, get_Mask, (app::TraceGroundMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B01D10, void, set_Mask, (app::TraceGroundMovement * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00B01DC0, void, ctor, (app::TraceGroundMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, (app::TraceGroundMovement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, (app::TraceGroundMovement * this_ptr))
} // namespace app::classes::TraceGroundMovement
