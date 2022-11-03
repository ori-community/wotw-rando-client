#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TerrainData {
        namespace {
            inline app::TerrainData__Class* type_info_ref = nullptr;
        }
        inline app::TerrainData__Class** type_info = &type_info_ref;
        inline app::TerrainData__Class* get_class() {
            return il2cpp::get_class<app::TerrainData__Class>(type_info, "Moon", "TerrainData");
        }
        inline app::TerrainData* create() {
            return il2cpp::create_object<app::TerrainData>(get_class());
        }
    } // namespace TerrainData
} // namespace app::classes::types
