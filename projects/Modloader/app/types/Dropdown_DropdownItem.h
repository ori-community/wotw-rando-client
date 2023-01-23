#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Dropdown_DropdownItem__Class.h>
#include <Modloader/app/structs/Dropdown_DropdownItem.h>
#include <Modloader/app/structs/Dropdown_DropdownItem__Array.h>

namespace app::classes::types {
    namespace Dropdown_DropdownItem {
        namespace {
            inline app::Dropdown_DropdownItem__Class* type_info_ref = nullptr;
        }
        inline app::Dropdown_DropdownItem__Class** type_info = &type_info_ref;
        inline app::Dropdown_DropdownItem__Class* get_class() {
            return il2cpp::get_nested_class<app::Dropdown_DropdownItem__Class>(type_info, "UnityEngine.UI", "Dropdown", "DropdownItem");
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
