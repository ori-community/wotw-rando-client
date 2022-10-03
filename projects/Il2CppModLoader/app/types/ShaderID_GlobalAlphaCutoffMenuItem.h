#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_GlobalAlphaCutoffMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_GlobalAlphaCutoffMenuItem__Class** type_info;
        inline app::ShaderID_GlobalAlphaCutoffMenuItem__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_GlobalAlphaCutoffMenuItem__Class>(type_info, "", "ShaderID_GlobalAlphaCutoffMenuItem");
        }
        inline app::ShaderID_GlobalAlphaCutoffMenuItem* create() {
            return il2cpp::create_object<app::ShaderID_GlobalAlphaCutoffMenuItem>(get_class());
        }
    } // namespace ShaderID_GlobalAlphaCutoffMenuItem
} // namespace app::classes::types
