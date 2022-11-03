#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TerrainData_1 {
        inline app::TerrainData_1__Class** type_info = (app::TerrainData_1__Class**)(modloader::win::memory::resolve_rva(0x04749640));
        inline app::TerrainData_1__Class* get_class() {
            return il2cpp::get_class<app::TerrainData_1__Class>(type_info, "UnityEngine", "TerrainData");
        }
        inline app::TerrainData_1* create() {
            return il2cpp::create_object<app::TerrainData_1>(get_class());
        }
    } // namespace TerrainData_1
} // namespace app::classes::types
