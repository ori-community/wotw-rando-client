#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VirtualCurrencyRechargeTime_2__Array {
        namespace {
            inline app::VirtualCurrencyRechargeTime_2__Array__Class* type_info_ref = nullptr;
        }
        inline app::VirtualCurrencyRechargeTime_2__Array__Class** type_info = &type_info_ref;
        inline app::VirtualCurrencyRechargeTime_2__Array__Class* get_class() {
            return il2cpp::get_class<app::VirtualCurrencyRechargeTime_2__Array__Class>(type_info, "PlayFab.ServerModels", "VirtualCurrencyRechargeTime[]");
        }
        inline app::VirtualCurrencyRechargeTime_2__Array* create() {
            return il2cpp::create_object<app::VirtualCurrencyRechargeTime_2__Array>(get_class());
        }
    } // namespace VirtualCurrencyRechargeTime_2__Array
} // namespace app::classes::types
