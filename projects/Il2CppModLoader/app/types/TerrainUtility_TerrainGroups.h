#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TerrainUtility_TerrainGroups {
        inline app::TerrainUtility_TerrainGroups__Class** type_info = (app::TerrainUtility_TerrainGroups__Class**)(modloader::win::memory::resolve_rva(0x04789B80));
        inline app::TerrainUtility_TerrainGroups__Class* get_class() {
            return il2cpp::get_nested_class<app::TerrainUtility_TerrainGroups__Class>(type_info, "UnityEngine.Experimental.TerrainAPI", "TerrainUtility", "TerrainGroups");
        }
        inline app::TerrainUtility_TerrainGroups* create() {
            return il2cpp::create_object<app::TerrainUtility_TerrainGroups>(get_class());
        }
    } // namespace TerrainUtility_TerrainGroups
} // namespace app::classes::types
