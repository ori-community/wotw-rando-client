#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerVirtualCurrencyBalanceChangedEventData {
        namespace {
            app::PlayerVirtualCurrencyBalanceChangedEventData__Class* type_info_ref = nullptr;
        }
        app::PlayerVirtualCurrencyBalanceChangedEventData__Class** type_info = &type_info_ref;
        inline app::PlayerVirtualCurrencyBalanceChangedEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerVirtualCurrencyBalanceChangedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerVirtualCurrencyBalanceChangedEventData");
        }
        inline app::PlayerVirtualCurrencyBalanceChangedEventData* create() {
            return il2cpp::create_object<app::PlayerVirtualCurrencyBalanceChangedEventData>(get_class());
        }
    } // namespace PlayerVirtualCurrencyBalanceChangedEventData
} // namespace app::classes::types
