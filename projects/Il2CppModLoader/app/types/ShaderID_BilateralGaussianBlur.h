#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_BilateralGaussianBlur {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_BilateralGaussianBlur__Class** type_info;
        inline app::ShaderID_BilateralGaussianBlur__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_BilateralGaussianBlur__Class>(type_info, "Colorful", "ShaderID_BilateralGaussianBlur");
        }
        inline app::ShaderID_BilateralGaussianBlur* create() {
            return il2cpp::create_object<app::ShaderID_BilateralGaussianBlur>(get_class());
        }
    } // namespace ShaderID_BilateralGaussianBlur
} // namespace app::classes::types
