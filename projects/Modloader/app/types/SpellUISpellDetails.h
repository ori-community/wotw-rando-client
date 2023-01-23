#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpellUISpellDetails__Class.h>
#include <Modloader/app/structs/SpellUISpellDetails.h>

namespace app::classes::types {
    namespace SpellUISpellDetails {
        namespace {
            inline app::SpellUISpellDetails__Class* type_info_ref = nullptr;
        }
        inline app::SpellUISpellDetails__Class** type_info = &type_info_ref;
        inline app::SpellUISpellDetails__Class* get_class() {
            return il2cpp::get_class<app::SpellUISpellDetails__Class>(type_info, "", "SpellUISpellDetails");
        }
        inline app::SpellUISpellDetails* create() {
            return il2cpp::create_object<app::SpellUISpellDetails>(get_class());
        }
    } // namespace SpellUISpellDetails
} // namespace app::classes::types
