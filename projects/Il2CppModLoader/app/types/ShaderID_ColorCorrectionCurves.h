#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ColorCorrectionCurves {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_ColorCorrectionCurves__Class** type_info;
        inline app::ShaderID_ColorCorrectionCurves__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ColorCorrectionCurves__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_ColorCorrectionCurves");
        }
        inline app::ShaderID_ColorCorrectionCurves* create() {
            return il2cpp::create_object<app::ShaderID_ColorCorrectionCurves>(get_class());
        }
    } // namespace ShaderID_ColorCorrectionCurves
} // namespace app::classes::types
