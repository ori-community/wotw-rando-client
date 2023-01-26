#pragma once
#include <Modloader/app/structs/TerrainUtility_CollectTerrains_c_AnonStorey1.h>
#include <Modloader/app/structs/TerrainUtility_CollectTerrains_c_AnonStorey1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TerrainUtility_CollectTerrains_c_AnonStorey1 {
        inline app::TerrainUtility_CollectTerrains_c_AnonStorey1__Class** type_info() {
            static app::TerrainUtility_CollectTerrains_c_AnonStorey1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TerrainUtility_CollectTerrains_c_AnonStorey1__Class**)(modloader::win::memory::resolve_rva(0x04758178));
            }
            return cache;
        }
        inline app::TerrainUtility_CollectTerrains_c_AnonStorey1__Class* get_class() {
            return il2cpp::get_nested_class<app::TerrainUtility_CollectTerrains_c_AnonStorey1__Class>(type_info(), "UnityEngine.Experimental.TerrainAPI", "TerrainUtility", "<CollectTerrains>c__AnonStorey1");
        }
        inline app::TerrainUtility_CollectTerrains_c_AnonStorey1* create() {
            return il2cpp::create_object<app::TerrainUtility_CollectTerrains_c_AnonStorey1>(get_class());
        }
    } // namespace TerrainUtility_CollectTerrains_c_AnonStorey1
} // namespace app::classes::types
