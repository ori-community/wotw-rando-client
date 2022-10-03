#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_BloomOptimized {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_BloomOptimized__Class** type_info;
        inline app::ShaderID_BloomOptimized__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_BloomOptimized__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_BloomOptimized");
        }
        inline app::ShaderID_BloomOptimized* create() {
            return il2cpp::create_object<app::ShaderID_BloomOptimized>(get_class());
        }
    } // namespace ShaderID_BloomOptimized
} // namespace app::classes::types
