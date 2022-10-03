#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Sharpen {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_Sharpen__Class** type_info;
        inline app::ShaderID_Sharpen__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Sharpen__Class>(type_info, "Colorful", "ShaderID_Sharpen");
        }
        inline app::ShaderID_Sharpen* create() {
            return il2cpp::create_object<app::ShaderID_Sharpen>(get_class());
        }
    } // namespace ShaderID_Sharpen
} // namespace app::classes::types
