#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NoiseAndGrain {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NoiseAndGrain__Class** type_info;
        inline app::NoiseAndGrain__Class* get_class() {
            return il2cpp::get_class<app::NoiseAndGrain__Class>(type_info, "UnityStandardAssets.ImageEffects", "NoiseAndGrain");
        }
        inline app::NoiseAndGrain* create() {
            return il2cpp::create_object<app::NoiseAndGrain>(get_class());
        }
    } // namespace NoiseAndGrain
} // namespace app::classes::types
