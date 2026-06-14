#pragma once
#include <Modloader/app/structs/VirtualCurrencyRechargeTime__Array.h>
#include <Modloader/app/structs/VirtualCurrencyRechargeTime__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VirtualCurrencyRechargeTime__Array {
        inline app::VirtualCurrencyRechargeTime__Array__Class** type_info() {
            static app::VirtualCurrencyRechargeTime__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VirtualCurrencyRechargeTime__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VirtualCurrencyRechargeTime__Array__Class* get_class() {
            return il2cpp::get_class<app::VirtualCurrencyRechargeTime__Array__Class>(type_info(), "PlayFab.ClientModels", "VirtualCurrencyRechargeTime[]");
        }
        inline app::VirtualCurrencyRechargeTime__Array* create() {
            return il2cpp::create_object<app::VirtualCurrencyRechargeTime__Array>(get_class());
        }
    } // namespace VirtualCurrencyRechargeTime__Array
} // namespace app::classes::types
