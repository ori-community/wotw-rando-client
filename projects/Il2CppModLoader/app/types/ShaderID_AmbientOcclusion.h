#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_AmbientOcclusion {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_AmbientOcclusion__Class** type_info;
        inline app::ShaderID_AmbientOcclusion__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_AmbientOcclusion__Class>(type_info, "UnityStandardAssets.CinematicEffects", "ShaderID_AmbientOcclusion");
        }
        inline app::ShaderID_AmbientOcclusion* create() {
            return il2cpp::create_object<app::ShaderID_AmbientOcclusion>(get_class());
        }
    } // namespace ShaderID_AmbientOcclusion
} // namespace app::classes::types
