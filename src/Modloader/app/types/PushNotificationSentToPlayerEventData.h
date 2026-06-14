#pragma once
#include <Modloader/app/structs/PushNotificationSentToPlayerEventData.h>
#include <Modloader/app/structs/PushNotificationSentToPlayerEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PushNotificationSentToPlayerEventData {
        inline app::PushNotificationSentToPlayerEventData__Class** type_info() {
            static app::PushNotificationSentToPlayerEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PushNotificationSentToPlayerEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PushNotificationSentToPlayerEventData__Class* get_class() {
            return il2cpp::get_class<app::PushNotificationSentToPlayerEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PushNotificationSentToPlayerEventData");
        }
        inline app::PushNotificationSentToPlayerEventData* create() {
            return il2cpp::create_object<app::PushNotificationSentToPlayerEventData>(get_class());
        }
    } // namespace PushNotificationSentToPlayerEventData
} // namespace app::classes::types
