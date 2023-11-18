#pragma once
#include <Modloader/app/structs/VirtualCurrencyRechargeTime_1__Array.h>
#include <Modloader/app/structs/VirtualCurrencyRechargeTime_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VirtualCurrencyRechargeTime_1__Array {
        inline app::VirtualCurrencyRechargeTime_1__Array__Class** type_info() {
            static app::VirtualCurrencyRechargeTime_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VirtualCurrencyRechargeTime_1__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VirtualCurrencyRechargeTime_1__Array__Class* get_class() {
            return il2cpp::get_class<app::VirtualCurrencyRechargeTime_1__Array__Class>(type_info(), "PlayFab.MatchmakerModels", "VirtualCurrencyRechargeTime[]");
        }
        inline app::VirtualCurrencyRechargeTime_1__Array* create() {
            return il2cpp::create_object<app::VirtualCurrencyRechargeTime_1__Array>(get_class());
        }
    } // namespace VirtualCurrencyRechargeTime_1__Array
} // namespace app::classes::types
