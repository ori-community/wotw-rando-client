#pragma once
#include <Modloader/app/structs/PushNotificationPlatform__Enum_1.h>
#include <Modloader/app/structs/PushNotificationPlatform__Enum_1__Array.h>
#include <Modloader/app/structs/PushNotificationPlatform__Enum_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PushNotificationPlatform__Enum_1 {
        inline app::PushNotificationPlatform__Enum_1__Class** type_info() {
            static app::PushNotificationPlatform__Enum_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PushNotificationPlatform__Enum_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PushNotificationPlatform__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::PushNotificationPlatform__Enum_1__Class>(type_info(), "PlayFab.ServerModels", "PushNotificationPlatform");
        }
        inline app::PushNotificationPlatform__Enum_1* create() {
            return il2cpp::create_object<app::PushNotificationPlatform__Enum_1>(get_class());
        }
        inline app::PushNotificationPlatform__Enum_1__Array* create_array(int size) {
            return il2cpp::array_new<app::PushNotificationPlatform__Enum_1__Array>(get_class(), size);
        }
        inline app::PushNotificationPlatform__Enum_1__Array* create_array(const std::vector<app::PushNotificationPlatform__Enum_1*>& items) {
            return il2cpp::array_new<app::PushNotificationPlatform__Enum_1__Array>(get_class(), items);
        }
    } // namespace PushNotificationPlatform__Enum_1
} // namespace app::classes::types
