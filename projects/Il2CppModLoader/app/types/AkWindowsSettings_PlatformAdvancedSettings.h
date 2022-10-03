#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkWindowsSettings_PlatformAdvancedSettings {
        namespace {
            app::AkWindowsSettings_PlatformAdvancedSettings__Class* type_info_ref = nullptr;
        }
        app::AkWindowsSettings_PlatformAdvancedSettings__Class** type_info = &type_info_ref;
        inline app::AkWindowsSettings_PlatformAdvancedSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::AkWindowsSettings_PlatformAdvancedSettings__Class>(type_info, "", "AkWindowsSettings", "PlatformAdvancedSettings");
        }
        inline app::AkWindowsSettings_PlatformAdvancedSettings* create() {
            return il2cpp::create_object<app::AkWindowsSettings_PlatformAdvancedSettings>(get_class());
        }
    } // namespace AkWindowsSettings_PlatformAdvancedSettings
} // namespace app::classes::types
