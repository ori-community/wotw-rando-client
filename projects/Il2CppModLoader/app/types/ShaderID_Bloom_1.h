#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Bloom_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_Bloom_1__Class** type_info;
        inline app::ShaderID_Bloom_1__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Bloom_1__Class>(type_info, "UnityStandardAssets.CinematicEffects", "ShaderID_Bloom");
        }
        inline app::ShaderID_Bloom_1* create() {
            return il2cpp::create_object<app::ShaderID_Bloom_1>(get_class());
        }
    } // namespace ShaderID_Bloom_1
} // namespace app::classes::types
