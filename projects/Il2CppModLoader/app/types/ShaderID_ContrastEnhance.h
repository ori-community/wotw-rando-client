#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ContrastEnhance {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_ContrastEnhance__Class** type_info;
        inline app::ShaderID_ContrastEnhance__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ContrastEnhance__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_ContrastEnhance");
        }
        inline app::ShaderID_ContrastEnhance* create() {
            return il2cpp::create_object<app::ShaderID_ContrastEnhance>(get_class());
        }
    } // namespace ShaderID_ContrastEnhance
} // namespace app::classes::types
