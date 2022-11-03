#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings {
        inline app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings__Class** type_info = (app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings__Class**)(modloader::win::memory::resolve_rva(0x04765BB0));
        inline app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings__Class>(type_info, "", "AkWwiseInitializationSettings+WwiseOutputDeviceOverrideSettings", "OutputSettings");
        }
        inline app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings* create() {
            return il2cpp::create_object<app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings>(get_class());
        }
    } // namespace AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings
} // namespace app::classes::types
