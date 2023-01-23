#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TerrainMesherSettings__Class.h>
#include <Modloader/app/structs/TerrainMesherSettings.h>
#include <Modloader/app/structs/TerrainMesherSettings__Boxed.h>

namespace app::classes::types {
    namespace TerrainMesherSettings {
        namespace {
            inline app::TerrainMesherSettings__Class* type_info_ref = nullptr;
        }
        inline app::TerrainMesherSettings__Class** type_info = &type_info_ref;
        inline app::TerrainMesherSettings__Class* get_class() {
            return il2cpp::get_class<app::TerrainMesherSettings__Class>(type_info, "Moon", "TerrainMesherSettings");
        }
        inline app::TerrainMesherSettings* create() {
            return il2cpp::create_object<app::TerrainMesherSettings>(get_class());
        }
        inline app::TerrainMesherSettings__Boxed* box(app::TerrainMesherSettings value) {
            return il2cpp::box_value<app::TerrainMesherSettings__Boxed>(get_class(), value);
        }
    } // namespace TerrainMesherSettings
} // namespace app::classes::types
