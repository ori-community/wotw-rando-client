#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderKeyword_LensAberrations {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderKeyword_LensAberrations__Class** type_info;
        inline app::ShaderKeyword_LensAberrations__Class* get_class() {
            return il2cpp::get_class<app::ShaderKeyword_LensAberrations__Class>(type_info, "UnityStandardAssets.CinematicEffects", "ShaderKeyword_LensAberrations");
        }
        inline app::ShaderKeyword_LensAberrations* create() {
            return il2cpp::create_object<app::ShaderKeyword_LensAberrations>(get_class());
        }
    } // namespace ShaderKeyword_LensAberrations
} // namespace app::classes::types
