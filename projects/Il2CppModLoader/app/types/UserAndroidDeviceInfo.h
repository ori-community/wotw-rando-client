#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserAndroidDeviceInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UserAndroidDeviceInfo__Class** type_info;
        inline app::UserAndroidDeviceInfo__Class* get_class() {
            return il2cpp::get_class<app::UserAndroidDeviceInfo__Class>(type_info, "PlayFab.ClientModels", "UserAndroidDeviceInfo");
        }
        inline app::UserAndroidDeviceInfo* create() {
            return il2cpp::create_object<app::UserAndroidDeviceInfo>(get_class());
        }
    } // namespace UserAndroidDeviceInfo
} // namespace app::classes::types
