#pragma once
#include <Modloader/app/structs/Dropdown_DropdownItem.h>
#include <Modloader/app/structs/Dropdown_DropdownItem__Array.h>
#include <Modloader/app/structs/Dropdown_DropdownItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dropdown_DropdownItem {
        inline app::Dropdown_DropdownItem__Class** type_info() {
            static app::Dropdown_DropdownItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dropdown_DropdownItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dropdown_DropdownItem__Class* get_class() {
            return il2cpp::get_nested_class<app::Dropdown_DropdownItem__Class>(type_info(), "UnityEngine.UI", "Dropdown", "DropdownItem");
        }
        inline app::Dropdown_DropdownItem* create() {
            return il2cpp::create_object<app::Dropdown_DropdownItem>(get_class());
        }
        inline app::Dropdown_DropdownItem__Array* create_array(int size) {
            return il2cpp::array_new<app::Dropdown_DropdownItem__Array>(get_class(), size);
        }
        inline app::Dropdown_DropdownItem__Array* create_array(const std::vector<app::Dropdown_DropdownItem*>& items) {
            return il2cpp::array_new<app::Dropdown_DropdownItem__Array>(get_class(), items);
        }
    } // namespace Dropdown_DropdownItem
} // namespace app::classes::types
