#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_NoiseEffect {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_NoiseEffect__Class** type_info;
        inline app::ShaderID_NoiseEffect__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_NoiseEffect__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_NoiseEffect");
        }
        inline app::ShaderID_NoiseEffect* create() {
            return il2cpp::create_object<app::ShaderID_NoiseEffect>(get_class());
        }
    } // namespace ShaderID_NoiseEffect
} // namespace app::classes::types
