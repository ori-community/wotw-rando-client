#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxControllerManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxControllerManager__Class** type_info;
        inline app::XboxControllerManager__Class* get_class() {
            return il2cpp::get_class<app::XboxControllerManager__Class>(type_info, "Core.Devices", "XboxControllerManager");
        }
        inline app::XboxControllerManager* create() {
            return il2cpp::create_object<app::XboxControllerManager>(get_class());
        }
    } // namespace XboxControllerManager
} // namespace app::classes::types
