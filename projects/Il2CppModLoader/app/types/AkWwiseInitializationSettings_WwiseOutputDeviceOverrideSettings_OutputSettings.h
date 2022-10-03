#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings__Class** type_info;
        inline app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings__Class>(type_info, "", "AkWwiseInitializationSettings+WwiseOutputDeviceOverrideSettings", "OutputSettings");
        }
        inline app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings* create() {
            return il2cpp::create_object<app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings>(get_class());
        }
    } // namespace AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings_OutputSettings
} // namespace app::classes::types
