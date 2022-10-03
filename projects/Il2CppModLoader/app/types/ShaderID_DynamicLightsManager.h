#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_DynamicLightsManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_DynamicLightsManager__Class** type_info;
        inline app::ShaderID_DynamicLightsManager__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_DynamicLightsManager__Class>(type_info, "", "ShaderID_DynamicLightsManager");
        }
        inline app::ShaderID_DynamicLightsManager* create() {
            return il2cpp::create_object<app::ShaderID_DynamicLightsManager>(get_class());
        }
    } // namespace ShaderID_DynamicLightsManager
} // namespace app::classes::types
