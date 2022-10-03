#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_EnvironmentLightingModifier {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_EnvironmentLightingModifier__Class** type_info;
        inline app::ShaderID_EnvironmentLightingModifier__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_EnvironmentLightingModifier__Class>(type_info, "", "ShaderID_EnvironmentLightingModifier");
        }
        inline app::ShaderID_EnvironmentLightingModifier* create() {
            return il2cpp::create_object<app::ShaderID_EnvironmentLightingModifier>(get_class());
        }
    } // namespace ShaderID_EnvironmentLightingModifier
} // namespace app::classes::types
