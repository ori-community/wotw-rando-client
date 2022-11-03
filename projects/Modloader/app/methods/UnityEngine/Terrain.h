#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Terrain {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::Terrain_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319A290, app::TerrainData_1*, get_terrainData, (app::Terrain_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319A2E0, bool, get_allowAutoConnect, (app::Terrain_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319A330, int32_t, get_groupingID, (app::Terrain_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319A380, void, SetNeighbors, (app::Terrain_1 * this_ptr, app::Terrain_1* left, app::Terrain_1* top, app::Terrain_1* right, app::Terrain_1* bottom))
    IL2CPP_REGISTER_METHOD(0x0319A410, app::Terrain_1__Array*, get_activeTerrains, ())
} // namespace app::classes::UnityEngine::Terrain
