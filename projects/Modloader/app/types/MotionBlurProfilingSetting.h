#pragma once
#include <Modloader/app/structs/MotionBlurProfilingSetting.h>
#include <Modloader/app/structs/MotionBlurProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MotionBlurProfilingSetting {
        inline app::MotionBlurProfilingSetting__Class** type_info() {
            static app::MotionBlurProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MotionBlurProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MotionBlurProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::MotionBlurProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "MotionBlurProfilingSetting");
        }
        inline app::MotionBlurProfilingSetting* create() {
            return il2cpp::create_object<app::MotionBlurProfilingSetting>(get_class());
        }
    } // namespace MotionBlurProfilingSetting
} // namespace app::classes::types
