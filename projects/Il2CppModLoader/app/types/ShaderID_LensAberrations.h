#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_LensAberrations {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_LensAberrations__Class** type_info;
        inline app::ShaderID_LensAberrations__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_LensAberrations__Class>(type_info, "UnityStandardAssets.CinematicEffects", "ShaderID_LensAberrations");
        }
        inline app::ShaderID_LensAberrations* create() {
            return il2cpp::create_object<app::ShaderID_LensAberrations>(get_class());
        }
    } // namespace ShaderID_LensAberrations
} // namespace app::classes::types
