#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TerrainUtility_CollectTerrains_c_AnonStorey1 {
        inline app::TerrainUtility_CollectTerrains_c_AnonStorey1__Class** type_info = (app::TerrainUtility_CollectTerrains_c_AnonStorey1__Class**)(modloader::win::memory::resolve_rva(0x04758178));
        inline app::TerrainUtility_CollectTerrains_c_AnonStorey1__Class* get_class() {
            return il2cpp::get_nested_class<app::TerrainUtility_CollectTerrains_c_AnonStorey1__Class>(type_info, "UnityEngine.Experimental.TerrainAPI", "TerrainUtility", "<CollectTerrains>c__AnonStorey1");
        }
        inline app::TerrainUtility_CollectTerrains_c_AnonStorey1* create() {
            return il2cpp::create_object<app::TerrainUtility_CollectTerrains_c_AnonStorey1>(get_class());
        }
    } // namespace TerrainUtility_CollectTerrains_c_AnonStorey1
} // namespace app::classes::types
