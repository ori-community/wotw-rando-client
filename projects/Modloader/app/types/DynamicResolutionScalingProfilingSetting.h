#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DynamicResolutionScalingProfilingSetting__Class.h>
#include <Modloader/app/structs/DynamicResolutionScalingProfilingSetting.h>

namespace app::classes::types {
    namespace DynamicResolutionScalingProfilingSetting {
        namespace {
            inline app::DynamicResolutionScalingProfilingSetting__Class* type_info_ref = nullptr;
        }
        inline app::DynamicResolutionScalingProfilingSetting__Class** type_info = &type_info_ref;
        inline app::DynamicResolutionScalingProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::DynamicResolutionScalingProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "DynamicResolutionScalingProfilingSetting");
        }
        inline app::DynamicResolutionScalingProfilingSetting* create() {
            return il2cpp::create_object<app::DynamicResolutionScalingProfilingSetting>(get_class());
        }
    } // namespace DynamicResolutionScalingProfilingSetting
} // namespace app::classes::types
