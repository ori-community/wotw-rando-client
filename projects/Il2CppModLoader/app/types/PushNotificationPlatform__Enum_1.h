#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PushNotificationPlatform__Enum_1 {
        namespace {
            app::PushNotificationPlatform__Enum_1__Class* type_info_ref = nullptr;
        }
        app::PushNotificationPlatform__Enum_1__Class** type_info = &type_info_ref;
        inline app::PushNotificationPlatform__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::PushNotificationPlatform__Enum_1__Class>(type_info, "PlayFab.ServerModels", "PushNotificationPlatform");
        }
        inline app::PushNotificationPlatform__Enum_1* create() {
            return il2cpp::create_object<app::PushNotificationPlatform__Enum_1>(get_class());
        }
        inline app::PushNotificationPlatform__Enum_1__Array* create_array(int size) {
            return il2cpp::array_new<app::PushNotificationPlatform__Enum_1__Array>(get_class(), size);
        }
    } // namespace PushNotificationPlatform__Enum_1
} // namespace app::classes::types
