#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Water3Manager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_Water3Manager__Class** type_info;
        inline app::ShaderID_Water3Manager__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Water3Manager__Class>(type_info, "", "ShaderID_Water3Manager");
        }
        inline app::ShaderID_Water3Manager* create() {
            return il2cpp::create_object<app::ShaderID_Water3Manager>(get_class());
        }
    } // namespace ShaderID_Water3Manager
} // namespace app::classes::types
