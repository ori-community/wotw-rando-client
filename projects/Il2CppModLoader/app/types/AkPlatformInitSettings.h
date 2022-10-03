#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkPlatformInitSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkPlatformInitSettings__Class** type_info;
        inline app::AkPlatformInitSettings__Class* get_class() {
            return il2cpp::get_class<app::AkPlatformInitSettings__Class>(type_info, "", "AkPlatformInitSettings");
        }
        inline app::AkPlatformInitSettings* create() {
            return il2cpp::create_object<app::AkPlatformInitSettings>(get_class());
        }
    } // namespace AkPlatformInitSettings
} // namespace app::classes::types
