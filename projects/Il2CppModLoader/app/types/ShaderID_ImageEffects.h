#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ImageEffects {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_ImageEffects__Class** type_info;
        inline app::ShaderID_ImageEffects__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ImageEffects__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_ImageEffects");
        }
        inline app::ShaderID_ImageEffects* create() {
            return il2cpp::create_object<app::ShaderID_ImageEffects>(get_class());
        }
    } // namespace ShaderID_ImageEffects
} // namespace app::classes::types
