#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID__Class** type_info;
        inline app::ShaderID__Class* get_class() {
            return il2cpp::get_class<app::ShaderID__Class>(type_info, "Moon.Rendering", "ShaderID");
        }
        inline app::ShaderID* create() {
            return il2cpp::create_object<app::ShaderID>(get_class());
        }
    } // namespace ShaderID
} // namespace app::classes::types
