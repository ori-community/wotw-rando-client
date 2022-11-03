#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TerrainUtility_TerrainMap_TerrainFilter {
        inline app::TerrainUtility_TerrainMap_TerrainFilter__Class** type_info = (app::TerrainUtility_TerrainMap_TerrainFilter__Class**)(modloader::win::memory::resolve_rva(0x0473A340));
        inline app::TerrainUtility_TerrainMap_TerrainFilter__Class* get_class() {
            return il2cpp::get_nested_class<app::TerrainUtility_TerrainMap_TerrainFilter__Class>(type_info, "UnityEngine.Experimental.TerrainAPI", "TerrainUtility+TerrainMap", "TerrainFilter");
        }
        inline app::TerrainUtility_TerrainMap_TerrainFilter* create() {
            return il2cpp::create_object<app::TerrainUtility_TerrainMap_TerrainFilter>(get_class());
        }
    } // namespace TerrainUtility_TerrainMap_TerrainFilter
} // namespace app::classes::types
