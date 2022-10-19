#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TerrainMesherData {
        namespace {
            inline app::TerrainMesherData__Class* type_info_ref = nullptr;
        }
        inline app::TerrainMesherData__Class** type_info = &type_info_ref;
        inline app::TerrainMesherData__Class* get_class() {
            return il2cpp::get_class<app::TerrainMesherData__Class>(type_info, "Moon", "TerrainMesherData");
        }
        inline app::TerrainMesherData* create() {
            return il2cpp::create_object<app::TerrainMesherData>(get_class());
        }
        inline app::TerrainMesherData__Boxed* box(app::TerrainMesherData value) {
            return il2cpp::box_value<app::TerrainMesherData__Boxed>(get_class(), value);
        }
    } // namespace TerrainMesherData
} // namespace app::classes::types
