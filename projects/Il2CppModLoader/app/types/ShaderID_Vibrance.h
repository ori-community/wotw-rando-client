#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Vibrance {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_Vibrance__Class** type_info;
        inline app::ShaderID_Vibrance__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Vibrance__Class>(type_info, "Colorful", "ShaderID_Vibrance");
        }
        inline app::ShaderID_Vibrance* create() {
            return il2cpp::create_object<app::ShaderID_Vibrance>(get_class());
        }
    } // namespace ShaderID_Vibrance
} // namespace app::classes::types
