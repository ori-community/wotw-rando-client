#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_LensDistortionBlur {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_LensDistortionBlur__Class** type_info;
        inline app::ShaderID_LensDistortionBlur__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_LensDistortionBlur__Class>(type_info, "Colorful", "ShaderID_LensDistortionBlur");
        }
        inline app::ShaderID_LensDistortionBlur* create() {
            return il2cpp::create_object<app::ShaderID_LensDistortionBlur>(get_class());
        }
    } // namespace ShaderID_LensDistortionBlur
} // namespace app::classes::types
