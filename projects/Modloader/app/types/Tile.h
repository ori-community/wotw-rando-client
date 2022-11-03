#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Tile {
        namespace {
            inline app::Tile__Class* type_info_ref = nullptr;
        }
        inline app::Tile__Class** type_info = &type_info_ref;
        inline app::Tile__Class* get_class() {
            return il2cpp::get_class<app::Tile__Class>(type_info, "UnityEngine.Tilemaps", "Tile");
        }
        inline app::Tile* create() {
            return il2cpp::create_object<app::Tile>(get_class());
        }
    } // namespace Tile
} // namespace app::classes::types
