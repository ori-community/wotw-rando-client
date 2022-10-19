#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpellDescriptionCollection {
        namespace {
            inline app::SpellDescriptionCollection__Class* type_info_ref = nullptr;
        }
        inline app::SpellDescriptionCollection__Class** type_info = &type_info_ref;
        inline app::SpellDescriptionCollection__Class* get_class() {
            return il2cpp::get_class<app::SpellDescriptionCollection__Class>(type_info, "", "SpellDescriptionCollection");
        }
        inline app::SpellDescriptionCollection* create() {
            return il2cpp::create_object<app::SpellDescriptionCollection>(get_class());
        }
    } // namespace SpellDescriptionCollection
} // namespace app::classes::types
