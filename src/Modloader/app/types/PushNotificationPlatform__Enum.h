#pragma once
#include <Modloader/app/structs/PushNotificationPlatform__Enum.h>
#include <Modloader/app/structs/PushNotificationPlatform__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PushNotificationPlatform__Enum {
        inline app::PushNotificationPlatform__Enum__Class** type_info() {
            static app::PushNotificationPlatform__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PushNotificationPlatform__Enum__Class**)(modloader::win::memory::resolve_rva(0x04705A48));
            }
            return cache;
        }
        inline app::PushNotificationPlatform__Enum__Class* get_class() {
            return il2cpp::get_class<app::PushNotificationPlatform__Enum__Class>(type_info(), "PlayFab.ClientModels", "PushNotificationPlatform");
        }
        inline app::PushNotificationPlatform__Enum* create() {
            return il2cpp::create_object<app::PushNotificationPlatform__Enum>(get_class());
        }
    } // namespace PushNotificationPlatform__Enum
} // namespace app::classes::types
