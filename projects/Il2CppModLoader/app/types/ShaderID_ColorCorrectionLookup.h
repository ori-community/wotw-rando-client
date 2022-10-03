#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ColorCorrectionLookup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_ColorCorrectionLookup__Class** type_info;
        inline app::ShaderID_ColorCorrectionLookup__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ColorCorrectionLookup__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_ColorCorrectionLookup");
        }
        inline app::ShaderID_ColorCorrectionLookup* create() {
            return il2cpp::create_object<app::ShaderID_ColorCorrectionLookup>(get_class());
        }
    } // namespace ShaderID_ColorCorrectionLookup
} // namespace app::classes::types
