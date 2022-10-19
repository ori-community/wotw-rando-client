#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AndroidDevicePushNotificationRegistrationResult {
        inline app::AndroidDevicePushNotificationRegistrationResult__Class** type_info = (app::AndroidDevicePushNotificationRegistrationResult__Class**)(modloader::win::memory::resolve_rva(0x0472D328));
        inline app::AndroidDevicePushNotificationRegistrationResult__Class* get_class() {
            return il2cpp::get_class<app::AndroidDevicePushNotificationRegistrationResult__Class>(type_info, "PlayFab.ClientModels", "AndroidDevicePushNotificationRegistrationResult");
        }
        inline app::AndroidDevicePushNotificationRegistrationResult* create() {
            return il2cpp::create_object<app::AndroidDevicePushNotificationRegistrationResult>(get_class());
        }
    } // namespace AndroidDevicePushNotificationRegistrationResult
} // namespace app::classes::types
