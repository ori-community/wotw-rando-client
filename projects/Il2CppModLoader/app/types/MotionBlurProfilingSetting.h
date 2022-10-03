#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MotionBlurProfilingSetting {
        namespace {
            app::MotionBlurProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::MotionBlurProfilingSetting__Class** type_info = &type_info_ref;
        inline app::MotionBlurProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::MotionBlurProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "MotionBlurProfilingSetting");
        }
        inline app::MotionBlurProfilingSetting* create() {
            return il2cpp::create_object<app::MotionBlurProfilingSetting>(get_class());
        }
    } // namespace MotionBlurProfilingSetting
} // namespace app::classes::types
