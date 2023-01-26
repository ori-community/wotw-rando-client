#pragma once
#include <Modloader/app/structs/EntityVirtualCurrencyBalancesChangedEventData.h>
#include <Modloader/app/structs/EntityVirtualCurrencyBalancesChangedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityVirtualCurrencyBalancesChangedEventData {
        inline app::EntityVirtualCurrencyBalancesChangedEventData__Class** type_info() {
            static app::EntityVirtualCurrencyBalancesChangedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityVirtualCurrencyBalancesChangedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityVirtualCurrencyBalancesChangedEventData__Class* get_class() {
            return il2cpp::get_class<app::EntityVirtualCurrencyBalancesChangedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "EntityVirtualCurrencyBalancesChangedEventData");
        }
        inline app::EntityVirtualCurrencyBalancesChangedEventData* create() {
            return il2cpp::create_object<app::EntityVirtualCurrencyBalancesChangedEventData>(get_class());
        }
    } // namespace EntityVirtualCurrencyBalancesChangedEventData
} // namespace app::classes::types
