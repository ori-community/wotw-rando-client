#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_DepthOfField {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_DepthOfField__Class** type_info;
        inline app::ShaderID_DepthOfField__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_DepthOfField__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_DepthOfField");
        }
        inline app::ShaderID_DepthOfField* create() {
            return il2cpp::create_object<app::ShaderID_DepthOfField>(get_class());
        }
    } // namespace ShaderID_DepthOfField
} // namespace app::classes::types
