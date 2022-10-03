#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Tonemapping {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_Tonemapping__Class** type_info;
        inline app::ShaderID_Tonemapping__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Tonemapping__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_Tonemapping");
        }
        inline app::ShaderID_Tonemapping* create() {
            return il2cpp::create_object<app::ShaderID_Tonemapping>(get_class());
        }
    } // namespace ShaderID_Tonemapping
} // namespace app::classes::types
