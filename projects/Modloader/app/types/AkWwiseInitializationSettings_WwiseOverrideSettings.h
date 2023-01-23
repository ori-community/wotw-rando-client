#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkWwiseInitializationSettings_WwiseOverrideSettings__Class.h>
#include <Modloader/app/structs/AkWwiseInitializationSettings_WwiseOverrideSettings.h>

namespace app::classes::types {
    namespace AkWwiseInitializationSettings_WwiseOverrideSettings {
        namespace {
            inline app::AkWwiseInitializationSettings_WwiseOverrideSettings__Class* type_info_ref = nullptr;
        }
        inline app::AkWwiseInitializationSettings_WwiseOverrideSettings__Class** type_info = &type_info_ref;
        inline app::AkWwiseInitializationSettings_WwiseOverrideSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::AkWwiseInitializationSettings_WwiseOverrideSettings__Class>(type_info, "", "AkWwiseInitializationSettings", "WwiseOverrideSettings");
        }
        inline app::AkWwiseInitializationSettings_WwiseOverrideSettings* create() {
            return il2cpp::create_object<app::AkWwiseInitializationSettings_WwiseOverrideSettings>(get_class());
        }
    } // namespace AkWwiseInitializationSettings_WwiseOverrideSettings
} // namespace app::classes::types
