#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellUISpellDetails {
        namespace {
            app::SpellUISpellDetails__Class* type_info_ref = nullptr;
        }
        app::SpellUISpellDetails__Class** type_info = &type_info_ref;
        inline app::SpellUISpellDetails__Class* get_class() {
            return il2cpp::get_class<app::SpellUISpellDetails__Class>(type_info, "", "SpellUISpellDetails");
        }
        inline app::SpellUISpellDetails* create() {
            return il2cpp::create_object<app::SpellUISpellDetails>(get_class());
        }
    } // namespace SpellUISpellDetails
} // namespace app::classes::types
