#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TerrainMesher_TerrainProxy__Class.h>
#include <Modloader/app/structs/TerrainMesher_TerrainProxy.h>

namespace app::classes::types {
    namespace TerrainMesher_TerrainProxy {
        inline app::TerrainMesher_TerrainProxy__Class** type_info = (app::TerrainMesher_TerrainProxy__Class**)(modloader::win::memory::resolve_rva(0x04732248));
        inline app::TerrainMesher_TerrainProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::TerrainMesher_TerrainProxy__Class>(type_info, "Moon", "TerrainMesher", "TerrainProxy");
        }
        inline app::TerrainMesher_TerrainProxy* create() {
            return il2cpp::create_object<app::TerrainMesher_TerrainProxy>(get_class());
        }
    } // namespace TerrainMesher_TerrainProxy
} // namespace app::classes::types
