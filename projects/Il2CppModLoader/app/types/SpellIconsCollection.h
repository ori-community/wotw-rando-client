#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellIconsCollection {
        namespace {
            app::SpellIconsCollection__Class* type_info_ref = nullptr;
        }
        app::SpellIconsCollection__Class** type_info = &type_info_ref;
        inline app::SpellIconsCollection__Class* get_class() {
            return il2cpp::get_class<app::SpellIconsCollection__Class>(type_info, "", "SpellIconsCollection");
        }
        inline app::SpellIconsCollection* create() {
            return il2cpp::create_object<app::SpellIconsCollection>(get_class());
        }
    } // namespace SpellIconsCollection
} // namespace app::classes::types
