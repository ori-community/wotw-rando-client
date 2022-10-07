#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellInventory_Binding__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpellInventory_Binding__Enum__Class** type_info;
        inline app::SpellInventory_Binding__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpellInventory_Binding__Enum__Class>(type_info, "", "SpellInventory", "Binding");
        }
        inline app::SpellInventory_Binding__Enum* create() {
            return il2cpp::create_object<app::SpellInventory_Binding__Enum>(get_class());
        }
        inline app::SpellInventory_Binding__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::SpellInventory_Binding__Enum__Array>(get_class(), size);
        }
        inline app::SpellInventory_Binding__Enum__Array* create_array(const std::vector<app::SpellInventory_Binding__Enum*>& items) {
            return il2cpp::array_new<app::SpellInventory_Binding__Enum__Array>(get_class(), items);
        }
    } // namespace SpellInventory_Binding__Enum
} // namespace app::classes::types
