#pragma once
#include <Modloader/app/structs/PushNotificationPackage.h>
#include <Modloader/app/structs/PushNotificationPackage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PushNotificationPackage {
        inline app::PushNotificationPackage__Class** type_info() {
            static app::PushNotificationPackage__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PushNotificationPackage__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PushNotificationPackage__Class* get_class() {
            return il2cpp::get_class<app::PushNotificationPackage__Class>(type_info(), "PlayFab.ServerModels", "PushNotificationPackage");
        }
        inline app::PushNotificationPackage* create() {
            return il2cpp::create_object<app::PushNotificationPackage>(get_class());
        }
    } // namespace PushNotificationPackage
} // namespace app::classes::types
