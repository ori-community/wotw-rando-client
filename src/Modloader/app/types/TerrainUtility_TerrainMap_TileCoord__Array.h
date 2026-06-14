#pragma once
#include <Modloader/app/structs/TerrainUtility_TerrainMap_TileCoord__Array.h>
#include <Modloader/app/structs/TerrainUtility_TerrainMap_TileCoord__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TerrainUtility_TerrainMap_TileCoord__Array {
        inline app::TerrainUtility_TerrainMap_TileCoord__Array__Class** type_info() {
            static app::TerrainUtility_TerrainMap_TileCoord__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TerrainUtility_TerrainMap_TileCoord__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TerrainUtility_TerrainMap_TileCoord__Array__Class* get_class() {
            return il2cpp::get_class<app::TerrainUtility_TerrainMap_TileCoord__Array__Class>(type_info(), "UnityEngine.Experimental.TerrainAPI", "TerrainUtility+TerrainMap+TileCoord[]");
        }
        inline app::TerrainUtility_TerrainMap_TileCoord__Array* create() {
            return il2cpp::create_object<app::TerrainUtility_TerrainMap_TileCoord__Array>(get_class());
        }
    } // namespace TerrainUtility_TerrainMap_TileCoord__Array
} // namespace app::classes::types
