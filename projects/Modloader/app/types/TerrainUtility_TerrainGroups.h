#pragma once
#include <Modloader/app/structs/TerrainUtility_TerrainGroups.h>
#include <Modloader/app/structs/TerrainUtility_TerrainGroups__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TerrainUtility_TerrainGroups {
        inline app::TerrainUtility_TerrainGroups__Class** type_info() {
            static app::TerrainUtility_TerrainGroups__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TerrainUtility_TerrainGroups__Class**)(modloader::win::memory::resolve_rva(0x04789B80));
            }
            return cache;
        }
        inline app::TerrainUtility_TerrainGroups__Class* get_class() {
            return il2cpp::get_nested_class<app::TerrainUtility_TerrainGroups__Class>(type_info(), "UnityEngine.Experimental.TerrainAPI", "TerrainUtility", "TerrainGroups");
        }
        inline app::TerrainUtility_TerrainGroups* create() {
            return il2cpp::create_object<app::TerrainUtility_TerrainGroups>(get_class());
        }
    } // namespace TerrainUtility_TerrainGroups
} // namespace app::classes::types
