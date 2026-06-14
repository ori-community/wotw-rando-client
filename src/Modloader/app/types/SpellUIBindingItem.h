#pragma once
#include <Modloader/app/structs/SpellUIBindingItem.h>
#include <Modloader/app/structs/SpellUIBindingItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellUIBindingItem {
        inline app::SpellUIBindingItem__Class** type_info() {
            static app::SpellUIBindingItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpellUIBindingItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpellUIBindingItem__Class* get_class() {
            return il2cpp::get_class<app::SpellUIBindingItem__Class>(type_info(), "", "SpellUIBindingItem");
        }
        inline app::SpellUIBindingItem* create() {
            return il2cpp::create_object<app::SpellUIBindingItem>(get_class());
        }
    } // namespace SpellUIBindingItem
} // namespace app::classes::types
