#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_BrightnessContrastGamma {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_BrightnessContrastGamma__Class** type_info;
        inline app::ShaderID_BrightnessContrastGamma__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_BrightnessContrastGamma__Class>(type_info, "Colorful", "ShaderID_BrightnessContrastGamma");
        }
        inline app::ShaderID_BrightnessContrastGamma* create() {
            return il2cpp::create_object<app::ShaderID_BrightnessContrastGamma>(get_class());
        }
    } // namespace ShaderID_BrightnessContrastGamma
} // namespace app::classes::types
