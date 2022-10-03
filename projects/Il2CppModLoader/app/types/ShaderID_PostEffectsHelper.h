#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_PostEffectsHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_PostEffectsHelper__Class** type_info;
        inline app::ShaderID_PostEffectsHelper__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_PostEffectsHelper__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_PostEffectsHelper");
        }
        inline app::ShaderID_PostEffectsHelper* create() {
            return il2cpp::create_object<app::ShaderID_PostEffectsHelper>(get_class());
        }
    } // namespace ShaderID_PostEffectsHelper
} // namespace app::classes::types
