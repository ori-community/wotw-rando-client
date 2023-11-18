#pragma once
#include <Modloader/app/structs/Terrain.h>
#include <Modloader/app/structs/Terrain__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Terrain {
        inline app::Terrain__Class** type_info() {
            static app::Terrain__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Terrain__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Terrain__Class* get_class() {
            return il2cpp::get_class<app::Terrain__Class>(type_info(), "Moon", "Terrain");
        }
        inline app::Terrain* create() {
            return il2cpp::create_object<app::Terrain>(get_class());
        }
    } // namespace Terrain
} // namespace app::classes::types
