#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TerrainUtility_TerrainMap {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TerrainUtility_TerrainMap__Class** type_info;
        inline app::TerrainUtility_TerrainMap__Class* get_class() {
            return il2cpp::get_nested_class<app::TerrainUtility_TerrainMap__Class>(type_info, "UnityEngine.Experimental.TerrainAPI", "TerrainUtility", "TerrainMap");
        }
        inline app::TerrainUtility_TerrainMap* create() {
            return il2cpp::create_object<app::TerrainUtility_TerrainMap>(get_class());
        }
        inline app::TerrainUtility_TerrainMap__Array* create_array(int size) {
            return il2cpp::array_new<app::TerrainUtility_TerrainMap__Array>(get_class(), size);
        }
        inline app::TerrainUtility_TerrainMap__Array* create_array(const std::vector<app::TerrainUtility_TerrainMap*>& items) {
            return il2cpp::array_new<app::TerrainUtility_TerrainMap__Array>(get_class(), items);
        }
    } // namespace TerrainUtility_TerrainMap
} // namespace app::classes::types
