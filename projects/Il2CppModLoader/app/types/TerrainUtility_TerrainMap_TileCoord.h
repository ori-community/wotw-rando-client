#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TerrainUtility_TerrainMap_TileCoord {
        namespace {
            app::TerrainUtility_TerrainMap_TileCoord__Class* type_info_ref = nullptr;
        }
        app::TerrainUtility_TerrainMap_TileCoord__Class** type_info = &type_info_ref;
        inline app::TerrainUtility_TerrainMap_TileCoord__Class* get_class() {
            return il2cpp::get_nested_class<app::TerrainUtility_TerrainMap_TileCoord__Class>(type_info, "UnityEngine.Experimental.TerrainAPI", "TerrainUtility+TerrainMap", "TileCoord");
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
