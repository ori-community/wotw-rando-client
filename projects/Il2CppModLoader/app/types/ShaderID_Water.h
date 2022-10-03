#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Water {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_Water__Class** type_info;
        inline app::ShaderID_Water__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Water__Class>(type_info, "", "ShaderID_Water");
        }
        inline app::ShaderID_Water* create() {
            return il2cpp::create_object<app::ShaderID_Water>(get_class());
        }
    } // namespace ShaderID_Water
} // namespace app::classes::types
