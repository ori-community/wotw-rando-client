#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkDeviceSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkDeviceSettings__Class** type_info;
        inline app::AkDeviceSettings__Class* get_class() {
            return il2cpp::get_class<app::AkDeviceSettings__Class>(type_info, "", "AkDeviceSettings");
        }
        inline app::AkDeviceSettings* create() {
            return il2cpp::create_object<app::AkDeviceSettings>(get_class());
        }
    } // namespace AkDeviceSettings
} // namespace app::classes::types
