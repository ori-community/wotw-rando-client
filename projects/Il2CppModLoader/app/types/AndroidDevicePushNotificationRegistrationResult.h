#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AndroidDevicePushNotificationRegistrationResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AndroidDevicePushNotificationRegistrationResult__Class** type_info;
        inline app::AndroidDevicePushNotificationRegistrationResult__Class* get_class() {
            return il2cpp::get_class<app::AndroidDevicePushNotificationRegistrationResult__Class>(type_info, "PlayFab.ClientModels", "AndroidDevicePushNotificationRegistrationResult");
        }
        inline app::AndroidDevicePushNotificationRegistrationResult* create() {
            return il2cpp::create_object<app::AndroidDevicePushNotificationRegistrationResult>(get_class());
        }
    } // namespace AndroidDevicePushNotificationRegistrationResult
} // namespace app::classes::types
