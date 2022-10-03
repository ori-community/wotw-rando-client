#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MotionBlur {
        namespace {
            app::MotionBlur__Class* type_info_ref = nullptr;
        }
        app::MotionBlur__Class** type_info = &type_info_ref;
        inline app::MotionBlur__Class* get_class() {
            return il2cpp::get_class<app::MotionBlur__Class>(type_info, "UnityStandardAssets.ImageEffects", "MotionBlur");
        }
        inline app::MotionBlur* create() {
            return il2cpp::create_object<app::MotionBlur>(get_class());
        }
    } // namespace MotionBlur
} // namespace app::classes::types
