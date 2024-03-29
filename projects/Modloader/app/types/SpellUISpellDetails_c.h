#pragma once
#include <Modloader/app/structs/SpellUISpellDetails_c.h>
#include <Modloader/app/structs/SpellUISpellDetails_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellUISpellDetails_c {
        inline app::SpellUISpellDetails_c__Class** type_info() {
            static app::SpellUISpellDetails_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpellUISpellDetails_c__Class**)(modloader::win::memory::resolve_rva(0x047338B0));
            }
            return cache;
        }
        inline app::SpellUISpellDetails_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpellUISpellDetails_c__Class>(type_info(), "", "SpellUISpellDetails", "<>c");
        }
        inline app::SpellUISpellDetails_c* create() {
            return il2cpp::create_object<app::SpellUISpellDetails_c>(get_class());
        }
    } // namespace SpellUISpellDetails_c
} // namespace app::classes::types
