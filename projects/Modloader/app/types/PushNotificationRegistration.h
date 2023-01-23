#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PushNotificationRegistration__Class.h>
#include <Modloader/app/structs/PushNotificationRegistration.h>
#include <Modloader/app/structs/PushNotificationRegistration__Array.h>

namespace app::classes::types {
    namespace PushNotificationRegistration {
        namespace {
            inline app::PushNotificationRegistration__Class* type_info_ref = nullptr;
        }
        inline app::PushNotificationRegistration__Class** type_info = &type_info_ref;
        inline app::PushNotificationRegistration__Class* get_class() {
            return il2cpp::get_class<app::PushNotificationRegistration__Class>(type_info, "PlayFab.ServerModels", "PushNotificationRegistration");
        }
        inline app::PushNotificationRegistration* create() {
            return il2cpp::create_object<app::PushNotificationRegistration>(get_class());
        }
        inline app::PushNotificationRegistration__Array* create_array(int size) {
            return il2cpp::array_new<app::PushNotificationRegistration__Array>(get_class(), size);
        }
        inline app::PushNotificationRegistration__Array* create_array(const std::vector<app::PushNotificationRegistration*>& items) {
            return il2cpp::array_new<app::PushNotificationRegistration__Array>(get_class(), items);
        }
    } // namespace PushNotificationRegistration
} // namespace app::classes::types
