#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Shader_DefaultTextures {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Shader_DefaultTextures__Class** type_info;
        inline app::Shader_DefaultTextures__Class* get_class() {
            return il2cpp::get_nested_class<app::Shader_DefaultTextures__Class>(type_info, "Frameworks", "Shader", "DefaultTextures");
        }
        inline app::Shader_DefaultTextures* create() {
            return il2cpp::create_object<app::Shader_DefaultTextures>(get_class());
        }
    } // namespace Shader_DefaultTextures
} // namespace app::classes::types
