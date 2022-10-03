#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Glitch {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_Glitch__Class** type_info;
        inline app::ShaderID_Glitch__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Glitch__Class>(type_info, "Colorful", "ShaderID_Glitch");
        }
        inline app::ShaderID_Glitch* create() {
            return il2cpp::create_object<app::ShaderID_Glitch>(get_class());
        }
    } // namespace ShaderID_Glitch
} // namespace app::classes::types
