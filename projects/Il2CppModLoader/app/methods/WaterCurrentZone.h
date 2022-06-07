#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::WaterCurrentZone {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::UpdateType__Enum, get_UpdateType, (app::WaterCurrentZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSerialize, (app::WaterCurrentZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D4DF0, app::Vector2, get_NormalizedCurrentDirection, (app::WaterCurrentZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D4E20, app::Vector2, get_ActualCurrentSpeed, (app::WaterCurrentZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D4F80, float, get_CurrentCycleFactor, (app::WaterCurrentZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D5070, float, get_ZonePositionFactor, (app::WaterCurrentZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D5150, app::Vector2, ActualCurrentSpeedForPoint, (app::WaterCurrentZone * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x008D52B0, float, GetZonePositionFactor, (app::WaterCurrentZone * this_ptr, app::Vector3 char_pos))
    IL2CPP_REGISTER_METHOD(0x008D5660, void, AwakeInternal, (app::WaterCurrentZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D5750, void, OnEnableRuntime, (app::WaterCurrentZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D5820, void, OnDisableRuntime, (app::WaterCurrentZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D58E0, bool, InnerBoundContainsPoint, (app::WaterCurrentZone * this_ptr, app::Vector2 point))
    IL2CPP_REGISTER_METHOD(0x008D59F0, void, OnZoneChange, (app::WaterCurrentZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D5CE0, void, OnZoneUpdate, (app::WaterCurrentZone * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x008D5E30, float, GetRtpcValue, (app::WaterCurrentZone * this_ptr, app::Transform * target))
    IL2CPP_REGISTER_METHOD(0x008D6020, void, ctor, (app::WaterCurrentZone * this_ptr))
}
