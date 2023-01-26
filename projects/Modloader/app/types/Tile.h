#pragma once
#include <Modloader/app/structs/Tile.h>
#include <Modloader/app/structs/Tile__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Tile {
        inline app::Tile__Class** type_info() {
            static app::Tile__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Tile__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Tile__Class* get_class() {
            return il2cpp::get_class<app::Tile__Class>(type_info(), "UnityEngine.Tilemaps", "Tile");
        }
        inline app::Tile* create() {
            return il2cpp::create_object<app::Tile>(get_class());
        }
    } // namespace Tile
} // namespace app::classes::types
