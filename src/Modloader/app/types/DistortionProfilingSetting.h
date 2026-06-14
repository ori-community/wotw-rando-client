#pragma once
#include <Modloader/app/structs/DistortionProfilingSetting.h>
#include <Modloader/app/structs/DistortionProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DistortionProfilingSetting {
        inline app::DistortionProfilingSetting__Class** type_info() {
            static app::DistortionProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DistortionProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DistortionProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::DistortionProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "DistortionProfilingSetting");
        }
        inline app::DistortionProfilingSetting* create() {
            return il2cpp::create_object<app::DistortionProfilingSetting>(get_class());
        }
    } // namespace DistortionProfilingSetting
} // namespace app::classes::types
