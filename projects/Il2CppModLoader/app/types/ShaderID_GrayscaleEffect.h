#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_GrayscaleEffect {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_GrayscaleEffect__Class** type_info;
        inline app::ShaderID_GrayscaleEffect__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_GrayscaleEffect__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_GrayscaleEffect");
        }
        inline app::ShaderID_GrayscaleEffect* create() {
            return il2cpp::create_object<app::ShaderID_GrayscaleEffect>(get_class());
        }
    } // namespace ShaderID_GrayscaleEffect
} // namespace app::classes::types
