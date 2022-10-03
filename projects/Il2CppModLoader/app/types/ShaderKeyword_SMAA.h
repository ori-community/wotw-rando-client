#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderKeyword_SMAA {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderKeyword_SMAA__Class** type_info;
        inline app::ShaderKeyword_SMAA__Class* get_class() {
            return il2cpp::get_class<app::ShaderKeyword_SMAA__Class>(type_info, "UnityStandardAssets.CinematicEffects", "ShaderKeyword_SMAA");
        }
        inline app::ShaderKeyword_SMAA* create() {
            return il2cpp::create_object<app::ShaderKeyword_SMAA>(get_class());
        }
    } // namespace ShaderKeyword_SMAA
} // namespace app::classes::types
