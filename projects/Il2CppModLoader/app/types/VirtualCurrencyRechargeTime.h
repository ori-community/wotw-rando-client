#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VirtualCurrencyRechargeTime {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VirtualCurrencyRechargeTime__Class** type_info;
        inline app::VirtualCurrencyRechargeTime__Class* get_class() {
            return il2cpp::get_class<app::VirtualCurrencyRechargeTime__Class>(type_info, "PlayFab.ClientModels", "VirtualCurrencyRechargeTime");
        }
        inline app::VirtualCurrencyRechargeTime* create() {
            return il2cpp::create_object<app::VirtualCurrencyRechargeTime>(get_class());
        }
        inline app::VirtualCurrencyRechargeTime__Array* create_array(int size) {
            return il2cpp::array_new<app::VirtualCurrencyRechargeTime__Array>(get_class(), size);
        }
        inline app::VirtualCurrencyRechargeTime__Array* create_array(const std::vector<app::VirtualCurrencyRechargeTime*>& items) {
            return il2cpp::array_new<app::VirtualCurrencyRechargeTime__Array>(get_class(), items);
        }
    } // namespace VirtualCurrencyRechargeTime
} // namespace app::classes::types
