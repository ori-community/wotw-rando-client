#pragma once
#include <Modloader/app/structs/TerrainMesher_TerrainProxy.h>
#include <Modloader/app/structs/TerrainMesher_TerrainProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TerrainMesher_TerrainProxy {
        inline app::TerrainMesher_TerrainProxy__Class** type_info() {
            static app::TerrainMesher_TerrainProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TerrainMesher_TerrainProxy__Class**)(modloader::win::memory::resolve_rva(0x04732248));
            }
            return cache;
        }
        inline app::TerrainMesher_TerrainProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::TerrainMesher_TerrainProxy__Class>(type_info(), "Moon", "TerrainMesher", "TerrainProxy");
        }
        inline app::TerrainMesher_TerrainProxy* create() {
            return il2cpp::create_object<app::TerrainMesher_TerrainProxy>(get_class());
        }
    } // namespace TerrainMesher_TerrainProxy
} // namespace app::classes::types
