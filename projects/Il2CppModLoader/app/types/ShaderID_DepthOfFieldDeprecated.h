#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_DepthOfFieldDeprecated {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_DepthOfFieldDeprecated__Class** type_info;
        inline app::ShaderID_DepthOfFieldDeprecated__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_DepthOfFieldDeprecated__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_DepthOfFieldDeprecated");
        }
        inline app::ShaderID_DepthOfFieldDeprecated* create() {
            return il2cpp::create_object<app::ShaderID_DepthOfFieldDeprecated>(get_class());
        }
    } // namespace ShaderID_DepthOfFieldDeprecated
} // namespace app::classes::types
