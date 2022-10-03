#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnvironmentLightingModifier {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnvironmentLightingModifier__Class** type_info;
        inline app::EnvironmentLightingModifier__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentLightingModifier__Class>(type_info, "", "EnvironmentLightingModifier");
        }
        inline app::EnvironmentLightingModifier* create() {
            return il2cpp::create_object<app::EnvironmentLightingModifier>(get_class());
        }
    } // namespace EnvironmentLightingModifier
} // namespace app::classes::types
