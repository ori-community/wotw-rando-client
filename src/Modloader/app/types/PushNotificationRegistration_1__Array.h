#pragma once
#include <Modloader/app/structs/PushNotificationRegistration_1__Array.h>
#include <Modloader/app/structs/PushNotificationRegistration_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PushNotificationRegistration_1__Array {
        inline app::PushNotificationRegistration_1__Array__Class** type_info() {
            static app::PushNotificationRegistration_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PushNotificationRegistration_1__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PushNotificationRegistration_1__Array__Class* get_class() {
            return il2cpp::get_class<app::PushNotificationRegistration_1__Array__Class>(type_info(), "PlayFab.PlayStreamModels", "PushNotificationRegistration[]");
        }
        inline app::PushNotificationRegistration_1__Array* create() {
            return il2cpp::create_object<app::PushNotificationRegistration_1__Array>(get_class());
        }
    } // namespace PushNotificationRegistration_1__Array
} // namespace app::classes::types
