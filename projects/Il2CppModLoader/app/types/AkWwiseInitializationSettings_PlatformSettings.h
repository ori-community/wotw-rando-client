#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkWwiseInitializationSettings_PlatformSettings {
        namespace {
            app::AkWwiseInitializationSettings_PlatformSettings__Class* type_info_ref = nullptr;
        }
        app::AkWwiseInitializationSettings_PlatformSettings__Class** type_info = &type_info_ref;
        inline app::AkWwiseInitializationSettings_PlatformSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::AkWwiseInitializationSettings_PlatformSettings__Class>(type_info, "", "AkWwiseInitializationSettings", "PlatformSettings");
        }
        inline app::AkWwiseInitializationSettings_PlatformSettings* create() {
            return il2cpp::create_object<app::AkWwiseInitializationSettings_PlatformSettings>(get_class());
        }
        inline app::AkWwiseInitializationSettings_PlatformSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::AkWwiseInitializationSettings_PlatformSettings__Array>(get_class(), size);
        }
    } // namespace AkWwiseInitializationSettings_PlatformSettings
} // namespace app::classes::types
