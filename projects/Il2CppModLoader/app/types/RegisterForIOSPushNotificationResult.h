#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegisterForIOSPushNotificationResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegisterForIOSPushNotificationResult__Class** type_info;
        inline app::RegisterForIOSPushNotificationResult__Class* get_class() {
            return il2cpp::get_class<app::RegisterForIOSPushNotificationResult__Class>(type_info, "PlayFab.ClientModels", "RegisterForIOSPushNotificationResult");
        }
        inline app::RegisterForIOSPushNotificationResult* create() {
            return il2cpp::create_object<app::RegisterForIOSPushNotificationResult>(get_class());
        }
    } // namespace RegisterForIOSPushNotificationResult
} // namespace app::classes::types
