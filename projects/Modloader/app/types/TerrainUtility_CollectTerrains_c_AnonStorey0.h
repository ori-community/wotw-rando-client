#pragma once
#include <Modloader/app/structs/TerrainUtility_CollectTerrains_c_AnonStorey0.h>
#include <Modloader/app/structs/TerrainUtility_CollectTerrains_c_AnonStorey0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TerrainUtility_CollectTerrains_c_AnonStorey0 {
        inline app::TerrainUtility_CollectTerrains_c_AnonStorey0__Class** type_info() {
            static app::TerrainUtility_CollectTerrains_c_AnonStorey0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TerrainUtility_CollectTerrains_c_AnonStorey0__Class**)(modloader::win::memory::resolve_rva(0x04710E38));
            }
            return cache;
        }
        inline app::TerrainUtility_CollectTerrains_c_AnonStorey0__Class* get_class() {
            return il2cpp::get_nested_class<app::TerrainUtility_CollectTerrains_c_AnonStorey0__Class>(type_info(), "UnityEngine.Experimental.TerrainAPI", "TerrainUtility", "<CollectTerrains>c__AnonStorey0");
        }
        inline app::TerrainUtility_CollectTerrains_c_AnonStorey0* create() {
            return il2cpp::create_object<app::TerrainUtility_CollectTerrains_c_AnonStorey0>(get_class());
        }
    } // namespace TerrainUtility_CollectTerrains_c_AnonStorey0
} // namespace app::classes::types
