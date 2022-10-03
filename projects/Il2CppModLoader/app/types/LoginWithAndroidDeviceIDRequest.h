#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoginWithAndroidDeviceIDRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoginWithAndroidDeviceIDRequest__Class** type_info;
        inline app::LoginWithAndroidDeviceIDRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithAndroidDeviceIDRequest__Class>(type_info, "PlayFab.ClientModels", "LoginWithAndroidDeviceIDRequest");
        }
        inline app::LoginWithAndroidDeviceIDRequest* create() {
            return il2cpp::create_object<app::LoginWithAndroidDeviceIDRequest>(get_class());
        }
    } // namespace LoginWithAndroidDeviceIDRequest
} // namespace app::classes::types
