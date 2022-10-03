#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_GradientRamp {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_GradientRamp__Class** type_info;
        inline app::ShaderID_GradientRamp__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_GradientRamp__Class>(type_info, "Colorful", "ShaderID_GradientRamp");
        }
        inline app::ShaderID_GradientRamp* create() {
            return il2cpp::create_object<app::ShaderID_GradientRamp>(get_class());
        }
    } // namespace ShaderID_GradientRamp
} // namespace app::classes::types
