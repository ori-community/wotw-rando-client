#pragma once
#include <Modloader/app/structs/DownsamplingThresholdProfilingSetting.h>
#include <Modloader/app/structs/DownsamplingThresholdProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DownsamplingThresholdProfilingSetting {
        inline app::DownsamplingThresholdProfilingSetting__Class** type_info() {
            static app::DownsamplingThresholdProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DownsamplingThresholdProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DownsamplingThresholdProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::DownsamplingThresholdProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "DownsamplingThresholdProfilingSetting");
        }
        inline app::DownsamplingThresholdProfilingSetting* create() {
            return il2cpp::create_object<app::DownsamplingThresholdProfilingSetting>(get_class());
        }
    } // namespace DownsamplingThresholdProfilingSetting
} // namespace app::classes::types
