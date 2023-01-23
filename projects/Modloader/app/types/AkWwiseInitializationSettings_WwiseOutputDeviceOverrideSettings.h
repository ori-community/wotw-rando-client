#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings__Class.h>
#include <Modloader/app/structs/AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings.h>

namespace app::classes::types {
    namespace AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings {
        inline app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings__Class** type_info = (app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings__Class**)(modloader::win::memory::resolve_rva(0x0477FC98));
        inline app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings__Class>(type_info, "", "AkWwiseInitializationSettings", "WwiseOutputDeviceOverrideSettings");
        }
        inline app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings* create() {
            return il2cpp::create_object<app::AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings>(get_class());
        }
    } // namespace AkWwiseInitializationSettings_WwiseOutputDeviceOverrideSettings
} // namespace app::classes::types
