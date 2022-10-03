#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_SmartSaturation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_SmartSaturation__Class** type_info;
        inline app::ShaderID_SmartSaturation__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_SmartSaturation__Class>(type_info, "Colorful", "ShaderID_SmartSaturation");
        }
        inline app::ShaderID_SmartSaturation* create() {
            return il2cpp::create_object<app::ShaderID_SmartSaturation>(get_class());
        }
    } // namespace ShaderID_SmartSaturation
} // namespace app::classes::types
