#pragma once
#include <Modloader/app/structs/PlayerVirtualCurrencyBalanceChangedEventData.h>
#include <Modloader/app/structs/PlayerVirtualCurrencyBalanceChangedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerVirtualCurrencyBalanceChangedEventData {
        inline app::PlayerVirtualCurrencyBalanceChangedEventData__Class** type_info() {
            static app::PlayerVirtualCurrencyBalanceChangedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerVirtualCurrencyBalanceChangedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerVirtualCurrencyBalanceChangedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerVirtualCurrencyBalanceChangedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerVirtualCurrencyBalanceChangedEventData");
        }
        inline app::PlayerVirtualCurrencyBalanceChangedEventData* create() {
            return il2cpp::create_object<app::PlayerVirtualCurrencyBalanceChangedEventData>(get_class());
        }
    } // namespace PlayerVirtualCurrencyBalanceChangedEventData
} // namespace app::classes::types
