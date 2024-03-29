#pragma once
#include <Modloader/app/structs/DynamicResolutionScalingProfilingSetting.h>
#include <Modloader/app/structs/DynamicResolutionScalingProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicResolutionScalingProfilingSetting {
        inline app::DynamicResolutionScalingProfilingSetting__Class** type_info() {
            static app::DynamicResolutionScalingProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicResolutionScalingProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicResolutionScalingProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::DynamicResolutionScalingProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "DynamicResolutionScalingProfilingSetting");
        }
        inline app::DynamicResolutionScalingProfilingSetting* create() {
            return il2cpp::create_object<app::DynamicResolutionScalingProfilingSetting>(get_class());
        }
    } // namespace DynamicResolutionScalingProfilingSetting
} // namespace app::classes::types
