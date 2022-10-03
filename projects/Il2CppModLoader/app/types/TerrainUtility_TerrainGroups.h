#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TerrainUtility_TerrainGroups {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TerrainUtility_TerrainGroups__Class** type_info;
        inline app::TerrainUtility_TerrainGroups__Class* get_class() {
            return il2cpp::get_nested_class<app::TerrainUtility_TerrainGroups__Class>(type_info, "UnityEngine.Experimental.TerrainAPI", "TerrainUtility", "TerrainGroups");
        }
        inline app::TerrainUtility_TerrainGroups* create() {
            return il2cpp::create_object<app::TerrainUtility_TerrainGroups>(get_class());
        }
    } // namespace TerrainUtility_TerrainGroups
} // namespace app::classes::types
