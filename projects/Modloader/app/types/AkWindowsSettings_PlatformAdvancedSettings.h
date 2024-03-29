#pragma once
#include <Modloader/app/structs/AkWindowsSettings_PlatformAdvancedSettings.h>
#include <Modloader/app/structs/AkWindowsSettings_PlatformAdvancedSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkWindowsSettings_PlatformAdvancedSettings {
        inline app::AkWindowsSettings_PlatformAdvancedSettings__Class** type_info() {
            static app::AkWindowsSettings_PlatformAdvancedSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkWindowsSettings_PlatformAdvancedSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkWindowsSettings_PlatformAdvancedSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::AkWindowsSettings_PlatformAdvancedSettings__Class>(type_info(), "", "AkWindowsSettings", "PlatformAdvancedSettings");
        }
        inline app::AkWindowsSettings_PlatformAdvancedSettings* create() {
            return il2cpp::create_object<app::AkWindowsSettings_PlatformAdvancedSettings>(get_class());
        }
    } // namespace AkWindowsSettings_PlatformAdvancedSettings
} // namespace app::classes::types
