#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Wiggle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_Wiggle__Class** type_info;
        inline app::ShaderID_Wiggle__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Wiggle__Class>(type_info, "Colorful", "ShaderID_Wiggle");
        }
        inline app::ShaderID_Wiggle* create() {
            return il2cpp::create_object<app::ShaderID_Wiggle>(get_class());
        }
    } // namespace ShaderID_Wiggle
} // namespace app::classes::types
