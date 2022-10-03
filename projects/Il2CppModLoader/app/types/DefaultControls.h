#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DefaultControls {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DefaultControls__Class** type_info;
        inline app::DefaultControls__Class* get_class() {
            return il2cpp::get_class<app::DefaultControls__Class>(type_info, "UnityEngine.UI", "DefaultControls");
        }
        inline app::DefaultControls* create() {
            return il2cpp::create_object<app::DefaultControls>(get_class());
        }
    } // namespace DefaultControls
} // namespace app::classes::types
