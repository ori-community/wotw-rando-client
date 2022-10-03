#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkWwiseInitializationSettings_CommonPlatformSettings {
        namespace {
            app::AkWwiseInitializationSettings_CommonPlatformSettings__Class* type_info_ref = nullptr;
        }
        app::AkWwiseInitializationSettings_CommonPlatformSettings__Class** type_info = &type_info_ref;
        inline app::AkWwiseInitializationSettings_CommonPlatformSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::AkWwiseInitializationSettings_CommonPlatformSettings__Class>(type_info, "", "AkWwiseInitializationSettings", "CommonPlatformSettings");
        }
        inline app::AkWwiseInitializationSettings_CommonPlatformSettings* create() {
            return il2cpp::create_object<app::AkWwiseInitializationSettings_CommonPlatformSettings>(get_class());
        }
    } // namespace AkWwiseInitializationSettings_CommonPlatformSettings
} // namespace app::classes::types
