#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderKeyword_FXAA {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderKeyword_FXAA__Class** type_info;
        inline app::ShaderKeyword_FXAA__Class* get_class() {
            return il2cpp::get_class<app::ShaderKeyword_FXAA__Class>(type_info, "UnityStandardAssets.CinematicEffects", "ShaderKeyword_FXAA");
        }
        inline app::ShaderKeyword_FXAA* create() {
            return il2cpp::create_object<app::ShaderKeyword_FXAA>(get_class());
        }
    } // namespace ShaderKeyword_FXAA
} // namespace app::classes::types
