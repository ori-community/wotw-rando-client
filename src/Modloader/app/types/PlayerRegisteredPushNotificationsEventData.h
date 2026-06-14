#pragma once
#include <Modloader/app/structs/PlayerRegisteredPushNotificationsEventData.h>
#include <Modloader/app/structs/PlayerRegisteredPushNotificationsEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerRegisteredPushNotificationsEventData {
        inline app::PlayerRegisteredPushNotificationsEventData__Class** type_info() {
            static app::PlayerRegisteredPushNotificationsEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerRegisteredPushNotificationsEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerRegisteredPushNotificationsEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerRegisteredPushNotificationsEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerRegisteredPushNotificationsEventData");
        }
        inline app::PlayerRegisteredPushNotificationsEventData* create() {
            return il2cpp::create_object<app::PlayerRegisteredPushNotificationsEventData>(get_class());
        }
    } // namespace PlayerRegisteredPushNotificationsEventData
} // namespace app::classes::types
