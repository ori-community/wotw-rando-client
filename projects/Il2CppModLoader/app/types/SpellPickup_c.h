#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellPickup_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpellPickup_c__Class** type_info;
        inline app::SpellPickup_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpellPickup_c__Class>(type_info, "", "SpellPickup", "<>c");
        }
        inline app::SpellPickup_c* create() {
            return il2cpp::create_object<app::SpellPickup_c>(get_class());
        }
    } // namespace SpellPickup_c
} // namespace app::classes::types
