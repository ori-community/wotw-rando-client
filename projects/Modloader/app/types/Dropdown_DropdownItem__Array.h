#pragma once
#include <Modloader/app/structs/Dropdown_DropdownItem__Array.h>
#include <Modloader/app/structs/Dropdown_DropdownItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dropdown_DropdownItem__Array {
        inline app::Dropdown_DropdownItem__Array__Class** type_info() {
            static app::Dropdown_DropdownItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dropdown_DropdownItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dropdown_DropdownItem__Array__Class* get_class() {
            return il2cpp::get_class<app::Dropdown_DropdownItem__Array__Class>(type_info(), "UnityEngine.UI", "Dropdown+DropdownItem[]");
        }
        inline app::Dropdown_DropdownItem__Array* create() {
            return il2cpp::create_object<app::Dropdown_DropdownItem__Array>(get_class());
        }
    } // namespace Dropdown_DropdownItem__Array
} // namespace app::classes::types
