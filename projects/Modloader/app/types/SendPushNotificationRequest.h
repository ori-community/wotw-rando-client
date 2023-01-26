#pragma once
#include <Modloader/app/structs/SendPushNotificationRequest.h>
#include <Modloader/app/structs/SendPushNotificationRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SendPushNotificationRequest {
        inline app::SendPushNotificationRequest__Class** type_info() {
            static app::SendPushNotificationRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SendPushNotificationRequest__Class**)(modloader::win::memory::resolve_rva(0x04708DC0));
            }
            return cache;
        }
        inline app::SendPushNotificationRequest__Class* get_class() {
            return il2cpp::get_class<app::SendPushNotificationRequest__Class>(type_info(), "PlayFab.ServerModels", "SendPushNotificationRequest");
        }
        inline app::SendPushNotificationRequest* create() {
            return il2cpp::create_object<app::SendPushNotificationRequest>(get_class());
        }
    } // namespace SendPushNotificationRequest
} // namespace app::classes::types
