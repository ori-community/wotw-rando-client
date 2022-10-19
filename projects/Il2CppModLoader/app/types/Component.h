#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Component {
        inline app::Component__Class** type_info = (app::Component__Class**)(modloader::win::memory::resolve_rva(0x0479A0C0));
        inline app::Component__Class* get_class() {
            return il2cpp::get_class<app::Component__Class>(type_info, "System.ComponentModel", "Component");
        }
        inline app::Component* create() {
            return il2cpp::create_object<app::Component>(get_class());
        }
    } // namespace Component
} // namespace app::classes::types
