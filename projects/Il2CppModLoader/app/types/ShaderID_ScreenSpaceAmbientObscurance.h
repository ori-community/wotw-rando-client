#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ScreenSpaceAmbientObscurance {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_ScreenSpaceAmbientObscurance__Class** type_info;
        inline app::ShaderID_ScreenSpaceAmbientObscurance__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ScreenSpaceAmbientObscurance__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_ScreenSpaceAmbientObscurance");
        }
        inline app::ShaderID_ScreenSpaceAmbientObscurance* create() {
            return il2cpp::create_object<app::ShaderID_ScreenSpaceAmbientObscurance>(get_class());
        }
    } // namespace ShaderID_ScreenSpaceAmbientObscurance
} // namespace app::classes::types
