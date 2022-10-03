#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_SMAA {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_SMAA__Class** type_info;
        inline app::ShaderID_SMAA__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_SMAA__Class>(type_info, "UnityStandardAssets.CinematicEffects", "ShaderID_SMAA");
        }
        inline app::ShaderID_SMAA* create() {
            return il2cpp::create_object<app::ShaderID_SMAA>(get_class());
        }
    } // namespace ShaderID_SMAA
} // namespace app::classes::types
