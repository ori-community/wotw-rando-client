#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Dropdown {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Dropdown__Class** type_info;
        inline app::Dropdown__Class* get_class() {
            return il2cpp::get_class<app::Dropdown__Class>(type_info, "UnityEngine.UI", "Dropdown");
        }
        inline app::Dropdown* create() {
            return il2cpp::create_object<app::Dropdown>(get_class());
        }
    } // namespace Dropdown
} // namespace app::classes::types
