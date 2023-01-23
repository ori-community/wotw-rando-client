#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TileData__Class.h>
#include <Modloader/app/structs/TileData.h>
#include <Modloader/app/structs/TileData__Boxed.h>

namespace app::classes::types {
    namespace TileData {
        namespace {
            inline app::TileData__Class* type_info_ref = nullptr;
        }
        inline app::TileData__Class** type_info = &type_info_ref;
        inline app::TileData__Class* get_class() {
            return il2cpp::get_class<app::TileData__Class>(type_info, "UnityEngine.Tilemaps", "TileData");
        }
        inline app::TileData* create() {
            return il2cpp::create_object<app::TileData>(get_class());
        }
        inline app::TileData__Boxed* box(app::TileData value) {
            return il2cpp::box_value<app::TileData__Boxed>(get_class(), value);
        }
    } // namespace TileData
} // namespace app::classes::types
