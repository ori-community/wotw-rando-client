#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkUnityPlatformSpecificSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkUnityPlatformSpecificSettings__Class** type_info;
        inline app::AkUnityPlatformSpecificSettings__Class* get_class() {
            return il2cpp::get_class<app::AkUnityPlatformSpecificSettings__Class>(type_info, "", "AkUnityPlatformSpecificSettings");
        }
        inline app::AkUnityPlatformSpecificSettings* create() {
            return il2cpp::create_object<app::AkUnityPlatformSpecificSettings>(get_class());
        }
    } // namespace AkUnityPlatformSpecificSettings
} // namespace app::classes::types
