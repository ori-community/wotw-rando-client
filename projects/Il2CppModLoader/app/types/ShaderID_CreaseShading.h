#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CreaseShading {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CreaseShading__Class** type_info;
        inline app::ShaderID_CreaseShading__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CreaseShading__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_CreaseShading");
        }
        inline app::ShaderID_CreaseShading* create() {
            return il2cpp::create_object<app::ShaderID_CreaseShading>(get_class());
        }
    } // namespace ShaderID_CreaseShading
} // namespace app::classes::types
