#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellUIItem {
        namespace {
            app::SpellUIItem__Class* type_info_ref = nullptr;
        }
        app::SpellUIItem__Class** type_info = &type_info_ref;
        inline app::SpellUIItem__Class* get_class() {
            return il2cpp::get_class<app::SpellUIItem__Class>(type_info, "", "SpellUIItem");
        }
        inline app::SpellUIItem* create() {
            return il2cpp::create_object<app::SpellUIItem>(get_class());
        }
    } // namespace SpellUIItem
} // namespace app::classes::types
