#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegisterForIOSPushNotificationRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegisterForIOSPushNotificationRequest__Class** type_info;
        inline app::RegisterForIOSPushNotificationRequest__Class* get_class() {
            return il2cpp::get_class<app::RegisterForIOSPushNotificationRequest__Class>(type_info, "PlayFab.ClientModels", "RegisterForIOSPushNotificationRequest");
        }
        inline app::RegisterForIOSPushNotificationRequest* create() {
            return il2cpp::create_object<app::RegisterForIOSPushNotificationRequest>(get_class());
        }
    } // namespace RegisterForIOSPushNotificationRequest
} // namespace app::classes::types
