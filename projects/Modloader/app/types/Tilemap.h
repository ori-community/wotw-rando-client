#pragma once
#include <Modloader/app/structs/Tilemap.h>
#include <Modloader/app/structs/Tilemap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Tilemap {
        inline app::Tilemap__Class** type_info() {
            static app::Tilemap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Tilemap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Tilemap__Class* get_class() {
            return il2cpp::get_class<app::Tilemap__Class>(type_info(), "UnityEngine.Tilemaps", "Tilemap");
        }
        inline app::Tilemap* create() {
            return il2cpp::create_object<app::Tilemap>(get_class());
        }
    } // namespace Tilemap
} // namespace app::classes::types
