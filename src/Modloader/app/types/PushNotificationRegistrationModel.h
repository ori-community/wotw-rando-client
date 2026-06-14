#pragma once
#include <Modloader/app/structs/PushNotificationRegistrationModel.h>
#include <Modloader/app/structs/PushNotificationRegistrationModel__Array.h>
#include <Modloader/app/structs/PushNotificationRegistrationModel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PushNotificationRegistrationModel {
        inline app::PushNotificationRegistrationModel__Class** type_info() {
            static app::PushNotificationRegistrationModel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PushNotificationRegistrationModel__Class**)(modloader::win::memory::resolve_rva(0x04761828));
            }
            return cache;
        }
        inline app::PushNotificationRegistrationModel__Class* get_class() {
            return il2cpp::get_class<app::PushNotificationRegistrationModel__Class>(type_info(), "PlayFab.ClientModels", "PushNotificationRegistrationModel");
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
