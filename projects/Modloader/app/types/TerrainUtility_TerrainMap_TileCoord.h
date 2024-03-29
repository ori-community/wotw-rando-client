#pragma once
#include <Modloader/app/structs/TerrainUtility_TerrainMap_TileCoord.h>
#include <Modloader/app/structs/TerrainUtility_TerrainMap_TileCoord__Array.h>
#include <Modloader/app/structs/TerrainUtility_TerrainMap_TileCoord__Boxed.h>
#include <Modloader/app/structs/TerrainUtility_TerrainMap_TileCoord__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TerrainUtility_TerrainMap_TileCoord {
        inline app::TerrainUtility_TerrainMap_TileCoord__Class** type_info() {
            static app::TerrainUtility_TerrainMap_TileCoord__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TerrainUtility_TerrainMap_TileCoord__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TerrainUtility_TerrainMap_TileCoord__Class* get_class() {
            return il2cpp::get_nested_class<app::TerrainUtility_TerrainMap_TileCoord__Class>(type_info(), "UnityEngine.Experimental.TerrainAPI", "TerrainUtility+TerrainMap", "TileCoord");
        }
        inline app::TerrainUtility_TerrainMap_TileCoord* create() {
            return il2cpp::create_object<app::TerrainUtility_TerrainMap_TileCoord>(get_class());
        }
        inline app::TerrainUtility_TerrainMap_TileCoord__Boxed* box(app::TerrainUtility_TerrainMap_TileCoord value) {
            return il2cpp::box_value<app::TerrainUtility_TerrainMap_TileCoord__Boxed>(get_class(), value);
        }
        inline app::TerrainUtility_TerrainMap_TileCoord__Array* create_array(int size) {
            return il2cpp::array_new<app::TerrainUtility_TerrainMap_TileCoord__Array>(get_class(), size);
        }
        inline app::TerrainUtility_TerrainMap_TileCoord__Array* create_array(const std::vector<app::TerrainUtility_TerrainMap_TileCoord>& items) {
            return il2cpp::array_new<app::TerrainUtility_TerrainMap_TileCoord__Array>(get_class(), items);
        }
    } // namespace TerrainUtility_TerrainMap_TileCoord
} // namespace app::classes::types
