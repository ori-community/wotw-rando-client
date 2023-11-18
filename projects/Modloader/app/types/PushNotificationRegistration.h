#pragma once
#include <Modloader/app/structs/PushNotificationRegistration.h>
#include <Modloader/app/structs/PushNotificationRegistration__Array.h>
#include <Modloader/app/structs/PushNotificationRegistration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PushNotificationRegistration {
        inline app::PushNotificationRegistration__Class** type_info() {
            static app::PushNotificationRegistration__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PushNotificationRegistration__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PushNotificationRegistration__Class* get_class() {
            return il2cpp::get_class<app::PushNotificationRegistration__Class>(type_info(), "PlayFab.ServerModels", "PushNotificationRegistration");
        }
        inline app::PushNotificationRegistration* create() {
            return il2cpp::create_object<app::PushNotificationRegistration>(get_class());
        }
        inline app::PushNotificationRegistration__Array* create_array(int size) {
            return il2cpp::array_new<app::PushNotificationRegistration__Array>(get_class(), size);
        }
        inline app::PushNotificationRegistration__Array* create_array(const std::vector<app::PushNotificationRegistration*>& items) {
            return il2cpp::array_new<app::PushNotificationRegistration__Array>(get_class(), items);
        }
    } // namespace PushNotificationRegistration
} // namespace app::classes::types
