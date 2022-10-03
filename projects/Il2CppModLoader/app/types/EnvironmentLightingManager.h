#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnvironmentLightingManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnvironmentLightingManager__Class** type_info;
        inline app::EnvironmentLightingManager__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentLightingManager__Class>(type_info, "", "EnvironmentLightingManager");
        }
        inline app::EnvironmentLightingManager* create() {
            return il2cpp::create_object<app::EnvironmentLightingManager>(get_class());
        }
    } // namespace EnvironmentLightingManager
} // namespace app::classes::types
