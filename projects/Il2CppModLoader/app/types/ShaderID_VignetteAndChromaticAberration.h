#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_VignetteAndChromaticAberration {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_VignetteAndChromaticAberration__Class** type_info;
        inline app::ShaderID_VignetteAndChromaticAberration__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_VignetteAndChromaticAberration__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_VignetteAndChromaticAberration");
        }
        inline app::ShaderID_VignetteAndChromaticAberration* create() {
            return il2cpp::create_object<app::ShaderID_VignetteAndChromaticAberration>(get_class());
        }
    } // namespace ShaderID_VignetteAndChromaticAberration
} // namespace app::classes::types
