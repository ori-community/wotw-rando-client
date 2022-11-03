#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PushNotificationSentToPlayerEventData {
        namespace {
            inline app::PushNotificationSentToPlayerEventData__Class* type_info_ref = nullptr;
        }
        inline app::PushNotificationSentToPlayerEventData__Class** type_info = &type_info_ref;
        inline app::PushNotificationSentToPlayerEventData__Class* get_class() {
            return il2cpp::get_class<app::PushNotificationSentToPlayerEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PushNotificationSentToPlayerEventData");
        }
        inline app::PushNotificationSentToPlayerEventData* create() {
            return il2cpp::create_object<app::PushNotificationSentToPlayerEventData>(get_class());
        }
    } // namespace PushNotificationSentToPlayerEventData
} // namespace app::classes::types
