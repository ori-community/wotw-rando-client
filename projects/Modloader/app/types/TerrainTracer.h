#pragma once
#include <Modloader/app/structs/TerrainTracer.h>
#include <Modloader/app/structs/TerrainTracer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TerrainTracer {
        inline app::TerrainTracer__Class** type_info() {
            static app::TerrainTracer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TerrainTracer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TerrainTracer__Class* get_class() {
            return il2cpp::get_class<app::TerrainTracer__Class>(type_info(), "", "TerrainTracer");
        }
        inline app::TerrainTracer* create() {
            return il2cpp::create_object<app::TerrainTracer>(get_class());
        }
    } // namespace TerrainTracer
} // namespace app::classes::types
