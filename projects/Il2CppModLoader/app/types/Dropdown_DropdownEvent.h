#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Dropdown_DropdownEvent {
        inline app::Dropdown_DropdownEvent__Class** type_info = (app::Dropdown_DropdownEvent__Class**)(modloader::win::memory::resolve_rva(0x047023C0));
        inline app::Dropdown_DropdownEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::Dropdown_DropdownEvent__Class>(type_info, "UnityEngine.UI", "Dropdown", "DropdownEvent");
        }
        inline app::Dropdown_DropdownEvent* create() {
            return il2cpp::create_object<app::Dropdown_DropdownEvent>(get_class());
        }
    } // namespace Dropdown_DropdownEvent
} // namespace app::classes::types
