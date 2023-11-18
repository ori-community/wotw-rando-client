#pragma once
#include <Modloader/app/structs/PolygonJumpGridEntry_CellTag__Enum.h>
#include <Modloader/app/structs/PolygonJumpGridEntry_CellTag__Enum__Array.h>
#include <Modloader/app/structs/PolygonJumpGridEntry_CellTag__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PolygonJumpGridEntry_CellTag__Enum {
        inline app::PolygonJumpGridEntry_CellTag__Enum__Class** type_info() {
            static app::PolygonJumpGridEntry_CellTag__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PolygonJumpGridEntry_CellTag__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PolygonJumpGridEntry_CellTag__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PolygonJumpGridEntry_CellTag__Enum__Class>(type_info(), "", "PolygonJumpGridEntry", "CellTag");
        }
        inline app::PolygonJumpGridEntry_CellTag__Enum* create() {
            return il2cpp::create_object<app::PolygonJumpGridEntry_CellTag__Enum>(get_class());
        }
        inline app::PolygonJumpGridEntry_CellTag__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::PolygonJumpGridEntry_CellTag__Enum__Array>(get_class(), size);
        }
        inline app::PolygonJumpGridEntry_CellTag__Enum__Array* create_array(const std::vector<app::PolygonJumpGridEntry_CellTag__Enum*>& items) {
            return il2cpp::array_new<app::PolygonJumpGridEntry_CellTag__Enum__Array>(get_class(), items);
        }
    } // namespace PolygonJumpGridEntry_CellTag__Enum
} // namespace app::classes::types
