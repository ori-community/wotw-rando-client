#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_SeinController3D {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_SeinController3D__Class** type_info;
        inline app::ShaderID_SeinController3D__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_SeinController3D__Class>(type_info, "", "ShaderID_SeinController3D");
        }
        inline app::ShaderID_SeinController3D* create() {
            return il2cpp::create_object<app::ShaderID_SeinController3D>(get_class());
        }
    } // namespace ShaderID_SeinController3D
} // namespace app::classes::types
