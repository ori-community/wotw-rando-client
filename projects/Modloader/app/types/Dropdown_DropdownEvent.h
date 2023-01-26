#pragma once
#include <Modloader/app/structs/Dropdown_DropdownEvent.h>
#include <Modloader/app/structs/Dropdown_DropdownEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dropdown_DropdownEvent {
        inline app::Dropdown_DropdownEvent__Class** type_info() {
            static app::Dropdown_DropdownEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Dropdown_DropdownEvent__Class**)(modloader::win::memory::resolve_rva(0x047023C0));
            }
            return cache;
        }
        inline app::Dropdown_DropdownEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::Dropdown_DropdownEvent__Class>(type_info(), "UnityEngine.UI", "Dropdown", "DropdownEvent");
        }
        inline app::Dropdown_DropdownEvent* create() {
            return il2cpp::create_object<app::Dropdown_DropdownEvent>(get_class());
        }
    } // namespace Dropdown_DropdownEvent
} // namespace app::classes::types
