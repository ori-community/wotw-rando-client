#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TerrainUtility_TerrainMap_TerrainFilter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TerrainUtility_TerrainMap_TerrainFilter__Class** type_info;
        inline app::TerrainUtility_TerrainMap_TerrainFilter__Class* get_class() {
            return il2cpp::get_nested_class<app::TerrainUtility_TerrainMap_TerrainFilter__Class>(type_info, "UnityEngine.Experimental.TerrainAPI", "TerrainUtility+TerrainMap", "TerrainFilter");
        }
        inline app::TerrainUtility_TerrainMap_TerrainFilter* create() {
            return il2cpp::create_object<app::TerrainUtility_TerrainMap_TerrainFilter>(get_class());
        }
    } // namespace TerrainUtility_TerrainMap_TerrainFilter
} // namespace app::classes::types
