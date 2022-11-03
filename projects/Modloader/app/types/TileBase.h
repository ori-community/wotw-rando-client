#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TileBase {
        namespace {
            inline app::TileBase__Class* type_info_ref = nullptr;
        }
        inline app::TileBase__Class** type_info = &type_info_ref;
        inline app::TileBase__Class* get_class() {
            return il2cpp::get_class<app::TileBase__Class>(type_info, "UnityEngine.Tilemaps", "TileBase");
        }
        inline app::TileBase* create() {
            return il2cpp::create_object<app::TileBase>(get_class());
        }
    } // namespace TileBase
} // namespace app::classes::types
