#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VirtualCurrencyRechargeTime_1 {
        namespace {
            app::VirtualCurrencyRechargeTime_1__Class* type_info_ref = nullptr;
        }
        app::VirtualCurrencyRechargeTime_1__Class** type_info = &type_info_ref;
        inline app::VirtualCurrencyRechargeTime_1__Class* get_class() {
            return il2cpp::get_class<app::VirtualCurrencyRechargeTime_1__Class>(type_info, "PlayFab.MatchmakerModels", "VirtualCurrencyRechargeTime");
        }
        inline app::VirtualCurrencyRechargeTime_1* create() {
            return il2cpp::create_object<app::VirtualCurrencyRechargeTime_1>(get_class());
        }
        inline app::VirtualCurrencyRechargeTime_1__Array* create_array(int size) {
            return il2cpp::array_new<app::VirtualCurrencyRechargeTime_1__Array>(get_class(), size);
        }
        inline app::VirtualCurrencyRechargeTime_1__Array* create_array(const std::vector<app::VirtualCurrencyRechargeTime_1*>& items) {
            return il2cpp::array_new<app::VirtualCurrencyRechargeTime_1__Array>(get_class(), items);
        }
    } // namespace VirtualCurrencyRechargeTime_1
} // namespace app::classes::types
