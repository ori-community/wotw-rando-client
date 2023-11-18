#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DeadlyDarknessRectangleZone.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::DeadlyDarknessRectangleZone {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSerialize, (app::DeadlyDarknessRectangleZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DDC750, bool, PointInsideDeadlyDarkness, (app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnZoneUpdate, (app::DeadlyDarknessRectangleZone * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x00DDC930, void, OnEnableRuntime, (app::DeadlyDarknessRectangleZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DDC9F0, void, OnDisableRuntime, (app::DeadlyDarknessRectangleZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043BB90, void, ctor, (app::DeadlyDarknessRectangleZone * this_ptr))
} // namespace app::classes::DeadlyDarknessRectangleZone
