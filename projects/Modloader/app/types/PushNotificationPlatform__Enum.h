#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PushNotificationPlatform__Enum {
        inline app::PushNotificationPlatform__Enum__Class** type_info = (app::PushNotificationPlatform__Enum__Class**)(modloader::win::memory::resolve_rva(0x04705A48));
        inline app::PushNotificationPlatform__Enum__Class* get_class() {
            return il2cpp::get_class<app::PushNotificationPlatform__Enum__Class>(type_info, "PlayFab.ClientModels", "PushNotificationPlatform");
        }
        inline app::PushNotificationPlatform__Enum* create() {
            return il2cpp::create_object<app::PushNotificationPlatform__Enum>(get_class());
        }
    } // namespace PushNotificationPlatform__Enum
} // namespace app::classes::types
