#pragma once
#include <Modloader/app/structs/TileBase.h>
#include <Modloader/app/structs/TileBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TileBase {
        inline app::TileBase__Class** type_info() {
            static app::TileBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TileBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TileBase__Class* get_class() {
            return il2cpp::get_class<app::TileBase__Class>(type_info(), "UnityEngine.Tilemaps", "TileBase");
        }
        inline app::TileBase* create() {
            return il2cpp::create_object<app::TileBase>(get_class());
        }
    } // namespace TileBase
} // namespace app::classes::types
