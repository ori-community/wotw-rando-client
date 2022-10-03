#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SendPushNotificationRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SendPushNotificationRequest__Class** type_info;
        inline app::SendPushNotificationRequest__Class* get_class() {
            return il2cpp::get_class<app::SendPushNotificationRequest__Class>(type_info, "PlayFab.ServerModels", "SendPushNotificationRequest");
        }
        inline app::SendPushNotificationRequest* create() {
            return il2cpp::create_object<app::SendPushNotificationRequest>(get_class());
        }
    } // namespace SendPushNotificationRequest
} // namespace app::classes::types
