#pragma once
#include <Modloader/app/structs/MapmakerUISubItem.h>
#include <Modloader/app/structs/MapmakerUISubItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MapmakerUISubItem {
        inline app::MapmakerUISubItem__Class** type_info() {
            static app::MapmakerUISubItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MapmakerUISubItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MapmakerUISubItem__Class* get_class() {
            return il2cpp::get_class<app::MapmakerUISubItem__Class>(type_info(), "", "MapmakerUISubItem");
        }
        inline app::MapmakerUISubItem* create() {
            return il2cpp::create_object<app::MapmakerUISubItem>(get_class());
        }
    } // namespace MapmakerUISubItem
} // namespace app::classes::types
