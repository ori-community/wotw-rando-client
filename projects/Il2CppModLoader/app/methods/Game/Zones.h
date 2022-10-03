#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Game::Zones {
    IL2CPP_REGISTER_METHOD(0x00687630, app::EnemyNoGoZone*, GetNoGoZoneAtPoint, (app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x006877E0, bool, IsInNoGoZone, (app::Vector3 position, bool include_not_loaded_physic_setups))
    IL2CPP_REGISTER_METHOD(0x00687B10, bool, TryGetWaterZoneAtPoint, (app::Vector3 position, app::WaterZone** found_water_zone))
    IL2CPP_REGISTER_METHOD(0x00687B40, app::WaterZone*, GetWaterZoneAtPoint, (app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00687B70, bool, IsInWaterZone, (app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00687BA0, bool, IsOverlapingWaterZone, (app::Rect rect))
    IL2CPP_REGISTER_METHOD(0x00687D30, bool, TryGetDigZoneAtPoint, (app::Vector3 position, app::DigZone** found_dig_zone))
    IL2CPP_REGISTER_METHOD(0x00687ED0, app::DigZone*, GetDigZoneAtPoint, (app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00688060, bool, IsInDigZone, (app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x006881F0, app::DigZone*, GetDigZoneWithinCircle, (app::Vector3 center, float radius))
    IL2CPP_REGISTER_METHOD(0x00688380, void, GetDigZonesWithinCircle_1, (app::List_1_DigZone_ * zones, app::Vector3 center, float radius))
    IL2CPP_REGISTER_METHOD(0x00688560, void, GetWaterZonesWithinRect, (app::List_1_WaterZone_ * zones, app::Vector3 center, float size))
    IL2CPP_REGISTER_METHOD(0x006887A0, void, GetDigZonesWithinCircle_2, (app::List_1_DigZone_ * zones, app::Vector3 center, float radius, float prediction_time))
    IL2CPP_REGISTER_METHOD(0x00688AA0, bool, IsZoneTypeAtPoint, (app::Vector3 point, app::NavigationType__Enum zone_type))
    IL2CPP_REGISTER_METHOD(0x00688CD0, app::NavigationType__Enum, GetZoneTypeAtPoint, (app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x00688DD0, void, cctor, ())
} // namespace app::classes::Game::Zones
