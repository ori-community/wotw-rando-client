#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityVirtualCurrencyBalancesChangedEventData {
        namespace {
            app::EntityVirtualCurrencyBalancesChangedEventData__Class* type_info_ref = nullptr;
        }
        app::EntityVirtualCurrencyBalancesChangedEventData__Class** type_info = &type_info_ref;
        inline app::EntityVirtualCurrencyBalancesChangedEventData__Class* get_class() {
            return il2cpp::get_class<app::EntityVirtualCurrencyBalancesChangedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "EntityVirtualCurrencyBalancesChangedEventData");
        }
        inline app::EntityVirtualCurrencyBalancesChangedEventData* create() {
            return il2cpp::create_object<app::EntityVirtualCurrencyBalancesChangedEventData>(get_class());
        }
    } // namespace EntityVirtualCurrencyBalancesChangedEventData
} // namespace app::classes::types
