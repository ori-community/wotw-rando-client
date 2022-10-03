#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkXBoxOneSettings_PlatformAdvancedSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkXBoxOneSettings_PlatformAdvancedSettings__Class** type_info;
        inline app::AkXBoxOneSettings_PlatformAdvancedSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::AkXBoxOneSettings_PlatformAdvancedSettings__Class>(type_info, "", "AkXBoxOneSettings", "PlatformAdvancedSettings");
        }
        inline app::AkXBoxOneSettings_PlatformAdvancedSettings* create() {
            return il2cpp::create_object<app::AkXBoxOneSettings_PlatformAdvancedSettings>(get_class());
        }
    } // namespace AkXBoxOneSettings_PlatformAdvancedSettings
} // namespace app::classes::types
