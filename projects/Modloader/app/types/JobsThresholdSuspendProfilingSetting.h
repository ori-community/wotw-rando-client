#pragma once
#include <Modloader/app/structs/JobsThresholdSuspendProfilingSetting.h>
#include <Modloader/app/structs/JobsThresholdSuspendProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JobsThresholdSuspendProfilingSetting {
        inline app::JobsThresholdSuspendProfilingSetting__Class** type_info() {
            static app::JobsThresholdSuspendProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JobsThresholdSuspendProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JobsThresholdSuspendProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::JobsThresholdSuspendProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "JobsThresholdSuspendProfilingSetting");
        }
        inline app::JobsThresholdSuspendProfilingSetting* create() {
            return il2cpp::create_object<app::JobsThresholdSuspendProfilingSetting>(get_class());
        }
    } // namespace JobsThresholdSuspendProfilingSetting
} // namespace app::classes::types
