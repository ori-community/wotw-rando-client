#pragma once
#include <Modloader/app/structs/SpellUIItem.h>
#include <Modloader/app/structs/SpellUIItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellUIItem {
        inline app::SpellUIItem__Class** type_info() {
            static app::SpellUIItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpellUIItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpellUIItem__Class* get_class() {
            return il2cpp::get_class<app::SpellUIItem__Class>(type_info(), "", "SpellUIItem");
        }
        inline app::SpellUIItem* create() {
            return il2cpp::create_object<app::SpellUIItem>(get_class());
        }
    } // namespace SpellUIItem
} // namespace app::classes::types
