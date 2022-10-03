#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ScreenSpaceReflection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_ScreenSpaceReflection__Class** type_info;
        inline app::ShaderID_ScreenSpaceReflection__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ScreenSpaceReflection__Class>(type_info, "UnityStandardAssets.CinematicEffects", "ShaderID_ScreenSpaceReflection");
        }
        inline app::ShaderID_ScreenSpaceReflection* create() {
            return il2cpp::create_object<app::ShaderID_ScreenSpaceReflection>(get_class());
        }
    } // namespace ShaderID_ScreenSpaceReflection
} // namespace app::classes::types
