#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ChromaticAberration {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_ChromaticAberration__Class** type_info;
        inline app::ShaderID_ChromaticAberration__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ChromaticAberration__Class>(type_info, "Colorful", "ShaderID_ChromaticAberration");
        }
        inline app::ShaderID_ChromaticAberration* create() {
            return il2cpp::create_object<app::ShaderID_ChromaticAberration>(get_class());
        }
    } // namespace ShaderID_ChromaticAberration
} // namespace app::classes::types
