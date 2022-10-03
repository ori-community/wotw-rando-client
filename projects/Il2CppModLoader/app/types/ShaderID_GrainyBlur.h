#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_GrainyBlur {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_GrainyBlur__Class** type_info;
        inline app::ShaderID_GrainyBlur__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_GrainyBlur__Class>(type_info, "Colorful", "ShaderID_GrainyBlur");
        }
        inline app::ShaderID_GrainyBlur* create() {
            return il2cpp::create_object<app::ShaderID_GrainyBlur>(get_class());
        }
    } // namespace ShaderID_GrainyBlur
} // namespace app::classes::types
