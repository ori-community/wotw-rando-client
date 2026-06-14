#pragma once
#include <Modloader/app/structs/CharacterVirtualCurrencyBalanceChangedEventData.h>
#include <Modloader/app/structs/CharacterVirtualCurrencyBalanceChangedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterVirtualCurrencyBalanceChangedEventData {
        inline app::CharacterVirtualCurrencyBalanceChangedEventData__Class** type_info() {
            static app::CharacterVirtualCurrencyBalanceChangedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterVirtualCurrencyBalanceChangedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterVirtualCurrencyBalanceChangedEventData__Class* get_class() {
            return il2cpp::get_class<app::CharacterVirtualCurrencyBalanceChangedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "CharacterVirtualCurrencyBalanceChangedEventData");
        }
        inline app::CharacterVirtualCurrencyBalanceChangedEventData* create() {
            return il2cpp::create_object<app::CharacterVirtualCurrencyBalanceChangedEventData>(get_class());
        }
    } // namespace CharacterVirtualCurrencyBalanceChangedEventData
} // namespace app::classes::types
