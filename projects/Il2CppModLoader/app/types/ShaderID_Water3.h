#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Water3 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_Water3__Class** type_info;
        inline app::ShaderID_Water3__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Water3__Class>(type_info, "", "ShaderID_Water3");
        }
        inline app::ShaderID_Water3* create() {
            return il2cpp::create_object<app::ShaderID_Water3>(get_class());
        }
    } // namespace ShaderID_Water3
} // namespace app::classes::types
