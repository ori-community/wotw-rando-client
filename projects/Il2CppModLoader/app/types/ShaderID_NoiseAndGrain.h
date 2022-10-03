#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_NoiseAndGrain {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_NoiseAndGrain__Class** type_info;
        inline app::ShaderID_NoiseAndGrain__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_NoiseAndGrain__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_NoiseAndGrain");
        }
        inline app::ShaderID_NoiseAndGrain* create() {
            return il2cpp::create_object<app::ShaderID_NoiseAndGrain>(get_class());
        }
    } // namespace ShaderID_NoiseAndGrain
} // namespace app::classes::types
