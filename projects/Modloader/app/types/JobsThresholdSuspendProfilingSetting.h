#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JobsThresholdSuspendProfilingSetting__Class.h>
#include <Modloader/app/structs/JobsThresholdSuspendProfilingSetting.h>

namespace app::classes::types {
    namespace JobsThresholdSuspendProfilingSetting {
        namespace {
            inline app::JobsThresholdSuspendProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::JobsThresholdSuspendProfilingSetting__Class** type_info = &type_info_ref;
        inline app::JobsThresholdSuspendProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::JobsThresholdSuspendProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "JobsThresholdSuspendProfilingSetting");
        }
        inline app::JobsThresholdSuspendProfilingSetting* create() {
            return il2cpp::create_object<app::JobsThresholdSuspendProfilingSetting>(get_class());
        }
    } // namespace JobsThresholdSuspendProfilingSetting
} // namespace app::classes::types
