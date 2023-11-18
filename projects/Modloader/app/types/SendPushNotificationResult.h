#pragma once
#include <Modloader/app/structs/SendPushNotificationResult.h>
#include <Modloader/app/structs/SendPushNotificationResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SendPushNotificationResult {
        inline app::SendPushNotificationResult__Class** type_info() {
            static app::SendPushNotificationResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SendPushNotificationResult__Class**)(modloader::win::memory::resolve_rva(0x0475A7A0));
            }
            return cache;
        }
        inline app::SendPushNotificationResult__Class* get_class() {
            return il2cpp::get_class<app::SendPushNotificationResult__Class>(type_info(), "PlayFab.ServerModels", "SendPushNotificationResult");
        }
        inline app::SendPushNotificationResult* create() {
            return il2cpp::create_object<app::SendPushNotificationResult>(get_class());
        }
    } // namespace SendPushNotificationResult
} // namespace app::classes::types
