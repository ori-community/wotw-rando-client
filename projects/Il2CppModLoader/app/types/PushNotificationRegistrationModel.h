#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PushNotificationRegistrationModel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PushNotificationRegistrationModel__Class** type_info;
        inline app::PushNotificationRegistrationModel__Class* get_class() {
            return il2cpp::get_class<app::PushNotificationRegistrationModel__Class>(type_info, "PlayFab.ClientModels", "PushNotificationRegistrationModel");
        }
        inline app::PushNotificationRegistrationModel* create() {
            return il2cpp::create_object<app::PushNotificationRegistrationModel>(get_class());
        }
        inline app::PushNotificationRegistrationModel__Array* create_array(int size) {
            return il2cpp::array_new<app::PushNotificationRegistrationModel__Array>(get_class(), size);
        }
        inline app::PushNotificationRegistrationModel__Array* create_array(const std::vector<app::PushNotificationRegistrationModel*>& items) {
            return il2cpp::array_new<app::PushNotificationRegistrationModel__Array>(get_class(), items);
        }
    } // namespace PushNotificationRegistrationModel
} // namespace app::classes::types
