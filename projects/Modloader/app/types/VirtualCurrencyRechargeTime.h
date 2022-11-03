#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VirtualCurrencyRechargeTime {
        inline app::VirtualCurrencyRechargeTime__Class** type_info = (app::VirtualCurrencyRechargeTime__Class**)(modloader::win::memory::resolve_rva(0x04783D30));
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
