#pragma once
#include <Modloader/app/structs/SpellSwitcher.h>
#include <Modloader/app/structs/SpellSwitcher__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellSwitcher {
        inline app::SpellSwitcher__Class** type_info() {
            static app::SpellSwitcher__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpellSwitcher__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpellSwitcher__Class* get_class() {
            return il2cpp::get_class<app::SpellSwitcher__Class>(type_info(), "", "SpellSwitcher");
        }
        inline app::SpellSwitcher* create() {
            return il2cpp::create_object<app::SpellSwitcher>(get_class());
        }
    } // namespace SpellSwitcher
} // namespace app::classes::types
