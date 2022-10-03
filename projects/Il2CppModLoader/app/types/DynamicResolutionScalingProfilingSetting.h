#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicResolutionScalingProfilingSetting {
        namespace {
            app::DynamicResolutionScalingProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::DynamicResolutionScalingProfilingSetting__Class** type_info = &type_info_ref;
        inline app::DynamicResolutionScalingProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::DynamicResolutionScalingProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "DynamicResolutionScalingProfilingSetting");
        }
        inline app::DynamicResolutionScalingProfilingSetting* create() {
            return il2cpp::create_object<app::DynamicResolutionScalingProfilingSetting>(get_class());
        }
    } // namespace DynamicResolutionScalingProfilingSetting
} // namespace app::classes::types
