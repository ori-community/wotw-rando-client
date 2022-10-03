#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_CameraMotionBlur {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_CameraMotionBlur__Class** type_info;
        inline app::ShaderID_CameraMotionBlur__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraMotionBlur__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_CameraMotionBlur");
        }
        inline app::ShaderID_CameraMotionBlur* create() {
            return il2cpp::create_object<app::ShaderID_CameraMotionBlur>(get_class());
        }
    } // namespace ShaderID_CameraMotionBlur
} // namespace app::classes::types
