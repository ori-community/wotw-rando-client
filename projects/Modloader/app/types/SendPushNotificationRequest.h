#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SendPushNotificationRequest__Class.h>
#include <Modloader/app/structs/SendPushNotificationRequest.h>

namespace app::classes::types {
    namespace SendPushNotificationRequest {
        inline app::SendPushNotificationRequest__Class** type_info = (app::SendPushNotificationRequest__Class**)(modloader::win::memory::resolve_rva(0x04708DC0));
        inline app::SendPushNotificationRequest__Class* get_class() {
            return il2cpp::get_class<app::SendPushNotificationRequest__Class>(type_info, "PlayFab.ServerModels", "SendPushNotificationRequest");
        }
        inline app::SendPushNotificationRequest* create() {
            return il2cpp::create_object<app::SendPushNotificationRequest>(get_class());
        }
    } // namespace SendPushNotificationRequest
} // namespace app::classes::types
