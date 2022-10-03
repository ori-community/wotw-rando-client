#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlinkAndroidDeviceIDRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlinkAndroidDeviceIDRequest__Class** type_info;
        inline app::UnlinkAndroidDeviceIDRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkAndroidDeviceIDRequest__Class>(type_info, "PlayFab.ClientModels", "UnlinkAndroidDeviceIDRequest");
        }
        inline app::UnlinkAndroidDeviceIDRequest* create() {
            return il2cpp::create_object<app::UnlinkAndroidDeviceIDRequest>(get_class());
        }
    } // namespace UnlinkAndroidDeviceIDRequest
} // namespace app::classes::types
