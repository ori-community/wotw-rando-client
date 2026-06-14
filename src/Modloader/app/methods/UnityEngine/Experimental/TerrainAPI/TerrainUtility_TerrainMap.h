#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TerrainUtility_TerrainMap.h>
#include <Modloader/app/structs/TerrainUtility_TerrainMap_ErrorCode__Enum.h>
#include <Modloader/app/structs/TerrainUtility_TerrainMap_TerrainFilter.h>
#include <Modloader/app/structs/Terrain_1.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap {
    IL2CPP_REGISTER_METHOD(0x031981E0, void, ctor, app::TerrainUtility_TerrainMap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03198350, app::Terrain_1*, GetTerrain, app::TerrainUtility_TerrainMap* this_ptr, int32_t tile_x, int32_t tile_z)
    IL2CPP_REGISTER_METHOD(
        0x03198460,
        app::TerrainUtility_TerrainMap*,
        CreateFromPlacement_1,
        app::Terrain_1* origin_terrain,
        app::TerrainUtility_TerrainMap_TerrainFilter* filter,
        bool full_validation
    )
    IL2CPP_REGISTER_METHOD(
        0x031988E0,
        app::TerrainUtility_TerrainMap*,
        CreateFromPlacement_2,
        app::Vector2 grid_origin,
        app::Vector2 grid_size,
        app::TerrainUtility_TerrainMap_TerrainFilter* filter,
        bool full_validation
    )
    IL2CPP_REGISTER_METHOD(0x03198D30, void, AddTerrainInternal, app::TerrainUtility_TerrainMap* this_ptr, int32_t x, int32_t z, app::Terrain_1* terrain)
    IL2CPP_REGISTER_METHOD(0x031990A0, bool, TryToAddTerrain, app::TerrainUtility_TerrainMap* this_ptr, int32_t tile_x, int32_t tile_z, app::Terrain_1* terrain)
    IL2CPP_REGISTER_METHOD(0x03199210, void, ValidateTerrain, app::TerrainUtility_TerrainMap* this_ptr, int32_t tile_x, int32_t tile_z)
    IL2CPP_REGISTER_METHOD(0x03199F70, app::TerrainUtility_TerrainMap_ErrorCode__Enum, Validate, app::TerrainUtility_TerrainMap* this_ptr)
} // namespace app::classes::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap
