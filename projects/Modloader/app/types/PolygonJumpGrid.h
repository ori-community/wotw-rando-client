#pragma once
#include <Modloader/app/structs/PolygonJumpGrid.h>
#include <Modloader/app/structs/PolygonJumpGrid__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PolygonJumpGrid {
        inline app::PolygonJumpGrid__Class** type_info() {
            static app::PolygonJumpGrid__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PolygonJumpGrid__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PolygonJumpGrid__Class* get_class() {
            return il2cpp::get_class<app::PolygonJumpGrid__Class>(type_info(), "", "PolygonJumpGrid");
        }
        inline app::PolygonJumpGrid* create() {
            return il2cpp::create_object<app::PolygonJumpGrid>(get_class());
        }
    } // namespace PolygonJumpGrid
} // namespace app::classes::types
