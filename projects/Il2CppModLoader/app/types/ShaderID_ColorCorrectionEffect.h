#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ColorCorrectionEffect {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_ColorCorrectionEffect__Class** type_info;
        inline app::ShaderID_ColorCorrectionEffect__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ColorCorrectionEffect__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_ColorCorrectionEffect");
        }
        inline app::ShaderID_ColorCorrectionEffect* create() {
            return il2cpp::create_object<app::ShaderID_ColorCorrectionEffect>(get_class());
        }
    } // namespace ShaderID_ColorCorrectionEffect
} // namespace app::classes::types
