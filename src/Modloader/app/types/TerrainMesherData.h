#pragma once
#include <Modloader/app/structs/TerrainMesherData.h>
#include <Modloader/app/structs/TerrainMesherData__Boxed.h>
#include <Modloader/app/structs/TerrainMesherData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TerrainMesherData {
        inline app::TerrainMesherData__Class** type_info() {
            static app::TerrainMesherData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TerrainMesherData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TerrainMesherData__Class* get_class() {
            return il2cpp::get_class<app::TerrainMesherData__Class>(type_info(), "Moon", "TerrainMesherData");
        }
        inline app::TerrainMesherData* create() {
            return il2cpp::create_object<app::TerrainMesherData>(get_class());
        }
        inline app::TerrainMesherData__Boxed* box(app::TerrainMesherData value) {
            return il2cpp::box_value<app::TerrainMesherData__Boxed>(get_class(), value);
        }
    } // namespace TerrainMesherData
} // namespace app::classes::types
