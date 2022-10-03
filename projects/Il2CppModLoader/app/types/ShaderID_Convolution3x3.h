#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Convolution3x3 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_Convolution3x3__Class** type_info;
        inline app::ShaderID_Convolution3x3__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Convolution3x3__Class>(type_info, "Colorful", "ShaderID_Convolution3x3");
        }
        inline app::ShaderID_Convolution3x3* create() {
            return il2cpp::create_object<app::ShaderID_Convolution3x3>(get_class());
        }
    } // namespace ShaderID_Convolution3x3
} // namespace app::classes::types
