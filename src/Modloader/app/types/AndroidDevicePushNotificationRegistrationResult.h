#pragma once
#include <Modloader/app/structs/AndroidDevicePushNotificationRegistrationResult.h>
#include <Modloader/app/structs/AndroidDevicePushNotificationRegistrationResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AndroidDevicePushNotificationRegistrationResult {
        inline app::AndroidDevicePushNotificationRegistrationResult__Class** type_info() {
            static app::AndroidDevicePushNotificationRegistrationResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AndroidDevicePushNotificationRegistrationResult__Class**)(modloader::win::memory::resolve_rva(0x0472D328));
            }
            return cache;
        }
        inline app::AndroidDevicePushNotificationRegistrationResult__Class* get_class() {
            return il2cpp::get_class<app::AndroidDevicePushNotificationRegistrationResult__Class>(type_info(), "PlayFab.ClientModels", "AndroidDevicePushNotificationRegistrationResult");
        }
        inline app::AndroidDevicePushNotificationRegistrationResult* create() {
            return il2cpp::create_object<app::AndroidDevicePushNotificationRegistrationResult>(get_class());
        }
    } // namespace AndroidDevicePushNotificationRegistrationResult
} // namespace app::classes::types
