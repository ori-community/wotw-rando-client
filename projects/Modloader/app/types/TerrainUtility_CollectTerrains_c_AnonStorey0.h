#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TerrainUtility_CollectTerrains_c_AnonStorey0__Class.h>
#include <Modloader/app/structs/TerrainUtility_CollectTerrains_c_AnonStorey0.h>

namespace app::classes::types {
    namespace TerrainUtility_CollectTerrains_c_AnonStorey0 {
        inline app::TerrainUtility_CollectTerrains_c_AnonStorey0__Class** type_info = (app::TerrainUtility_CollectTerrains_c_AnonStorey0__Class**)(modloader::win::memory::resolve_rva(0x04710E38));
        inline app::TerrainUtility_CollectTerrains_c_AnonStorey0__Class* get_class() {
            return il2cpp::get_nested_class<app::TerrainUtility_CollectTerrains_c_AnonStorey0__Class>(type_info, "UnityEngine.Experimental.TerrainAPI", "TerrainUtility", "<CollectTerrains>c__AnonStorey0");
        }
        inline app::TerrainUtility_CollectTerrains_c_AnonStorey0* create() {
            return il2cpp::create_object<app::TerrainUtility_CollectTerrains_c_AnonStorey0>(get_class());
        }
    } // namespace TerrainUtility_CollectTerrains_c_AnonStorey0
} // namespace app::classes::types
