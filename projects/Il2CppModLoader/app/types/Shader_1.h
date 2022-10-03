#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Shader_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Shader_1__Class** type_info;
        inline app::Shader_1__Class* get_class() {
            return il2cpp::get_class<app::Shader_1__Class>(type_info, "Frameworks", "Shader");
        }
        inline app::Shader_1* create() {
            return il2cpp::create_object<app::Shader_1>(get_class());
        }
    } // namespace Shader_1
} // namespace app::classes::types
