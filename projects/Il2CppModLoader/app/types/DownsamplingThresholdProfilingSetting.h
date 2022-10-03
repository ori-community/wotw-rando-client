#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DownsamplingThresholdProfilingSetting {
        namespace {
            app::DownsamplingThresholdProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::DownsamplingThresholdProfilingSetting__Class** type_info = &type_info_ref;
        inline app::DownsamplingThresholdProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::DownsamplingThresholdProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "DownsamplingThresholdProfilingSetting");
        }
        inline app::DownsamplingThresholdProfilingSetting* create() {
            return il2cpp::create_object<app::DownsamplingThresholdProfilingSetting>(get_class());
        }
    } // namespace DownsamplingThresholdProfilingSetting
} // namespace app::classes::types
