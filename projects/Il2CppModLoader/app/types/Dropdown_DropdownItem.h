#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Dropdown_DropdownItem {
        namespace {
            app::Dropdown_DropdownItem__Class* type_info_ref = nullptr;
        }
        app::Dropdown_DropdownItem__Class** type_info = &type_info_ref;
        inline app::Dropdown_DropdownItem__Class* get_class() {
            return il2cpp::get_nested_class<app::Dropdown_DropdownItem__Class>(type_info, "UnityEngine.UI", "Dropdown", "DropdownItem");
        }
        inline app::Dropdown_DropdownItem* create() {
            return il2cpp::create_object<app::Dropdown_DropdownItem>(get_class());
        }
        inline app::Dropdown_DropdownItem__Array* create_array(int size) {
            return il2cpp::array_new<app::Dropdown_DropdownItem__Array>(get_class(), size);
        }
    } // namespace Dropdown_DropdownItem
} // namespace app::classes::types
