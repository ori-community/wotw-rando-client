#pragma once
#include <Modloader/app/structs/SpellUIEquipScreen_Category__Enum.h>
#include <Modloader/app/structs/SpellUIEquipScreen_Category__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellUIEquipScreen_Category__Enum {
        inline app::SpellUIEquipScreen_Category__Enum__Class** type_info() {
            static app::SpellUIEquipScreen_Category__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpellUIEquipScreen_Category__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpellUIEquipScreen_Category__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpellUIEquipScreen_Category__Enum__Class>(type_info(), "", "SpellUIEquipScreen", "Category");
        }
        inline app::SpellUIEquipScreen_Category__Enum* create() {
            return il2cpp::create_object<app::SpellUIEquipScreen_Category__Enum>(get_class());
        }
    } // namespace SpellUIEquipScreen_Category__Enum
} // namespace app::classes::types
