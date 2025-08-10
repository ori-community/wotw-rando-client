#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NavigationType__Enum.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SelectableCategory__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WaterZone.h>

namespace app::classes::WaterZone {
    IL2CPP_REGISTER_METHOD(0x008E5E60, void, OnValidate, app::WaterZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008E5E80, void, OnEnable, app::WaterZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008E5F90, bool, PositionInWater, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x008E6130, bool, OverlapingWater, app::Rect rect)
    IL2CPP_REGISTER_METHOD(0x008E62C0, app::Vector2, GetPositionClosestToWaterZone, app::Vector2 position)
    IL2CPP_REGISTER_METHOD(0x008E6540, bool, TryGetWaterZone, app::Vector3 position, app::WaterZone** found_water_zone)
    IL2CPP_REGISTER_METHOD(0x008E6700, app::WaterZone*, GetWaterZone, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x008E68A0, bool, IsInWaterZone, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00687BA0, bool, IsOverlapingWaterZone, app::Rect rect)
    IL2CPP_REGISTER_METHOD(0x008E6A40, void, OnDisable, app::WaterZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008E6B00, app::Vector2, GetVelocityAtPoint, app::WaterZone* this_ptr, app::Vector2 point)
    IL2CPP_REGISTER_METHOD(0x008E6B20, bool, Contains, app::WaterZone* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x008E6B70, bool, Overlaps, app::WaterZone* this_ptr, app::Rect rect)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, app::WaterZone* this_ptr, app::Vector2 position, app::Vector2 velocity)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, app::WaterZone* this_ptr, app::Vector2 position, app::Vector2 velocity)
    IL2CPP_REGISTER_METHOD(0x008E6BD0, void, FixedUpdate, app::WaterZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008E6F70, void, RefreshBounds, app::WaterZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008E77B0, app::NavigationType__Enum, AreaType, app::WaterZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008E77C0, bool, ContainsPoint, app::WaterZone* this_ptr, app::Vector2 point)
    IL2CPP_REGISTER_METHOD(0x008E78A0, app::Vector2, ClosestPoint, app::WaterZone* this_ptr, app::Vector2 point)
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, app::WaterZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008E79B0, void, ctor, app::WaterZone* this_ptr)
} // namespace app::classes::WaterZone
