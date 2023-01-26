#pragma once
#include <Modloader/app/structs/AndroidDevicePushNotificationRegistrationRequest.h>
#include <Modloader/app/structs/AndroidDevicePushNotificationRegistrationRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AndroidDevicePushNotificationRegistrationRequest {
        inline app::AndroidDevicePushNotificationRegistrationRequest__Class** type_info() {
            static app::AndroidDevicePushNotificationRegistrationRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AndroidDevicePushNotificationRegistrationRequest__Class**)(modloader::win::memory::resolve_rva(0x04719210));
            }
            return cache;
        }
        inline app::AndroidDevicePushNotificationRegistrationRequest__Class* get_class() {
            return il2cpp::get_class<app::AndroidDevicePushNotificationRegistrationRequest__Class>(type_info(), "PlayFab.ClientModels", "AndroidDevicePushNotificationRegistrationRequest");
        }
        inline app::AndroidDevicePushNotificationRegistrationRequest* create() {
            return il2cpp::create_object<app::AndroidDevicePushNotificationRegistrationRequest>(get_class());
        }
    } // namespace AndroidDevicePushNotificationRegistrationRequest
} // namespace app::classes::types
