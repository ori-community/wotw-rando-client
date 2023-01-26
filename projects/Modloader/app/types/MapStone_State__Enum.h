#pragma once
#include <Modloader/app/structs/MapStone_State__Enum.h>
#include <Modloader/app/structs/MapStone_State__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MapStone_State__Enum {
        inline app::MapStone_State__Enum__Class** type_info() {
            static app::MapStone_State__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MapStone_State__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MapStone_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MapStone_State__Enum__Class>(type_info(), "", "MapStone", "State");
        }
        inline app::MapStone_State__Enum* create() {
            return il2cpp::create_object<app::MapStone_State__Enum>(get_class());
        }
    } // namespace MapStone_State__Enum
} // namespace app::classes::types
