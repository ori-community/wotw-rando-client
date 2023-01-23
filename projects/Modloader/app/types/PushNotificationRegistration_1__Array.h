#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PushNotificationRegistration_1__Array__Class.h>
#include <Modloader/app/structs/PushNotificationRegistration_1__Array.h>

namespace app::classes::types {
    namespace PushNotificationRegistration_1__Array {
        namespace {
            inline app::PushNotificationRegistration_1__Array__Class* type_info_ref = nullptr;
        }
        inline app::PushNotificationRegistration_1__Array__Class** type_info = &type_info_ref;
        inline app::PushNotificationRegistration_1__Array__Class* get_class() {
            return il2cpp::get_class<app::PushNotificationRegistration_1__Array__Class>(type_info, "PlayFab.PlayStreamModels", "PushNotificationRegistration[]");
        }
        inline app::PushNotificationRegistration_1__Array* create() {
            return il2cpp::create_object<app::PushNotificationRegistration_1__Array>(get_class());
        }
    } // namespace PushNotificationRegistration_1__Array
} // namespace app::classes::types
