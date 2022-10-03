#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Component {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Component__Class** type_info;
        inline app::Component__Class* get_class() {
            return il2cpp::get_class<app::Component__Class>(type_info, "System.ComponentModel", "Component");
        }
        inline app::Component* create() {
            return il2cpp::create_object<app::Component>(get_class());
        }
    } // namespace Component
} // namespace app::classes::types
