#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserIosDeviceInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UserIosDeviceInfo__Class** type_info;
        inline app::UserIosDeviceInfo__Class* get_class() {
            return il2cpp::get_class<app::UserIosDeviceInfo__Class>(type_info, "PlayFab.ClientModels", "UserIosDeviceInfo");
        }
        inline app::UserIosDeviceInfo* create() {
            return il2cpp::create_object<app::UserIosDeviceInfo>(get_class());
        }
    } // namespace UserIosDeviceInfo
} // namespace app::classes::types
