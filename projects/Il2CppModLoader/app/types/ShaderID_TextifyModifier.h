#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_TextifyModifier {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_TextifyModifier__Class** type_info;
        inline app::ShaderID_TextifyModifier__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_TextifyModifier__Class>(type_info, "", "ShaderID_TextifyModifier");
        }
        inline app::ShaderID_TextifyModifier* create() {
            return il2cpp::create_object<app::ShaderID_TextifyModifier>(get_class());
        }
    } // namespace ShaderID_TextifyModifier
} // namespace app::classes::types
