#pragma once
#include <Modloader/app/structs/AkWwiseInitializationSettings_WwiseOverrideSettings.h>
#include <Modloader/app/structs/AkWwiseInitializationSettings_WwiseOverrideSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkWwiseInitializationSettings_WwiseOverrideSettings {
        inline app::AkWwiseInitializationSettings_WwiseOverrideSettings__Class** type_info() {
            static app::AkWwiseInitializationSettings_WwiseOverrideSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkWwiseInitializationSettings_WwiseOverrideSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkWwiseInitializationSettings_WwiseOverrideSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::AkWwiseInitializationSettings_WwiseOverrideSettings__Class>(type_info(), "", "AkWwiseInitializationSettings", "WwiseOverrideSettings");
        }
        inline app::AkWwiseInitializationSettings_WwiseOverrideSettings* create() {
            return il2cpp::create_object<app::AkWwiseInitializationSettings_WwiseOverrideSettings>(get_class());
        }
    } // namespace AkWwiseInitializationSettings_WwiseOverrideSettings
} // namespace app::classes::types
