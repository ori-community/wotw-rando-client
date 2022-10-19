#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Dropdown_DropdownItem__Array {
        namespace {
            inline app::Dropdown_DropdownItem__Array__Class* type_info_ref = nullptr;
        }
        inline app::Dropdown_DropdownItem__Array__Class** type_info = &type_info_ref;
        inline app::Dropdown_DropdownItem__Array__Class* get_class() {
            return il2cpp::get_class<app::Dropdown_DropdownItem__Array__Class>(type_info, "UnityEngine.UI", "Dropdown+DropdownItem[]");
        }
        inline app::Dropdown_DropdownItem__Array* create() {
            return il2cpp::create_object<app::Dropdown_DropdownItem__Array>(get_class());
        }
    } // namespace Dropdown_DropdownItem__Array
} // namespace app::classes::types
