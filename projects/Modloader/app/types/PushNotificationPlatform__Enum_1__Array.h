#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PushNotificationPlatform__Enum_1__Array__Class.h>
#include <Modloader/app/structs/PushNotificationPlatform__Enum_1__Array.h>

namespace app::classes::types {
    namespace PushNotificationPlatform__Enum_1__Array {
        namespace {
            inline app::PushNotificationPlatform__Enum_1__Array__Class* type_info_ref = nullptr;
        }
        inline app::PushNotificationPlatform__Enum_1__Array__Class** type_info = &type_info_ref;
        inline app::PushNotificationPlatform__Enum_1__Array__Class* get_class() {
            return il2cpp::get_class<app::PushNotificationPlatform__Enum_1__Array__Class>(type_info, "PlayFab.ServerModels", "PushNotificationPlatform[]");
        }
        inline app::PushNotificationPlatform__Enum_1__Array* create() {
            return il2cpp::create_object<app::PushNotificationPlatform__Enum_1__Array>(get_class());
        }
    } // namespace PushNotificationPlatform__Enum_1__Array
} // namespace app::classes::types
