#pragma once
#include <Modloader/app/structs/TerrainData.h>
#include <Modloader/app/structs/TerrainData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TerrainData {
        inline app::TerrainData__Class** type_info() {
            static app::TerrainData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TerrainData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TerrainData__Class* get_class() {
            return il2cpp::get_class<app::TerrainData__Class>(type_info(), "Moon", "TerrainData");
        }
        inline app::TerrainData* create() {
            return il2cpp::create_object<app::TerrainData>(get_class());
        }
    } // namespace TerrainData
} // namespace app::classes::types
