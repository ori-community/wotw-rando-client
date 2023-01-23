#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PushNotificationRegistrationModel__Array__Class.h>
#include <Modloader/app/structs/PushNotificationRegistrationModel__Array.h>

namespace app::classes::types {
    namespace PushNotificationRegistrationModel__Array {
        namespace {
            inline app::PushNotificationRegistrationModel__Array__Class* type_info_ref = nullptr;
        }
        inline app::PushNotificationRegistrationModel__Array__Class** type_info = &type_info_ref;
        inline app::PushNotificationRegistrationModel__Array__Class* get_class() {
            return il2cpp::get_class<app::PushNotificationRegistrationModel__Array__Class>(type_info, "PlayFab.ClientModels", "PushNotificationRegistrationModel[]");
        }
        inline app::PushNotificationRegistrationModel__Array* create() {
            return il2cpp::create_object<app::PushNotificationRegistrationModel__Array>(get_class());
        }
    } // namespace PushNotificationRegistrationModel__Array
} // namespace app::classes::types
