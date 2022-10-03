#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AmbientOcclusion_Settings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AmbientOcclusion_Settings__Class** type_info;
        inline app::AmbientOcclusion_Settings__Class* get_class() {
            return il2cpp::get_nested_class<app::AmbientOcclusion_Settings__Class>(type_info, "UnityStandardAssets.CinematicEffects", "AmbientOcclusion", "Settings");
        }
        inline app::AmbientOcclusion_Settings* create() {
            return il2cpp::create_object<app::AmbientOcclusion_Settings>(get_class());
        }
    } // namespace AmbientOcclusion_Settings
} // namespace app::classes::types
