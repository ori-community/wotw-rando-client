#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Letterbox {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_Letterbox__Class** type_info;
        inline app::ShaderID_Letterbox__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Letterbox__Class>(type_info, "Colorful", "ShaderID_Letterbox");
        }
        inline app::ShaderID_Letterbox* create() {
            return il2cpp::create_object<app::ShaderID_Letterbox>(get_class());
        }
    } // namespace ShaderID_Letterbox
} // namespace app::classes::types
