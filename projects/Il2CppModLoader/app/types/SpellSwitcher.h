#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellSwitcher {
        namespace {
            app::SpellSwitcher__Class* type_info_ref = nullptr;
        }
        app::SpellSwitcher__Class** type_info = &type_info_ref;
        inline app::SpellSwitcher__Class* get_class() {
            return il2cpp::get_class<app::SpellSwitcher__Class>(type_info, "", "SpellSwitcher");
        }
        inline app::SpellSwitcher* create() {
            return il2cpp::create_object<app::SpellSwitcher>(get_class());
        }
    } // namespace SpellSwitcher
} // namespace app::classes::types
