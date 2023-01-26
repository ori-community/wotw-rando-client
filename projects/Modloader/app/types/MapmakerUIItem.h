#pragma once
#include <Modloader/app/structs/MapmakerUIItem.h>
#include <Modloader/app/structs/MapmakerUIItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MapmakerUIItem {
        inline app::MapmakerUIItem__Class** type_info() {
            static app::MapmakerUIItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MapmakerUIItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MapmakerUIItem__Class* get_class() {
            return il2cpp::get_class<app::MapmakerUIItem__Class>(type_info(), "", "MapmakerUIItem");
        }
        inline app::MapmakerUIItem* create() {
            return il2cpp::create_object<app::MapmakerUIItem>(get_class());
        }
    } // namespace MapmakerUIItem
} // namespace app::classes::types
