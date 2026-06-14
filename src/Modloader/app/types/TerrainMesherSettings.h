#pragma once
#include <Modloader/app/structs/TerrainMesherSettings.h>
#include <Modloader/app/structs/TerrainMesherSettings__Boxed.h>
#include <Modloader/app/structs/TerrainMesherSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TerrainMesherSettings {
        inline app::TerrainMesherSettings__Class** type_info() {
            static app::TerrainMesherSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TerrainMesherSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TerrainMesherSettings__Class* get_class() {
            return il2cpp::get_class<app::TerrainMesherSettings__Class>(type_info(), "Moon", "TerrainMesherSettings");
        }
        inline app::TerrainMesherSettings* create() {
            return il2cpp::create_object<app::TerrainMesherSettings>(get_class());
        }
        inline app::TerrainMesherSettings__Boxed* box(app::TerrainMesherSettings value) {
            return il2cpp::box_value<app::TerrainMesherSettings__Boxed>(get_class(), value);
        }
    } // namespace TerrainMesherSettings
} // namespace app::classes::types
