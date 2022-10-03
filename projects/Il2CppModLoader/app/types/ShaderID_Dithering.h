#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Dithering {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_Dithering__Class** type_info;
        inline app::ShaderID_Dithering__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Dithering__Class>(type_info, "Colorful", "ShaderID_Dithering");
        }
        inline app::ShaderID_Dithering* create() {
            return il2cpp::create_object<app::ShaderID_Dithering>(get_class());
        }
    } // namespace ShaderID_Dithering
} // namespace app::classes::types
