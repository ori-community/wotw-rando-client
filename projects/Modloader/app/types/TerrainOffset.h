#pragma once
#include <Modloader/app/structs/TerrainOffset.h>
#include <Modloader/app/structs/TerrainOffset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TerrainOffset {
        inline app::TerrainOffset__Class** type_info() {
            static app::TerrainOffset__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TerrainOffset__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TerrainOffset__Class* get_class() {
            return il2cpp::get_class<app::TerrainOffset__Class>(type_info(), "RootMotion.Demos", "TerrainOffset");
        }
        inline app::TerrainOffset* create() {
            return il2cpp::create_object<app::TerrainOffset>(get_class());
        }
    } // namespace TerrainOffset
} // namespace app::classes::types
