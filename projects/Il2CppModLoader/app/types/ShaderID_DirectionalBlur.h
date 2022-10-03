#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_DirectionalBlur {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_DirectionalBlur__Class** type_info;
        inline app::ShaderID_DirectionalBlur__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_DirectionalBlur__Class>(type_info, "Colorful", "ShaderID_DirectionalBlur");
        }
        inline app::ShaderID_DirectionalBlur* create() {
            return il2cpp::create_object<app::ShaderID_DirectionalBlur>(get_class());
        }
    } // namespace ShaderID_DirectionalBlur
} // namespace app::classes::types
