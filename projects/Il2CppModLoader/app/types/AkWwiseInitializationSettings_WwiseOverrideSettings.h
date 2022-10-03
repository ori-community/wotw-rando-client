#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkWwiseInitializationSettings_WwiseOverrideSettings {
        namespace {
            app::AkWwiseInitializationSettings_WwiseOverrideSettings__Class* type_info_ref = nullptr;
        }
        app::AkWwiseInitializationSettings_WwiseOverrideSettings__Class** type_info = &type_info_ref;
        inline app::AkWwiseInitializationSettings_WwiseOverrideSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::AkWwiseInitializationSettings_WwiseOverrideSettings__Class>(type_info, "", "AkWwiseInitializationSettings", "WwiseOverrideSettings");
        }
        inline app::AkWwiseInitializationSettings_WwiseOverrideSettings* create() {
            return il2cpp::create_object<app::AkWwiseInitializationSettings_WwiseOverrideSettings>(get_class());
        }
    } // namespace AkWwiseInitializationSettings_WwiseOverrideSettings
} // namespace app::classes::types
