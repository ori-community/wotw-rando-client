#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Levels {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_Levels__Class** type_info;
        inline app::ShaderID_Levels__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Levels__Class>(type_info, "Colorful", "ShaderID_Levels");
        }
        inline app::ShaderID_Levels* create() {
            return il2cpp::create_object<app::ShaderID_Levels>(get_class());
        }
    } // namespace ShaderID_Levels
} // namespace app::classes::types
