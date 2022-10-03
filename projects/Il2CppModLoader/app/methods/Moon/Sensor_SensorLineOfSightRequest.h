#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Sensor_SensorLineOfSightRequest {
    IL2CPP_REGISTER_METHOD(0x00120650, void, Init, (app::Sensor_SensorLineOfSightRequest__Boxed * this_ptr, app::Sensor* _sensor))
    IL2CPP_REGISTER_METHOD(0x00120660, void, Dispose, (app::Sensor_SensorLineOfSightRequest__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001206A0, void, Start, (app::Sensor_SensorLineOfSightRequest__Boxed * this_ptr, app::Vector3 _origin, app::Vector3 _target))
    IL2CPP_REGISTER_METHOD(0x001206D0, bool, get_IsFinished, (app::Sensor_SensorLineOfSightRequest__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001206E0, bool, get_Result, (app::Sensor_SensorLineOfSightRequest__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001206F0, app::AsyncRaycast_Result__Enum, get_ArcResult, (app::Sensor_SensorLineOfSightRequest__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010E170, app::Sensor_SensorLineOfSightRequest_State__Enum, get_CurrentState, (app::Sensor_SensorLineOfSightRequest__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00120710, void, Finish, (app::Sensor_SensorLineOfSightRequest__Boxed * this_ptr, bool result))
    IL2CPP_REGISTER_METHOD(0x00120720, void, Cancel, (app::Sensor_SensorLineOfSightRequest__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00120770, void, PerformCast, (app::Sensor_SensorLineOfSightRequest__Boxed * this_ptr, app::Vector3 from, app::Vector3 to, app::Sensor_SensorLineOfSightRequest_State__Enum async_state))
    IL2CPP_REGISTER_METHOD(0x001207F0, bool, get_Blocked, (app::Sensor_SensorLineOfSightRequest__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00120810, bool, get_HitPlayer, (app::Sensor_SensorLineOfSightRequest__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00120820, bool, TryGetHitCollider, (app::Sensor_SensorLineOfSightRequest__Boxed * this_ptr, app::Collider** collider))
    IL2CPP_REGISTER_METHOD(0x00120830, void, Update, (app::Sensor_SensorLineOfSightRequest__Boxed * this_ptr))
} // namespace app::classes::Moon::Sensor_SensorLineOfSightRequest
