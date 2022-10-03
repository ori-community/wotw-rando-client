#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_WhiteBalance {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_WhiteBalance__Class** type_info;
        inline app::ShaderID_WhiteBalance__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_WhiteBalance__Class>(type_info, "Colorful", "ShaderID_WhiteBalance");
        }
        inline app::ShaderID_WhiteBalance* create() {
            return il2cpp::create_object<app::ShaderID_WhiteBalance>(get_class());
        }
    } // namespace ShaderID_WhiteBalance
} // namespace app::classes::types
