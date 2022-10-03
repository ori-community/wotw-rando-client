#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Dropdown_DropdownEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Dropdown_DropdownEvent__Class** type_info;
        inline app::Dropdown_DropdownEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::Dropdown_DropdownEvent__Class>(type_info, "UnityEngine.UI", "Dropdown", "DropdownEvent");
        }
        inline app::Dropdown_DropdownEvent* create() {
            return il2cpp::create_object<app::Dropdown_DropdownEvent>(get_class());
        }
    } // namespace Dropdown_DropdownEvent
} // namespace app::classes::types
