#pragma once
#include <Modloader/app/structs/SpellInventory.h>
#include <Modloader/app/structs/SpellInventory__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellInventory {
        inline app::SpellInventory__Class** type_info() {
            static app::SpellInventory__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpellInventory__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpellInventory__Class* get_class() {
            return il2cpp::get_class<app::SpellInventory__Class>(type_info(), "", "SpellInventory");
        }
        inline app::SpellInventory* create() {
            return il2cpp::create_object<app::SpellInventory>(get_class());
        }
    } // namespace SpellInventory
} // namespace app::classes::types
