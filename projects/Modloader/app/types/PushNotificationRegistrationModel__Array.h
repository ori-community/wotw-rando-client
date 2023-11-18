#pragma once
#include <Modloader/app/structs/PushNotificationRegistrationModel__Array.h>
#include <Modloader/app/structs/PushNotificationRegistrationModel__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PushNotificationRegistrationModel__Array {
        inline app::PushNotificationRegistrationModel__Array__Class** type_info() {
            static app::PushNotificationRegistrationModel__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PushNotificationRegistrationModel__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PushNotificationRegistrationModel__Array__Class* get_class() {
            return il2cpp::get_class<app::PushNotificationRegistrationModel__Array__Class>(type_info(), "PlayFab.ClientModels", "PushNotificationRegistrationModel[]");
        }
        inline app::PushNotificationRegistrationModel__Array* create() {
            return il2cpp::create_object<app::PushNotificationRegistrationModel__Array>(get_class());
        }
    } // namespace PushNotificationRegistrationModel__Array
} // namespace app::classes::types
