#pragma once
#include <Modloader/app/structs/RegisterForIOSPushNotificationResult.h>
#include <Modloader/app/structs/RegisterForIOSPushNotificationResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegisterForIOSPushNotificationResult {
        inline app::RegisterForIOSPushNotificationResult__Class** type_info() {
            static app::RegisterForIOSPushNotificationResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegisterForIOSPushNotificationResult__Class**)(modloader::win::memory::resolve_rva(0x0475B460));
            }
            return cache;
        }
        inline app::RegisterForIOSPushNotificationResult__Class* get_class() {
            return il2cpp::get_class<app::RegisterForIOSPushNotificationResult__Class>(type_info(), "PlayFab.ClientModels", "RegisterForIOSPushNotificationResult");
        }
        inline app::RegisterForIOSPushNotificationResult* create() {
            return il2cpp::create_object<app::RegisterForIOSPushNotificationResult>(get_class());
        }
    } // namespace RegisterForIOSPushNotificationResult
} // namespace app::classes::types
