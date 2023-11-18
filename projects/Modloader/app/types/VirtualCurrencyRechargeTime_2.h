#pragma once
#include <Modloader/app/structs/VirtualCurrencyRechargeTime_2.h>
#include <Modloader/app/structs/VirtualCurrencyRechargeTime_2__Array.h>
#include <Modloader/app/structs/VirtualCurrencyRechargeTime_2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VirtualCurrencyRechargeTime_2 {
        inline app::VirtualCurrencyRechargeTime_2__Class** type_info() {
            static app::VirtualCurrencyRechargeTime_2__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VirtualCurrencyRechargeTime_2__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VirtualCurrencyRechargeTime_2__Class* get_class() {
            return il2cpp::get_class<app::VirtualCurrencyRechargeTime_2__Class>(type_info(), "PlayFab.ServerModels", "VirtualCurrencyRechargeTime");
        }
        inline app::VirtualCurrencyRechargeTime_2* create() {
            return il2cpp::create_object<app::VirtualCurrencyRechargeTime_2>(get_class());
        }
        inline app::VirtualCurrencyRechargeTime_2__Array* create_array(int size) {
            return il2cpp::array_new<app::VirtualCurrencyRechargeTime_2__Array>(get_class(), size);
        }
        inline app::VirtualCurrencyRechargeTime_2__Array* create_array(const std::vector<app::VirtualCurrencyRechargeTime_2*>& items) {
            return il2cpp::array_new<app::VirtualCurrencyRechargeTime_2__Array>(get_class(), items);
        }
    } // namespace VirtualCurrencyRechargeTime_2
} // namespace app::classes::types
