#pragma once
#include <Modloader/app/structs/TerrainUtility_TerrainMap.h>
#include <Modloader/app/structs/TerrainUtility_TerrainMap__Array.h>
#include <Modloader/app/structs/TerrainUtility_TerrainMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TerrainUtility_TerrainMap {
        inline app::TerrainUtility_TerrainMap__Class** type_info() {
            static app::TerrainUtility_TerrainMap__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TerrainUtility_TerrainMap__Class**)(modloader::win::memory::resolve_rva(0x04764230));
            }
            return cache;
        }
        inline app::TerrainUtility_TerrainMap__Class* get_class() {
            return il2cpp::get_nested_class<app::TerrainUtility_TerrainMap__Class>(type_info(), "UnityEngine.Experimental.TerrainAPI", "TerrainUtility", "TerrainMap");
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
