#pragma once
#include <Modloader/app/structs/Tile_ColliderType__Enum.h>
#include <Modloader/app/structs/Tile_ColliderType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Tile_ColliderType__Enum {
        inline app::Tile_ColliderType__Enum__Class** type_info() {
            static app::Tile_ColliderType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Tile_ColliderType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Tile_ColliderType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Tile_ColliderType__Enum__Class>(type_info(), "UnityEngine.Tilemaps", "Tile", "ColliderType");
        }
        inline app::Tile_ColliderType__Enum* create() {
            return il2cpp::create_object<app::Tile_ColliderType__Enum>(get_class());
        }
    } // namespace Tile_ColliderType__Enum
} // namespace app::classes::types
