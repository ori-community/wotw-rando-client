#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinkAndroidDeviceIDRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LinkAndroidDeviceIDRequest__Class** type_info;
        inline app::LinkAndroidDeviceIDRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkAndroidDeviceIDRequest__Class>(type_info, "PlayFab.ClientModels", "LinkAndroidDeviceIDRequest");
        }
        inline app::LinkAndroidDeviceIDRequest* create() {
            return il2cpp::create_object<app::LinkAndroidDeviceIDRequest>(get_class());
        }
    } // namespace LinkAndroidDeviceIDRequest
} // namespace app::classes::types
