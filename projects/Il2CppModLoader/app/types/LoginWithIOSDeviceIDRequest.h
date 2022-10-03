#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoginWithIOSDeviceIDRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoginWithIOSDeviceIDRequest__Class** type_info;
        inline app::LoginWithIOSDeviceIDRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithIOSDeviceIDRequest__Class>(type_info, "PlayFab.ClientModels", "LoginWithIOSDeviceIDRequest");
        }
        inline app::LoginWithIOSDeviceIDRequest* create() {
            return il2cpp::create_object<app::LoginWithIOSDeviceIDRequest>(get_class());
        }
    } // namespace LoginWithIOSDeviceIDRequest
} // namespace app::classes::types
