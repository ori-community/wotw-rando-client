#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RegisterForIOSPushNotificationRequest__Class.h>
#include <Modloader/app/structs/RegisterForIOSPushNotificationRequest.h>

namespace app::classes::types {
    namespace RegisterForIOSPushNotificationRequest {
        inline app::RegisterForIOSPushNotificationRequest__Class** type_info = (app::RegisterForIOSPushNotificationRequest__Class**)(modloader::win::memory::resolve_rva(0x04740110));
        inline app::RegisterForIOSPushNotificationRequest__Class* get_class() {
            return il2cpp::get_class<app::RegisterForIOSPushNotificationRequest__Class>(type_info, "PlayFab.ClientModels", "RegisterForIOSPushNotificationRequest");
        }
        inline app::RegisterForIOSPushNotificationRequest* create() {
            return il2cpp::create_object<app::RegisterForIOSPushNotificationRequest>(get_class());
        }
    } // namespace RegisterForIOSPushNotificationRequest
} // namespace app::classes::types
