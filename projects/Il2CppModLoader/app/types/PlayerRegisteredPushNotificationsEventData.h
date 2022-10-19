#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerRegisteredPushNotificationsEventData {
        namespace {
            inline app::PlayerRegisteredPushNotificationsEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerRegisteredPushNotificationsEventData__Class** type_info = &type_info_ref;
        inline app::PlayerRegisteredPushNotificationsEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerRegisteredPushNotificationsEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerRegisteredPushNotificationsEventData");
        }
        inline app::PlayerRegisteredPushNotificationsEventData* create() {
            return il2cpp::create_object<app::PlayerRegisteredPushNotificationsEventData>(get_class());
        }
    } // namespace PlayerRegisteredPushNotificationsEventData
} // namespace app::classes::types
