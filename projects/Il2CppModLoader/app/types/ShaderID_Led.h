#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Led {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_Led__Class** type_info;
        inline app::ShaderID_Led__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Led__Class>(type_info, "Colorful", "ShaderID_Led");
        }
        inline app::ShaderID_Led* create() {
            return il2cpp::create_object<app::ShaderID_Led>(get_class());
        }
    } // namespace ShaderID_Led
} // namespace app::classes::types
