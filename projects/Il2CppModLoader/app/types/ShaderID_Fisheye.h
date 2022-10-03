#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_Fisheye {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_Fisheye__Class** type_info;
        inline app::ShaderID_Fisheye__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_Fisheye__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_Fisheye");
        }
        inline app::ShaderID_Fisheye* create() {
            return il2cpp::create_object<app::ShaderID_Fisheye>(get_class());
        }
    } // namespace ShaderID_Fisheye
} // namespace app::classes::types
