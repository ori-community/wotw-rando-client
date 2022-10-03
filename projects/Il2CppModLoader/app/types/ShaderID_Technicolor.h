#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Technicolor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_Technicolor__Class** type_info;
        inline app::ShaderID_Technicolor__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Technicolor__Class>(type_info, "Colorful", "ShaderID_Technicolor");
        }
        inline app::ShaderID_Technicolor* create() {
            return il2cpp::create_object<app::ShaderID_Technicolor>(get_class());
        }
    } // namespace ShaderID_Technicolor
} // namespace app::classes::types
