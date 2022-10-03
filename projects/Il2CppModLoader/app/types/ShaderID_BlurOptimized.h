#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_BlurOptimized {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_BlurOptimized__Class** type_info;
        inline app::ShaderID_BlurOptimized__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_BlurOptimized__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_BlurOptimized");
        }
        inline app::ShaderID_BlurOptimized* create() {
            return il2cpp::create_object<app::ShaderID_BlurOptimized>(get_class());
        }
    } // namespace ShaderID_BlurOptimized
} // namespace app::classes::types
