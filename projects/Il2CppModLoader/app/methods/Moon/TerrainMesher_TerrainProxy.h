#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::TerrainMesher_TerrainProxy {
    IL2CPP_REGISTER_METHOD(0x0064EB90, app::Vector3, get_Bounds, (app::TerrainMesher_TerrainProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02567480, void, ctor, (app::TerrainMesher_TerrainProxy * this_ptr, app::Terrain * terrain))
    IL2CPP_REGISTER_METHOD(0x025674A0, float, GetHeight, (app::TerrainMesher_TerrainProxy * this_ptr, float x, float z))
    IL2CPP_REGISTER_METHOD(0x02567500, app::Vector3, GetPointAt, (app::TerrainMesher_TerrainProxy * this_ptr, float x, float z))
    IL2CPP_REGISTER_METHOD(0x02567520, app::Vector3, GetPointBetween, (app::TerrainMesher_TerrainProxy * this_ptr, app::Vector3 p0, app::Vector3 p1))
}
