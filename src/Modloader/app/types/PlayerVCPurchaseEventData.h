#pragma once
#include <Modloader/app/structs/PlayerVCPurchaseEventData.h>
#include <Modloader/app/structs/PlayerVCPurchaseEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerVCPurchaseEventData {
        inline app::PlayerVCPurchaseEventData__Class** type_info() {
            static app::PlayerVCPurchaseEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerVCPurchaseEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerVCPurchaseEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerVCPurchaseEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerVCPurchaseEventData");
        }
        inline app::PlayerVCPurchaseEventData* create() {
            return il2cpp::create_object<app::PlayerVCPurchaseEventData>(get_class());
        }
    } // namespace PlayerVCPurchaseEventData
} // namespace app::classes::types
