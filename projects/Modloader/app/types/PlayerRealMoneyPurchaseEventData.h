#pragma once
#include <Modloader/app/structs/PlayerRealMoneyPurchaseEventData.h>
#include <Modloader/app/structs/PlayerRealMoneyPurchaseEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerRealMoneyPurchaseEventData {
        inline app::PlayerRealMoneyPurchaseEventData__Class** type_info() {
            static app::PlayerRealMoneyPurchaseEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerRealMoneyPurchaseEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerRealMoneyPurchaseEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerRealMoneyPurchaseEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerRealMoneyPurchaseEventData");
        }
        inline app::PlayerRealMoneyPurchaseEventData* create() {
            return il2cpp::create_object<app::PlayerRealMoneyPurchaseEventData>(get_class());
        }
    } // namespace PlayerRealMoneyPurchaseEventData
} // namespace app::classes::types
