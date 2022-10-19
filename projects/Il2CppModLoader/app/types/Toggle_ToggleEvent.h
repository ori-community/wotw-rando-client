#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Toggle_ToggleEvent {
        inline app::Toggle_ToggleEvent__Class** type_info = (app::Toggle_ToggleEvent__Class**)(modloader::win::memory::resolve_rva(0x04737EC8));
        inline app::Toggle_ToggleEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::Toggle_ToggleEvent__Class>(type_info, "UnityEngine.UI", "Toggle", "ToggleEvent");
        }
        inline app::Toggle_ToggleEvent* create() {
            return il2cpp::create_object<app::Toggle_ToggleEvent>(get_class());
        }
    } // namespace Toggle_ToggleEvent
} // namespace app::classes::types
