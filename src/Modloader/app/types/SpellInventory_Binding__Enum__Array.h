#pragma once
#include <Modloader/app/structs/SpellInventory_Binding__Enum__Array.h>
#include <Modloader/app/structs/SpellInventory_Binding__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellInventory_Binding__Enum__Array {
        inline app::SpellInventory_Binding__Enum__Array__Class** type_info() {
            static app::SpellInventory_Binding__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpellInventory_Binding__Enum__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpellInventory_Binding__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::SpellInventory_Binding__Enum__Array__Class>(type_info(), "", "SpellInventory+Binding[]");
        }
        inline app::SpellInventory_Binding__Enum__Array* create() {
            return il2cpp::create_object<app::SpellInventory_Binding__Enum__Array>(get_class());
        }
    } // namespace SpellInventory_Binding__Enum__Array
} // namespace app::classes::types
