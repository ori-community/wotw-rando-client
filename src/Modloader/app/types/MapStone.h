#pragma once
#include <Modloader/app/structs/MapStone.h>
#include <Modloader/app/structs/MapStone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MapStone {
        inline app::MapStone__Class** type_info() {
            static app::MapStone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MapStone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MapStone__Class* get_class() {
            return il2cpp::get_class<app::MapStone__Class>(type_info(), "", "MapStone");
        }
        inline app::MapStone* create() {
            return il2cpp::create_object<app::MapStone>(get_class());
        }
    } // namespace MapStone
} // namespace app::classes::types
