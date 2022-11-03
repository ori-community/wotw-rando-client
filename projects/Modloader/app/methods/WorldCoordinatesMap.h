#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::WorldCoordinatesMap {
    IL2CPP_REGISTER_METHOD(0x0057EC10, app::Vector3, WorldToLocal, (app::WorldCoordinatesMap * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x0057F440, bool, IsInside, (app::WorldCoordinatesMap * this_ptr, app::Vector2 position))
    IL2CPP_REGISTER_METHOD(0x0057FBA0, app::Vector3, LocalToWorld, (app::WorldCoordinatesMap * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00580790, void, OnDrawGizmos, (app::WorldCoordinatesMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00580E30, void, ctor, (app::WorldCoordinatesMap * this_ptr))
} // namespace app::classes::WorldCoordinatesMap
