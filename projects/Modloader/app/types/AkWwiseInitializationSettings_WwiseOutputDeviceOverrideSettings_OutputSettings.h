#pragma once
#include <Modloader/app/structs/AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings.h>
#include <Modloader/app/structs/AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings {
        inline app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings__Class** type_info() {
            static app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings__Class**)(modloader::win::memory::resolve_rva(0x04765BB0));
            }
            return cache;
        }
        inline app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings__Class>(type_info(), "", "AkWwiseInitializationSettings+WwiseOutputDeviceOverrideSettings", "OutputSettings");
        }
        inline app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings* create() {
            return il2cpp::create_object<app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings>(get_class());
        }
    } // namespace AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings
} // namespace app::classes::types
