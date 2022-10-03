#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_RadialBlur {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_RadialBlur__Class** type_info;
        inline app::ShaderID_RadialBlur__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_RadialBlur__Class>(type_info, "Colorful", "ShaderID_RadialBlur");
        }
        inline app::ShaderID_RadialBlur* create() {
            return il2cpp::create_object<app::ShaderID_RadialBlur>(get_class());
        }
    } // namespace ShaderID_RadialBlur
} // namespace app::classes::types
