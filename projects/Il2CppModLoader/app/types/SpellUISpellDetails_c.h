#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellUISpellDetails_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpellUISpellDetails_c__Class** type_info;
        inline app::SpellUISpellDetails_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpellUISpellDetails_c__Class>(type_info, "", "SpellUISpellDetails", "<>c");
        }
        inline app::SpellUISpellDetails_c* create() {
            return il2cpp::create_object<app::SpellUISpellDetails_c>(get_class());
        }
    } // namespace SpellUISpellDetails_c
} // namespace app::classes::types
