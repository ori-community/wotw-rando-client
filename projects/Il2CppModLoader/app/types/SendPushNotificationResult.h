#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SendPushNotificationResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SendPushNotificationResult__Class** type_info;
        inline app::SendPushNotificationResult__Class* get_class() {
            return il2cpp::get_class<app::SendPushNotificationResult__Class>(type_info, "PlayFab.ServerModels", "SendPushNotificationResult");
        }
        inline app::SendPushNotificationResult* create() {
            return il2cpp::create_object<app::SendPushNotificationResult>(get_class());
        }
    } // namespace SendPushNotificationResult
} // namespace app::classes::types
