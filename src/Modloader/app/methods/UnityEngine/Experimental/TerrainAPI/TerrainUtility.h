#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TerrainUtility_TerrainGroups.h>

namespace app::classes::UnityEngine::Experimental::TerrainAPI::TerrainUtility {
    IL2CPP_REGISTER_METHOD(0x031973C0, bool, HasValidTerrains, )
    IL2CPP_REGISTER_METHOD(0x03197470, void, ClearConnectivity, )
    IL2CPP_REGISTER_METHOD(0x03197590, app::TerrainUtility_TerrainGroups*, CollectTerrains, bool only_auto_connected_terrains)
    IL2CPP_REGISTER_METHOD(0x03197BB0, void, AutoConnect, )
} // namespace app::classes::UnityEngine::Experimental::TerrainAPI::TerrainUtility
