#pragma once
#include <Modloader/app/structs/PlayerStartPurchaseEventData.h>
#include <Modloader/app/structs/PlayerStartPurchaseEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerStartPurchaseEventData {
        inline app::PlayerStartPurchaseEventData__Class** type_info() {
            static app::PlayerStartPurchaseEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerStartPurchaseEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerStartPurchaseEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerStartPurchaseEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerStartPurchaseEventData");
        }
        inline app::PlayerStartPurchaseEventData* create() {
            return il2cpp::create_object<app::PlayerStartPurchaseEventData>(get_class());
        }
    } // namespace PlayerStartPurchaseEventData
} // namespace app::classes::types
