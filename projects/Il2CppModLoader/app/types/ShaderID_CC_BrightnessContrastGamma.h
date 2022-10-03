#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CC_BrightnessContrastGamma {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CC_BrightnessContrastGamma__Class** type_info;
        inline app::ShaderID_CC_BrightnessContrastGamma__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CC_BrightnessContrastGamma__Class>(type_info, "", "ShaderID_CC_BrightnessContrastGamma");
        }
        inline app::ShaderID_CC_BrightnessContrastGamma* create() {
            return il2cpp::create_object<app::ShaderID_CC_BrightnessContrastGamma>(get_class());
        }
    } // namespace ShaderID_CC_BrightnessContrastGamma
} // namespace app::classes::types
