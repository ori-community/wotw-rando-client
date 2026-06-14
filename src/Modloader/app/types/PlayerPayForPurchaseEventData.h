#pragma once
#include <Modloader/app/structs/PlayerPayForPurchaseEventData.h>
#include <Modloader/app/structs/PlayerPayForPurchaseEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerPayForPurchaseEventData {
        inline app::PlayerPayForPurchaseEventData__Class** type_info() {
            static app::PlayerPayForPurchaseEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerPayForPurchaseEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerPayForPurchaseEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerPayForPurchaseEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerPayForPurchaseEventData");
        }
        inline app::PlayerPayForPurchaseEventData* create() {
            return il2cpp::create_object<app::PlayerPayForPurchaseEventData>(get_class());
        }
    } // namespace PlayerPayForPurchaseEventData
} // namespace app::classes::types
