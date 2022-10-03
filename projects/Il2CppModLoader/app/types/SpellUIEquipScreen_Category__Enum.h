#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellUIEquipScreen_Category__Enum {
        namespace {
            app::SpellUIEquipScreen_Category__Enum__Class* type_info_ref = nullptr;
        }
        app::SpellUIEquipScreen_Category__Enum__Class** type_info = &type_info_ref;
        inline app::SpellUIEquipScreen_Category__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpellUIEquipScreen_Category__Enum__Class>(type_info, "", "SpellUIEquipScreen", "Category");
        }
        inline app::SpellUIEquipScreen_Category__Enum* create() {
            return il2cpp::create_object<app::SpellUIEquipScreen_Category__Enum>(get_class());
        }
    } // namespace SpellUIEquipScreen_Category__Enum
} // namespace app::classes::types
