#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
