#pragma once
#include <Modloader/app/structs/TerrainUtility_TerrainMap_TerrainFilter.h>
#include <Modloader/app/structs/TerrainUtility_TerrainMap_TerrainFilter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TerrainUtility_TerrainMap_TerrainFilter {
        inline app::TerrainUtility_TerrainMap_TerrainFilter__Class** type_info() {
            static app::TerrainUtility_TerrainMap_TerrainFilter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TerrainUtility_TerrainMap_TerrainFilter__Class**)(modloader::win::memory::resolve_rva(0x0473A340));
            }
            return cache;
        }
        inline app::TerrainUtility_TerrainMap_TerrainFilter__Class* get_class() {
            return il2cpp::get_nested_class<app::TerrainUtility_TerrainMap_TerrainFilter__Class>(type_info(), "UnityEngine.Experimental.TerrainAPI", "TerrainUtility+TerrainMap", "TerrainFilter");
        }
        inline app::TerrainUtility_TerrainMap_TerrainFilter* create() {
            return il2cpp::create_object<app::TerrainUtility_TerrainMap_TerrainFilter>(get_class());
        }
    } // namespace TerrainUtility_TerrainMap_TerrainFilter
} // namespace app::classes::types
