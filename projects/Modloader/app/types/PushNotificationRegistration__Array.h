#pragma once
#include <Modloader/app/structs/PushNotificationRegistration__Array.h>
#include <Modloader/app/structs/PushNotificationRegistration__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PushNotificationRegistration__Array {
        inline app::PushNotificationRegistration__Array__Class** type_info() {
            static app::PushNotificationRegistration__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PushNotificationRegistration__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PushNotificationRegistration__Array__Class* get_class() {
            return il2cpp::get_class<app::PushNotificationRegistration__Array__Class>(type_info(), "PlayFab.ServerModels", "PushNotificationRegistration[]");
        }
        inline app::PushNotificationRegistration__Array* create() {
            return il2cpp::create_object<app::PushNotificationRegistration__Array>(get_class());
        }
    } // namespace PushNotificationRegistration__Array
} // namespace app::classes::types
