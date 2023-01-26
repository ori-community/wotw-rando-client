#pragma once
#include <Modloader/app/structs/AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum.h>
#include <Modloader/app/structs/AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum {
        inline app::AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum__Class** type_info() {
            static app::AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum__Class>(type_info(), "", "AkWindowsSettings+PlatformAdvancedSettings", "AudioAPI");
        }
        inline app::AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum* create() {
            return il2cpp::create_object<app::AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum>(get_class());
        }
    } // namespace AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum
} // namespace app::classes::types
