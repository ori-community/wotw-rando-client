#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Negative {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_Negative__Class** type_info;
        inline app::ShaderID_Negative__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Negative__Class>(type_info, "Colorful", "ShaderID_Negative");
        }
        inline app::ShaderID_Negative* create() {
            return il2cpp::create_object<app::ShaderID_Negative>(get_class());
        }
    } // namespace ShaderID_Negative
} // namespace app::classes::types
