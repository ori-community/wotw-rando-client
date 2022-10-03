#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraMotionBlur {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraMotionBlur__Class** type_info;
        inline app::CameraMotionBlur__Class* get_class() {
            return il2cpp::get_class<app::CameraMotionBlur__Class>(type_info, "UnityStandardAssets.ImageEffects", "CameraMotionBlur");
        }
        inline app::CameraMotionBlur* create() {
            return il2cpp::create_object<app::CameraMotionBlur>(get_class());
        }
    } // namespace CameraMotionBlur
} // namespace app::classes::types
