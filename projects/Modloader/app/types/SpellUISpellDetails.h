#pragma once
#include <Modloader/app/structs/SpellUISpellDetails.h>
#include <Modloader/app/structs/SpellUISpellDetails__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellUISpellDetails {
        inline app::SpellUISpellDetails__Class** type_info() {
            static app::SpellUISpellDetails__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpellUISpellDetails__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpellUISpellDetails__Class* get_class() {
            return il2cpp::get_class<app::SpellUISpellDetails__Class>(type_info(), "", "SpellUISpellDetails");
        }
        inline app::SpellUISpellDetails* create() {
            return il2cpp::create_object<app::SpellUISpellDetails>(get_class());
        }
    } // namespace SpellUISpellDetails
} // namespace app::classes::types
