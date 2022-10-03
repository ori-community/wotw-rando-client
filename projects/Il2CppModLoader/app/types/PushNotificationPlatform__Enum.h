#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PushNotificationPlatform__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PushNotificationPlatform__Enum__Class** type_info;
        inline app::PushNotificationPlatform__Enum__Class* get_class() {
            return il2cpp::get_class<app::PushNotificationPlatform__Enum__Class>(type_info, "PlayFab.ClientModels", "PushNotificationPlatform");
        }
        inline app::PushNotificationPlatform__Enum* create() {
            return il2cpp::create_object<app::PushNotificationPlatform__Enum>(get_class());
        }
    } // namespace PushNotificationPlatform__Enum
} // namespace app::classes::types
