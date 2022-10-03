#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Kuwahara {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_Kuwahara__Class** type_info;
        inline app::ShaderID_Kuwahara__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Kuwahara__Class>(type_info, "Colorful", "ShaderID_Kuwahara");
        }
        inline app::ShaderID_Kuwahara* create() {
            return il2cpp::create_object<app::ShaderID_Kuwahara>(get_class());
        }
    } // namespace ShaderID_Kuwahara
} // namespace app::classes::types
