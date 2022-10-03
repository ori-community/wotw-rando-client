#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellInventory_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpellInventory_c__Class** type_info;
        inline app::SpellInventory_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpellInventory_c__Class>(type_info, "", "SpellInventory", "<>c");
        }
        inline app::SpellInventory_c* create() {
            return il2cpp::create_object<app::SpellInventory_c>(get_class());
        }
    } // namespace SpellInventory_c
} // namespace app::classes::types
