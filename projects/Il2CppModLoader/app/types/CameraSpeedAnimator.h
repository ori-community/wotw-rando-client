#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraSpeedAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraSpeedAnimator__Class** type_info;
        inline app::CameraSpeedAnimator__Class* get_class() {
            return il2cpp::get_class<app::CameraSpeedAnimator__Class>(type_info, "Moon.Timeline", "CameraSpeedAnimator");
        }
        inline app::CameraSpeedAnimator* create() {
            return il2cpp::create_object<app::CameraSpeedAnimator>(get_class());
        }
    } // namespace CameraSpeedAnimator
} // namespace app::classes::types
