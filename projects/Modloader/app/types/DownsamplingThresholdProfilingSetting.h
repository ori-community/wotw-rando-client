#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DownsamplingThresholdProfilingSetting {
        namespace {
            inline app::DownsamplingThresholdProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::DownsamplingThresholdProfilingSetting__Class** type_info = &type_info_ref;
        inline app::DownsamplingThresholdProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::DownsamplingThresholdProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "DownsamplingThresholdProfilingSetting");
        }
        inline app::DownsamplingThresholdProfilingSetting* create() {
            return il2cpp::create_object<app::DownsamplingThresholdProfilingSetting>(get_class());
        }
    } // namespace DownsamplingThresholdProfilingSetting
} // namespace app::classes::types
