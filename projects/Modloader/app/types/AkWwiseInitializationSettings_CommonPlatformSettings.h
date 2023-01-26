#pragma once
#include <Modloader/app/structs/AkWwiseInitializationSettings_CommonPlatformSettings.h>
#include <Modloader/app/structs/AkWwiseInitializationSettings_CommonPlatformSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkWwiseInitializationSettings_CommonPlatformSettings {
        inline app::AkWwiseInitializationSettings_CommonPlatformSettings__Class** type_info() {
            static app::AkWwiseInitializationSettings_CommonPlatformSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkWwiseInitializationSettings_CommonPlatformSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkWwiseInitializationSettings_CommonPlatformSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::AkWwiseInitializationSettings_CommonPlatformSettings__Class>(type_info(), "", "AkWwiseInitializationSettings", "CommonPlatformSettings");
        }
        inline app::AkWwiseInitializationSettings_CommonPlatformSettings* create() {
            return il2cpp::create_object<app::AkWwiseInitializationSettings_CommonPlatformSettings>(get_class());
        }
    } // namespace AkWwiseInitializationSettings_CommonPlatformSettings
} // namespace app::classes::types
